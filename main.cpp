#include <vector>

#include "source/hash.h"

int main(){
    DataNode t0(0), t1(1), t2(1), t3(2), t4(0);
    DataHash hash;

    hash.addNode(&t0);
    hash.addNode(&t1);
    hash.addNode(&t2);
    hash.addNode(&t3);
    hash.addNode(&t4);

    hash.printMap();

    return 0;
}