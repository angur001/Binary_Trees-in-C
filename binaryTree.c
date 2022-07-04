#include "binaryTree.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>



T_node* createNode(const int value, T_node *left, T_node *right) {
    T_node *root = (T_node*)malloc(sizeof(T_node));
    if (root != NULL) {
        root->value = value;
        root->right = right;
        root->left = left;
    }
    return root;
}


static void printTree_rec(char* prefix, T_node *root, bool isLeft)
{
    char ext[8] = {'\0'};
    char ext_pr[8] = {'\0'};
    

    if (root != NULL) {
        if (isLeft) {
            strcpy(ext,"|      ");
            strcpy(ext_pr,"\\--L-- ");
        } else {
            strcpy(ext,"       ");
            strcpy(ext_pr,"\\--R-- ");
        }

        printf("%s%s", prefix,ext_pr);
        printf("(%d)\n", root->value);

        // using temp pointer to save current prefix
        char temp[SIZE];
        strcpy(temp,prefix);
        strcat(temp,ext);
        

        if (root->left != NULL) {
            
            printTree_rec(temp, root->left, true);
        } 

        if (root->right != NULL) {

            printTree_rec(temp, root->right, false);
        } 
    }
}
 
// Wrapper over PrintTree_rec()
void printTree(T_node *root)
{
   char prefix[SIZE] = {'\0'};
   printTree_rec(prefix, root, false);
}

bool isLeaf(T_node *node) {
    return ((node->right == NULL) & (node->left == NULL));
}

void setValue(T_node *node, const int value ) {
    node->value = value;
}

void setLink(T_node *node ,T_node *left, T_node *right) {
    node->left = left;
    node->right = right;
}
