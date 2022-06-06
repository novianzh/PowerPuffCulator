/* 
 * Program 			: main.c
 * Deskripsi 		: Program Utama PowerPuffCulator
 * Nama 			: Ghessa Theniana (211524042)
 					  Novia Nur Azizah (211524053)
 					  Syifa Khairina (211524063) 
 						 
 * Tanggal			: 27 Mei 2022
 * Compiler			: Dev-C++
 * ==============================================================
 */
 
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include "tree.h"
#include "stack.h"
#include "data.h"
#include "tampilan.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	system("cls");
	system("color F5");
	title();
	system("cls");
	loadingBar();
	system("cls");
	menuAwal();
	
	return 0;
}

void menuAwal(){
	// untuk menampilkan tampilan awal menu utama program
	char pilihan[] = 
	"\n\
\t\t\t ?=========================================================================$\n\
\t\t\t |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n\
\t\t\t |[[[[[[[[[[[[[[[[[[[[[[[[[[[ PowerPuffCulator ]]]]]]]]]]]]]]]]]]]]]]]]]]]]|\n\
\t\t\t |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n\
\t\t\t |=========================================================================|\n\
\t\t\t |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@!=======================================!@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@|                                       |@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@|        1. Kalkulator                  |@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@|        2. Konverter Suhu              |@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@|        3. Petunjuk Penggunaan         |@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@|        4. Peraturan Perhitungan       |@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@|        5. Credits                     |@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@|        6. Exit                        |@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@|                                       |@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@!=======================================!@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|\n\
\t\t\t |=========================================================================|\n\
\t\t\t | Masukkan Pilihan :                                                      |\n\
\t\t\t %=========================================================================&\n\
	";
	
	for(int i = 0; pilihan[i]!=0; i++){
		charToASCII(pilihan[i]);
	}
	
	int tombol;
	char menu, jawab;
	gotoxy(46,23);
	awal:
	scanf("%d", &tombol);
	fflush(stdin);
	switch(tombol){
		case 1:					// jika memilih no.1 yaitu Kalkulator 
			system("cls");
			loading();
			tampilanKalkulator();
			gotoxy(30,15);
			printf(" Masukan notasi yang ingin dikalkulasikan: ");
			hasilEksekusi();
			gotoxy(30,22);   
			printf(" Ingin menghitung lagi?(y/n): ");
			jawab=getch();
			if(jawab == 'n')
			{
				system("cls");
				menuAwal();
			}
			else
			{
				goto awal;
			}
			break;
		case 2:				// jika memilih no.2 yaitu ConverterSuhu 
			system("cls");
			loading();
			gotoxy(0,0);
			konverterSuhu();
			gotoxy(25,25);   
			printf("Ingin menghitung lagi?(y/n): ");
			jawab=getch();
			if(jawab == 'n')
			{
				system("cls");
				menuAwal();
			}
			else
			{
				goto awal;
			}
			break;	
		
		case 3:			// jika memilih no.3 yaitu Petunjuk Penggunaan (Help)
			system("cls");
			loading();
			gotoxy(0,0);
			petunjukPenggunaan();
			getch();
			system("cls");
			menuAwal();
			break;
		
		case 4:			// jika memilih no.4 yaitu Peraturan Perhitungan
			system("cls");
			loading();
			gotoxy(0,0);
			peraturanPerhitungan();
			getch();
			system("cls");
			menuAwal();
			break;
			
		case 5:			// jika memilih no.5 yaitu Credits
			system("cls");
			loading();
			credits();
        	printf("\n\n________________________________________________________________________________________________________________________\n");
	        printf("\n\t\t\t\t\t    Tekan 'ENTER' untuk kembali! ");
			getch();
			system("cls");
			menuAwal();
			break;
		case 6:		// jika memilih no.6 yaitu Exit
			exit(1);
			break;
		default:
			system("cls");
			printf("\t\t\tInvalid choice!!");
   			getch();
			menuAwal();
	}
}

void gotoxy (int x, int y){		// untuk mengatur letak console
	HANDLE hConsoleOutput;
	COORD dwCursorPosition;
	dwCursorPosition.X = x;
	dwCursorPosition.Y = y;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}
