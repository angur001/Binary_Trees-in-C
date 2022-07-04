#ifndef BIN_TREE   /* Include guard */
#define BIN_TREE
#include <stdbool.h>
#define SIZE 256


typedef struct TreeNode
{
    int value;
    struct TreeNode *right;
    struct TreeNode *left;
} T_node ;

T_node* createNode(const int value, T_node *left, T_node *right); // create a new node
static void printTree_rec(char* prefix, T_node *root, bool isLeft); // used in printTree
void printTree(T_node *root); // print tree in a fancy way
bool isLeaf(T_node *node); // isLeaf 
void setValue(T_node *node, const int value ); // set the value of the node
void setLink(T_node *node ,T_node *left, T_node *right); // set left and right children
#endif // BIN_TREE