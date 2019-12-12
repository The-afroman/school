/**************************
* Faris Hijazi
* CS1D
* Assignment 4
**************************/

#include "bst.h"
//nodes to add
//19, 13, 888, 109, 55, 118, 89, 33, 1001, 18, 44, 88, 12, 24, 49, 7, 25, 59, 28

/* 
    DESCRIPTION:
    
    Items are first stored in a binary search tree;
    then contents of the tree are printed using the 
    following traversals: in-order, post-order, pre-order, 
    breadth-first.

    Finally the tree is printed by level and parent child 
    relationship
*/

int main() {
   create();
   cout<<"\n tree traversal: inorder\n";
   inorder(r);
   cout<<"\n tree traversal: preorder\n";
   preorder(r);
   cout<<"\n tree traversal: postorder\n";
   postorder(r);
   cout<<"\n tree traversal: breadth first\n";
   breadthFirst(r);
   cout << "\n full binary tree\n";
   printTree(r);
   cout << "\n";
   postorderIndented(r, 10);
}