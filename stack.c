/* 
 * Program 			: stack.c
 * Deskripsi 		: Body proses yang berkaitan dengan stack
 * Nama 			: Syifa Khairina 
 * Tanggal			: 27 Mei 2022
 * Compiler			: Dev-C++
 * ==============================================================
 */


#include "stack.h"

int isStackEmpty(Stack *stack){
// fungsi untuk mengecek kondisi stack, apakah stack tersebut masih kosong atau sudah terisi elemen
		if(!stack) {
		puts("Stack is Empty");
		return TRUE;
	}
	return stack->topNode == NULL;
}

StackNode* createStackNode(){
// Untuk mengalokasikan topNode dari stack
	StackNode *temp = (StackNode*)calloc(sizeof(StackNode), 1);
	if(!temp){
		puts("memory is full");
		exit(1);
	}
	return temp;
}

Stack* createStack(){
// // Untuk mengalokasikan Stack
	Stack *temp = (Stack*)calloc(sizeof(Stack), 1);
	if(!temp) {
		puts("memory is full");
		exit(1);
	}
	return temp;
}

void printStackNode(StackNode *tNode){
// untuk menentukan nilai isChar, 1 untuk operator dan 0 untuk operand
	if(!tNode)	return;
	if(tNode->isChar){
		printf("%c", tNode->data.opr);
	}
	else{
		printf("%g", tNode->data.num);
	}
}

void push(Stack *stack, Data data, int isChar){
// Untuk insert node baru ke stack
	StackNode *temp = createStackNode();
	if(!temp) {
		puts("memory is full");
		exit(1);
	}
	temp->data = data;
	temp->isChar = isChar;
	temp->pNode = stack->topNode;
	stack->topNode = temp;
}

StackNode pop(Stack *stack){
//Untuk mendelete node pada stack
	StackNode res;
	res.data = dummy_data;
	res.isChar = FALSE;
	if(!stack || isStackEmpty(stack))	return res;
	res = *(stack->topNode);
	StackNode *temp = stack->topNode;
	stack->topNode = temp->pNode;
	free(temp);
	return res;
}

void deleteStack(Stack *stack){
	StackNode sn;
	while(!isStackEmpty(stack)) {
		sn = pop(stack);
		printStackNode(&sn);
	}
}



