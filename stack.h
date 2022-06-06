/* 
 * Program 			: stack.h
 * Deskripsi 		: header proses yang berkaitan dengan stack
 * Nama 			: Syifa Khairina 
 * Tanggal			: 26 Mei 2022
 * Compiler			: Dev-C++
 * ==============================================================
 */

#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include "data.h"

int isStackEmpty(Stack *stack);
// fungsi untuk mengecek kondisi stack, apakah stack tersebut masih kosong atau sudah terisi elemen

StackNode* createStackNode();
// Untuk mengalokasikan topNode dari stack

Stack* createStack();
// // Untuk mengalokasikan Stack

void printStackNode(StackNode*);
// untuk menentukan nilai isChar, 1 untuk operator dan 0 untuk operand

void push(Stack *stack, Data data, int isChar);
// Untuk insert node baru ke stack

StackNode pop(Stack *stack);
//Untuk mendelete node pada stack

void deleteStack(Stack *stack);

#endif // STACK_H_INCLUDED


