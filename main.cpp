#include "source/hash.h"
#include "source/pyScript.h"

int main(){
    DataHash hash;

    /*
    DataNode t0(0), t1(1), t2(1), t3(2), t4(0);
    hash.addNode(&t0);
    hash.addNode(&t1);
    hash.addNode(&t2);
    hash.addNode(&t3);
    hash.addNode(&t4);
    */
    
    for(int i = 1; i <= 100; i++){
        DataNode *phNode = new DataNode(i);
        hash.addNode(phNode);
    }
    

    hash.printMap();
    return 0;
}