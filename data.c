/* 
 * Program 			: data.c
 * Deskripsi 		: modul-modul yang digunakan
 * Nama 			: Novia Nur Azizah
 * Tanggal			: 5 Juni 2022
 * Compiler			: Dev-C++
 * ==============================================================
 */
 
#include "data.h"
#include "stack.h"


char input;
Root *root;
Stack *stack;



void CheckAndGetChar(char temp){
	if(temp != input){
		Error();
	}
	input = getchar();
}

double tambahKurang(){
//Modul yang digunakan untuk mengoperasikan Penjumlahan dan Pengurangan
	double temp1 = kaliBagi();
	Data data;
	while(input == '+' || input == '-')
	{
		if(input == '+')
		{
			data.opr = '+';
			CheckAndGetChar('+');
			temp1 += kaliBagi();
			push(stack, data, TRUE);
		}
		else if(input == '-')
		{
			data.opr = '-';
			CheckAndGetChar('-');
			temp1 -= kaliBagi();
			push(stack, data, TRUE);
		}
	}
	return temp1;
}

double kaliBagi(){
//Modul yang digunakan untuk mengoperasikan Perkalian dan Pembagian
	double temp1 = pangkat();
	Data data;
	if (input){
		while(input == '*' || input == '/')
		{
			if(input == '*')
			{
				data.opr = '*';
				CheckAndGetChar('*');
				temp1 *= pangkat();
				push(stack, data, TRUE);
			}
			else if(input == '/')
			{
				data.opr = '/';
				CheckAndGetChar('/');
				temp1 /= pangkat();
				push(stack, data, TRUE);
			}
		}
	}
	return temp1;
}

double pangkat(){
//Modul yang digunakan untuk mengoperasikan operand pangkat
	double temp1 = faktor();
	Data data;
	if(input){
	
		while(input == '^')
		{
			if (input == '^')
			{
				data.opr = '^';
				CheckAndGetChar('^');
				temp1 = pow(temp1,faktor());
				push(stack,data,TRUE);
			}
		}
		
	}
	return temp1;
}


double faktor(){
	double temp1 = 0.0;
	Data data;
	if(input == '(')
	{
		CheckAndGetChar('(');
		temp1 = tambahKurang();
		CheckAndGetChar(')');
	}
	else if(input == '-')
	{
		// negation
		CheckAndGetChar('-');
		data.opr = '-';
		temp1 = -faktor();
		push(stack, data, TRUE);
		return temp1;
	}
	else if(input == '+')
	{
		CheckAndGetChar('+');
		return faktor();
	}
	else if(isdigit(input))
	{
		ungetc(input, stdin);
		scanf("%lf", &temp1);
		data.num = temp1;
		push(stack, data, FALSE);
		input = getchar();
	}
	else Error();
	return temp1;
}

void hasilEksekusi(){
//Modul yang digunakan untuk mendapatkan hasil dari perhitungan kalkulator
	
			double value;
			StackNode temp;
			TreeNode *tnode = NULL;
			root = rootNode();
			stack = createStack();

			/// proses
    		input = getchar();
    		value = tambahKurang();

			/// construct tree
			while(!isStackEmpty(stack))
			{
			temp = pop(stack);
			while(temp.isChar)
			{
				// operator
				tnode = MakeChild(tnode, temp.data, temp.isChar);
				if(root->root == NULL)	root->root = tnode;
				temp = pop(stack);
			}
				// number
				tnode = MakeChild(tnode, temp.data, temp.isChar);
				if(root->root == NULL)	root->root = tnode;
			}
    			/// printing
    			gotoxy(30,17);    			
				printf(" Prefix  : ");
    			traversal(root, PREORDER);
    			puts("");
    			gotoxy(30,18);   
    			printf(" Infix   : ");
    			traversal(root, INORDER);
    			puts("");
    			gotoxy(30,19);   
    			printf(" Postfix : ");
    			traversal(root, POSTORDER);
    			puts("");
    			gotoxy(30,20);   
    			printf(" Hasil   : %g\n\t\t", value);
    			gotoxy (15,17);
    			printf(" %g\n\t\t", value);
    			/// delete
    			removeAllTreeNodes(root);
    			return 0;

}

void charToASCII(char c) 
{
	/* Modul yang mengkonversi char ke char tertentu berdasarkan ASCII */
	switch(c)
	{
		case '=' :
			printf ("%c", 205);
			break;
		case '_' :
			printf ("%c", 247);
			break;
		case '|' :
			printf ("%c", 186);
			break;
		case '#' :
			printf ("%c", 221);
			break;
		case '/' :
			printf ("%c", 159);
			break;
		case '&' :
			printf ("%c", 188);
			break;
		case '<' :
			printf ("%c", 200);
			break;
		case '>' :
			printf ("%c", 188);
			break;
		case '[' :
			printf ("%c", 175);
			break;
		case ']' :
			printf ("%c", 174);
			break;
		case '%' :
			printf ("%c", 200);
			break;
		case '!' :
			printf ("%c", 254);
			break;
		case '{' :
			printf ("%c", 201);
			break;
		case '}' :
			printf ("%c", 187);
			break;
		case '?' :
			printf ("%c", 201);
			break;
		case '@' :
			printf ("%c", 177);
			break;
		case '~' :
			printf ("%c", 178);
			break;
		case '$' :
			printf ("%c", 187);
			break;
		default :
			printf ("%c", c);		
	}
}