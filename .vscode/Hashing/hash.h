#include<iostream>
using namespace std;

template<typename T>
class Node{
public:
    string key;
    T value;
    Node * next;

    Node(string key, T value){
        this->key;
        this->value;
        next = NULL;
    }
};

class HashTable{
    Node<T> ** table;
    int cs; //total entries that have been inserted
    int ts; //size of table

public:
    HashTable(int default_size = 7){
        cs = 0;
        ts = default_size;

        table = new Node<T>*[ts];

        for(int i=0; i<ts; i++){
            table[i] = NULL;
        }
    }

    void insert(string key, T val){
        
    }
};