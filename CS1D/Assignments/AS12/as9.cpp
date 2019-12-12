#include "huffman.h"

int main() 
{
    ifstream file;
    file.open("gburgaddress");
    vector<char> gburg =  parseFile(file);

    cout << "______TEXT______\n";
    for(auto i: gburg)
        cout << i;
    cout << endl << endl;

    cout << "______FREQUENCIES______\n";
    vector<pair<char, int>> data;
    findFreqs(data, gburg);
    for (auto i : data)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
    
    cout << "______HUFFMAN_CODE______\n";
    vector<pair<char, string>> codes;
    priority_queue<MinHeapNode*, vector<MinHeapNode*>, compare> huffTree = HuffmanCodes(data, codes);

    /*for(auto i : codes)
        cout << i.first << " "<< i.second << endl;*/
    cout << endl;
    encode(gburg, codes);
    decode(huffTree);
    cout << endl << endl;
    compressionRatio(gburg);
    return 0;
}