#pragma once
#include <iostream>
#include <map>

struct DataNode {
    int data;
    DataNode* previous;
    DataNode() : data(0), previous(nullptr) {}
    DataNode(int val) : data(val), previous(nullptr) {}
};

class DataHash {
public:
    DataHash();
    void addNode(DataNode* node);
    DataNode* find(int dataPiece);
    void printMap(); 
    
private:
    std::map<int, DataNode*> dataMap;
};