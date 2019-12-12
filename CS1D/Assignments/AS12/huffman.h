
#include <bits/stdc++.h> 
using namespace std; 
  
// A Huffman tree node 
struct MinHeapNode { 
  
    // One of the input characters 
    char data; 
  
    // Frequency of the character 
    unsigned freq; 
  
    // Left and right child 
    MinHeapNode *left, *right; 
  
    MinHeapNode(char data, unsigned freq) 
  
    { 
  
        left = right = NULL; 
        this->data = data; 
        this->freq = freq; 
    } 
}; 
  
// For comparison of 
// two heap nodes (needed in min heap) 
struct compare { 
  
    bool operator()(MinHeapNode* l, MinHeapNode* r) 
  
    { 
        return (l->freq > r->freq); 
    } 
}; 
  
// Prints huffman codes from 
// the root of Huffman Tree. 
void printCodes(struct MinHeapNode* root, string str, vector<pair<char, string>> & codes) 
{
    if (!root) 
        return; 
  
    if (root->data != '$')
    {
        cout << root->data << ": " << str << "\n"; 
        codes.push_back(pair<char, string>(root->data, str));
    }
    printCodes(root->left, str + "0", codes); 
    printCodes(root->right, str + "1", codes); 
}

// function to return file as an array of characters
vector<char> parseFile(ifstream & input)
{
    vector<char> chars;
    
    char c;
    while(!input.eof())
    {
        input.get(c);
        if(c != '\n')
            chars.push_back(c);
    }
    chars.pop_back();
    return chars;
}

void findFreqs(vector<pair<char, int>> & freqs, vector<char> & chars)
{
    bool addNew = true;
    for(auto i = chars.begin(); i!= chars.end(); i++)
    {
        addNew = true;
        for(auto j = freqs.begin(); j!= freqs.end(); j++)
        {
            if(*i == j->first)
            {
                addNew = false;
                j->second++;
            }
        }
        if(addNew)
        {
            freqs.push_back(pair<char, int>(*i,1));
        }
    }
}

void encode(vector<char> & data, vector<pair<char, string>> & codes)
{
    ofstream encode;
    encode.open("encoded.bin");
    for(auto i : data)
    {
        for(auto j: codes)
            if(i == j.first)
                encode << j.second;
    }
}

void decode(priority_queue<MinHeapNode*, vector<MinHeapNode*>, compare> & huffTree)
{
    ifstream encoded;
    encoded.open("encoded.bin");
    char c;
    MinHeapNode * traverse;
    traverse = huffTree.top();
    while(!encoded.eof())
    {
        encoded.get(c);
        if(c == '0')
        {
            traverse = traverse->left;
        }
        else
        {
            traverse = traverse->right;
        }
        if(traverse->data != '$')
        {
            cout << traverse->data;
            traverse = huffTree.top();
        }
    }
}
 
// The main function that builds a Huffman Tree and 
// print codes by traversing the built Huffman Tree 
priority_queue<MinHeapNode*, vector<MinHeapNode*>, compare> & HuffmanCodes(vector<pair<char, int>> & data, vector<pair<char, string>> & codes) 
{ 
    struct MinHeapNode *left, *right, *top; 
  
    // Create a min heap & inserts all characters of data[] 
    priority_queue<MinHeapNode*, vector<MinHeapNode*>, compare> * minHeap = new priority_queue<MinHeapNode*, vector<MinHeapNode*>, compare>; 
  
    for (unsigned int i = 0; i < data.size(); ++i) 
        minHeap->push(new MinHeapNode(data.at(i).first, data.at(i).second)); 
  
    // Iterate while size of heap doesn't become 1 
    while (minHeap->size() != 1) { 
  
        // Extract the two minimum 
        // freq items from min heap 
        left = minHeap->top(); 
        minHeap->pop(); 
  
        right = minHeap->top(); 
        minHeap->pop(); 
  
        // Create a new internal node with 
        // frequency equal to the sum of the 
        // two nodes frequencies. Make the 
        // two extracted node as left and right children 
        // of this new node. Add this node 
        // to the min heap '$' is a special value 
        // for internal nodes, not used 
        top = new MinHeapNode('$', left->freq + right->freq); 
  
        top->left = left;
        top->right = right;
  
        minHeap->push(top);
    } 
    // Print Huffman codes using 
    // the Huffman tree built above 
    printCodes(minHeap->top(), "", codes);
    return(*minHeap);
}

void compressionRatio(vector<char> & data)
{
    ifstream compressed;
    compressed.open("encoded.bin");
    char c;
    int total_compressed = 0;
    while(!compressed.eof())
    {
        compressed.get(c);
        total_compressed++;
    }
    total_compressed--;

    int total_uncompressed = data.size()*8;

    cout << "compression ratio in bits: " << total_uncompressed << " / " << total_compressed << "\n"
                                          << total_uncompressed/float(total_compressed); 
}