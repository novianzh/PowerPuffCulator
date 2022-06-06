/* 
 * Program 			: tree.c
 * Deskripsi 		: Body proses yang berkaitan dengan tree
 * Nama 			: Ghessa Theniana 
 * Tanggal			: 27 Mei 2022
 * Compiler			: Dev-C++
 * ==============================================================
 */
 
 #include "tree.h"
 
 Root* rootNode(){
// Mengalokasikan root dari tree
	Root* temp = (Root*)calloc(sizeof(Root), 1);
	if(!temp) {
		puts("memori penuh.");
		exit(1);
	}
	return temp;
}

TreeNode* createTreeNode(){
// Mengalokasikan tree node
	TreeNode* temp = (TreeNode*)calloc(sizeof(TreeNode), 1);
	if(!temp){
		puts("memori penuh.");
		exit(1);
	}
	return temp;
}

TreeNode* MakeChild(TreeNode *parentNode, Data data, int isChar){
// Membuat node baru sebagai son dari sebuah node
// Terdapat beberapa kondisi dimana jika child tidak mempunyai parent maka dijadikan parent
	if(!parentNode) //jika tidak ada parent
	{
		parentNode = createTreeNode();
		parentNode->data = data;
		parentNode->isChar = isChar;
		return parentNode;
	}
	if(parentNode->left && parentNode->right)
	{
		parentNode = parentNode->parent;
		if(!parentNode)	return NULL;
		return MakeChild(parentNode, data, isChar);
	}

	if(!isChar) 
	{
		if(parentNode->right)
		{
			makeLChild(parentNode, data, isChar);
		}
		else
		{
			makeRChild(parentNode, data, isChar);
		}
		return parentNode;
	}
	else 
	{

		if(parentNode->left)
		{
			makeRChild(parentNode, data, isChar);
			return parentNode->right;
		}
		else
		{
			makeLChild(parentNode, data, isChar);
			return parentNode->left;
		}
	}
}
void makeLChild(TreeNode *parentNode, Data data, int isChar){
// Modul untuk membuat left child
	TreeNode* temp = createTreeNode();
	if (!temp) return;
	temp->data = data;
	temp->isChar= isChar;
	parentNode->left = temp;
	temp->parent = parentNode;
}

void makeRChild(TreeNode *parentNode, Data data, int isChar){
// Modul untuk membuat right child
	TreeNode* temp = createTreeNode();
	if(!temp)	return;
	temp->data = data;
	temp->isChar = isChar;
	parentNode->right = temp;
	temp->parent = parentNode;
}

void printData(Data data, int isChar){
// Modul untuk memberikan nilai jika dia ischar atau data operator atau number
	if(isChar) {
		printf("%c", data.opr);
	}
	else {
		printf("%g", data.num);
}
}

void traversal(Root *root, int mode){
// Memilih mode traversal
	TreeNode *temp = root->root;
	switch(mode)
	{
		case PREORDER:
			preorderTraversal(temp);
			break;
		case INORDER:
			inorderTraversal(temp);
			break;
		case POSTORDER:
			postorderTraversal(temp);
			break;
	}
}

void preorderTraversal(TreeNode *tNode) {
// Proses traversal preorder
	if(!tNode)	return;
	printData(tNode->data, tNode->isChar);
	preorderTraversal(tNode->left);
	preorderTraversal(tNode->right);
}

void inorderTraversal(TreeNode *tNode) {
// Proses traversal inorder
	if(!tNode)	return;
	inorderTraversal(tNode->left);
	printData(tNode->data, tNode->isChar);
	inorderTraversal(tNode->right);
}

void postorderTraversal(TreeNode *tNode) {
// Proses traversal postorder
	if(!tNode)	return;
	postorderTraversal(tNode->left);
	postorderTraversal(tNode->right);
	printData(tNode->data, tNode->isChar);
}

void removeAllTreeNodes(Root* root) {
// Menunjukan alamat tree yang akan dihapus
	removeTreeNode(root->root);
}

void removeTreeNode(TreeNode *tNode) {
// Mendealokasikan tree

 	if(!tNode)	return;
	removeTreeNode(tNode->left);
	removeTreeNode(tNode->right);
	free(tNode);
}