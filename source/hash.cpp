#include "hash.h"

/*  DATA NODE */

/*  DATA HASH */
DataHash::DataHash(){}

void DataHash::addNode(DataNode* node) {
    int rem = node->data%10;  
    if (dataMap.count(rem) == 0){ dataMap[rem] = node; }
    else{ node->previous = dataMap[rem]; dataMap[rem] = node; }
}
DataNode* DataHash::find(int dataPiece){
    int rem = dataPiece%10;
    if(dataMap.count(rem) && dataMap[rem]->data == dataPiece){
        return dataMap[rem];
    }
    return nullptr;
}
void DataHash::printMap() {
    for (auto [rem, node]: dataMap) {
        DataNode* phNode = node;
        while(phNode != nullptr){
            std::cout << "Key: " << rem 
                      << ", Value: " << phNode->data
                      << std::endl;
            phNode = phNode->previous;
        }
    }
}