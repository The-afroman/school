/**************************
* Faris Hijazi
* CS1D
* Assignment 6
**************************/

#include <iostream>

using namespace std; 
  
// Hash table size 
#define TABLE_SIZE 29 
  
// Used in second hash function. 
#define PRIME 13 
  
class DoubleHash 
{ 
    // Pointer to an array containing buckets 
    int *hashTable;
    string *data;
    int curr_size; 
  
public: 
  
    // function to check if hash table is full 
    bool isFull() 
    { 
  
        // if hash size reaches maximum size 
        return (curr_size == TABLE_SIZE); 
    } 
  
    // function to calculate first hash 
    int hash1(int key) 
    { 
        return (key % TABLE_SIZE); 
    } 
  
    // function to calculate second hash 
    int hash2(int key) 
    { 
        return (PRIME - (key % PRIME)); 
    } 
  
    DoubleHash() 
    { 
        hashTable = new int[TABLE_SIZE]; 
        data = new string[TABLE_SIZE];
        curr_size = 0; 
        for (int i=0; i<TABLE_SIZE; i++) 
            hashTable[i] = -1; 
    } 
  
    // function to insert key into hash table 
    void insertHash(int key, string str) 
    { 
        // if hash table is full 
        if (isFull()) 
            return; 
  
        // get index from first hash 
        int index = hash1(key); 
  
        // if collision occurs 
        if (hashTable[index] != -1) 
        { 
            // get index2 from second hash 
            int index2 = hash2(key); 
            int i = 1; 
            while (1) 
            { 
                // get newIndex 
                int newIndex = (index + i * index2) % TABLE_SIZE; 
  
                // if no collision occurs, store 
                // the key 
                if (hashTable[newIndex] == -1) 
                { 
                    hashTable[newIndex] = key; 
                    data[newIndex] = str;
                    break; 
                } 
                i++; 
            } 
        } 
  
        // if no collision occurs 
        else
        {
            hashTable[index] = key;
            data[index] = str; 
        }
        curr_size++; 
    }

    void remKey(int key)
    {
        // get index from first hash 
        int index = hash1(key); 
        cout << "\n\nremoving key "  << key << endl;
        /*if (hashTable[index] == -1) 
        { 
            // get index2 from second hash 
            int index2 = hash2(key); 
            int i = 1; 
            while (1) 
            { 
                // get newIndex 
                int newIndex = (index + i * index2) % TABLE_SIZE; 
  
                // the key 
                if (hashTable[newIndex] != -1) 
                { 
                    hashTable[newIndex] = -1; 
                    break; 
                } 
                i++; 
            }
        }
        else
        */
        {
            hashTable[index] = -1;
        }
    }


  
    // function to display the hash table 
    void displayHash() 
    { 
        cout << "\n\nDOUBLE HASH MAP\n" << "---------------\n";
        for (int i = 0; i < TABLE_SIZE; i++) 
        { 
            if (hashTable[i] != -1) 
                cout << i << " --> " << hashTable[i] 
                     << " " << data[i] << endl; 
            else
                cout << i << endl; 
        } 
    } 
};

class QuadraticHash
{ 
    // Pointer to an array containing buckets 
    int *hashTable;
    string *data;
    int curr_size; 
  
public: 
  
    // function to check if hash table is full 
    bool isFull() 
    { 
  
        // if hash size reaches maximum size 
        return (curr_size == TABLE_SIZE); 
    } 
  
    // function to calculate first hash 
    int hash1(int key) 
    { 
        return (key % TABLE_SIZE); 
    } 
  
    // function to calculate second hash 
    int hash2(int key) 
    { 
        return (PRIME - (key % PRIME)); 
    } 
  
    QuadraticHash() 
    { 
        hashTable = new int[TABLE_SIZE]; 
        data = new string[TABLE_SIZE];
        curr_size = 0; 
        for (int i=0; i<TABLE_SIZE; i++) 
            hashTable[i] = -1; 
    } 
  
    // function to insert key into hash table 
    void insertHash(int key, string str) 
    { 
        // if hash table is full 
        if (isFull()) 
            return; 
  
        // get index from first hash 
        int index = hash1(key); 
  
        // if collision occurs 
        if (hashTable[index] != -1) 
        { 
            // get index2 from second hash
            int i = 2;
            while (1) 
            { 
                // get newIndex 
                int newIndex = (index + (i^2)) % TABLE_SIZE; 
  
                // if no collision occurs, store 
                // the key 
                if (hashTable[newIndex] == -1) 
                { 
                    hashTable[newIndex] = key; 
                    data[newIndex] = str;
                    break; 
                } 
                i++; 
            } 
        } 
  
        // if no collision occurs 
        else
        {
            hashTable[index] = key;
            data[index] = str; 
        }
        curr_size++; 
    }

    void remKey(int key)
    {
        // get index from first hash 
        int index = hash1(key); 
        cout << "\n\nremoving key "  << key << endl;
        /*if (hashTable[index] == -1) 
        {
            // get index2 from second hash 
            int index2 = hash2(key); 
            int i = 1; 
            while (1) 
            { 
                // get newIndex 
                int newIndex = (index + i * index2) % TABLE_SIZE; 
  
                // the key 
                if (hashTable[newIndex] != -1) 
                { 
                    hashTable[newIndex] = -1; 
                    break; 
                } 
                i++; 
            }
        }
        else
        */
        {
            hashTable[index] = -1;
        }
    }
  
    // function to display the hash table 
    void displayHash()
    { 
        cout << "\n\nQUADRATIC HASH MAP\n" << "---------------\n";
        for (int i = 0; i < TABLE_SIZE; i++) 
        { 
            if (hashTable[i] != -1) 
                cout << i << " --> " << hashTable[i] 
                     << " " << data[i] << endl; 
            else
                cout << i << endl; 
        } 
    } 
};