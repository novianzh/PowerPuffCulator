/* 
 * Program 			: data.h
 * Deskripsi 		: header modul yang digunakan
 * Nama 			: Syifa Khairina 
 * Tanggal			: 23 Mei 2022
 * Compiler			: Dev-C++
 * ==============================================================
 */

#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#define MAX 100

#define PREORDER	0
#define INORDER		1
#define POSTORDER	2

#define TRUE		1
#define FALSE	 	0


typedef union
{
	double num;
	char opr;	
} Data;

const static Data dummy_data = {0};

//Binary Tree
typedef struct TreeNode *pointer;
typedef struct TreeNode{
	int isChar;
	Data data;
	pointer parent,left,right;
} TreeNode;

typedef struct Root{
	TreeNode *root;
}Root;

//Stack
typedef struct StackNode
{
	int isChar;
	Data data;
	struct StackNode *pNode;
} StackNode;

typedef struct Stack
{
	StackNode *topNode;
} Stack;

//Suhu
typedef struct {
	float celcius, reamur, fahrenheit, kelvin;	
}Temp;
/*
  ((Digunakan untuk menampilkan hasil konversi suhu ke Reamur, Kelvin, dan Fahrenheit))
  IS : layar kosong
  FS : tampil hasil perhitungan konversi suhu
*/

//Perhitungan
void CheckAndGetChar(char temp);

double tambahKurang();

double kaliBagi();

double pangkat();

double faktor();

void hasilEksekusi();

//Konversi Char To Ascii
void charToASCII(char c);

#endif // DATA_H_INCLUDED