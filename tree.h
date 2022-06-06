/* 
 * Program 			: tree.h
 * Deskripsi 		: header proses yang berkaitan dengan stack
 * Nama 			: Syifa Khairina 
 * Tanggal			: 26 Mei 2022
 * Compiler			: Dev-C++
 * ==============================================================
 */
 
#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include "data.h"



Root* rootNode();
// Mengalokasikan root dari tree

TreeNode* createTreeNode();
// Mengalokasikan tree node

TreeNode* MakeChild(TreeNode *parentNode, Data data, int isChar);
// Membuat node baru sebagai son dari sebuah node
// Terdapat beberapa kondisi dimana jika child tidak mempunyai parent maka dijadikan parent

void makeLChild(TreeNode *parentNode, Data data, int isChar);
// Modul untuk membuat left child

void makeRChild(TreeNode *parentNode, Data data, int isChar);
// Modul untuk membuat right child

void printData(Data data, int isChar);
// Modul untuk memberikan nilai jika dia ischar atau data operator atau number

void traversal(Root *root, int mode);
// Memilih mode traversal

void preorderTraversal(TreeNode *tNode);
// Proses traversal preorder

void inorderTraversal(TreeNode *tNode);
// Proses traversal inorder

void postorderTraversal(TreeNode *tNode);
// Proses traversal postorder

void removeAllTreeNodes(Root* root);
// Menunjukan alamat tree yang akan dihapus

void removeTreeNode(TreeNode *tNode);
// Mendealokasikan tree

#endif // TREE_H_INCLUDED

