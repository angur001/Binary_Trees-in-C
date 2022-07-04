#include "binaryTree.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    T_node *n1,*n2,*n3,*n4;
    
    n4 = createNode(4,NULL,NULL);
    n2 = createNode(2,NULL,NULL);
    n3 = createNode(3,NULL,n4);
    n1 = createNode(1,n3,n2);
    
    printTree(n1);

    printf((isLeaf(n4)) ? "n4 is Leaf\n" : "n4 is not a Leaf\n");
    printf((isLeaf(n3)) ? "n3 is Leaf\n" : "n3 is not a Leaf\n");
    printf((isLeaf(n1)) ? "n1 is Leaf\n" : "n1 is not a Leaf\n");
}