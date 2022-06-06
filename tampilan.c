/* 
 * Program 			: tampilan.c
 * Deskripsi 		: modul tampilan yang digunakan pada aplikasi
 * Nama 			: Novia Nur Azizah
 * Tanggal			: 5 Juni 2022
 * Compiler			: Dev-C++
 * ==============================================================
 */

#include "tampilan.h"

void konverterSuhu(){
//menampilkan konversi suhu yang dilakukan dari satuan celcius ke satuan reamur, kelvin, dan fahrenheit
	Temp temperature;
	char suhu[] = 
	"\n\
\t\t\t ?=========================================================================$\n\
\t\t\t |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n\
\t\t\t |[[[[[[[[[[[[[[[[[[[[[[[[[[[[[ Konverter Suhu ]]]]]]]]]]]]]]]]]]]]]]]]]]]]|\n\
\t\t\t |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n\
\t\t\t |=========================================================================|\n\
\t\t\t |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@Masukkan Suhu yang Akan Dikonversi (Dalam Satuan Celcius)@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Celcius @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@@@@@@@@@@@@?=================$@@@@@@@@@@@@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@@@@@@@@@@@@|                 |@@@@@@@@@@@@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@@@@@@@@@@@@%=================&@@@@@@@@@@@@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@ Reamur @@@@@@@@@@@@@@@@@ Kelvin @@@@@@@@@@@@@@@@ Fahrenheit @@@@@|\n\
\t\t\t |@@?================$@@@@@@@?=================$@@@@@@?=================$@@|\n\
\t\t\t |@@|                |@@@@@@@|                 |@@@@@@|                 |@@|\n\
\t\t\t |@@%================&@@@@@@@%=================&@@@@@@%=================&@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|\n\
\t\t\t |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|\n\
\t\t\t |=========================================================================|\n\
\t\t\t | Masukkan Nilai Celcius :                                                |\n\
\t\t\t %=========================================================================&\n\
	";
	for(int i = 0; suhu[i]!=0; i++){
		charToASCII(suhu[i]);
	}
	gotoxy(52,22);
	scanf("%f", &temperature.celcius);
	temperature.celcius = temperature.celcius;   
    temperature.reamur = (temperature.celcius * 4/5);
    temperature.fahrenheit = (temperature.celcius * 9/5) + 32;
    temperature.kelvin = (temperature.celcius + 273.15);
	
	
	gotoxy(60,11);
	printf("%.2f", temperature.celcius);
	gotoxy(34,17);
	printf("%.2f", temperature.reamur);
	gotoxy(59,17);
	printf("%.2f", temperature.kelvin);
	gotoxy(85,17);
	printf("%.2f", temperature.fahrenheit);
}          


void peraturanPerhitungan(){
//menampilkan peraturan perhitungan dari aplikasi PowerPuffCulator
	char peraturan[] = 
	"\n\
\t\t\t ?=========================================================================$\n\
\t\t\t |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n\
\t\t\t |[[[[[[[[[[[[[[[[[[[[[[[[[ Peraturan Perhitungan ]]]]]]]]]]]]]]]]]]]]]]]]]|\n\
\t\t\t |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n\
\t\t\t |=========================================================================|\n\
\t\t\t |                                                                         |\n\
\t\t\t | PowerPuffCulator, user dapat menginputkan ekspresi matematika dengan    |\n\
\t\t\t | operasi ( +, -, ÷, *, v, ^ ).                                           |\n\
\t\t\t | Adapun ketentuan untuk menginputkan angka nya sebagai berikut.          |\n\
\t\t\t | A. Tidak diperbolehkan menggunakan simbol alphabet/character            |\n\
\t\t\t | B. Tidak diperbolehkan ada 2 operator yang bersebelahan                 |\n\
\t\t\t | C. Jika ingin menggunakan bilangan minus harus menggunakan simbol       |\n\
\t\t\t |    kurung dan hanya untuk satu bilangan.                                |\n\
\t\t\t |    Misal :                                                              |\n\
\t\t\t |    (-3)*8 = Valid                                                       |\n\
\t\t\t |    -7+3)*5 = Tidak Valid                                                |\n\
\t\t\t | D. Untuk penggunaan operator pangkat.                                   |\n\
\t\t\t |    Misal :                                                              |\n\
\t\t\t |    2^8 akan menghasilkan 3                                              |\n\
\t\t\t |    3^27 akan menghasilkan 9                                             |\n\
\t\t\t |    2^9*2 akan menghasilkan 2^18                                         |\n\
\t\t\t |    2^9+2 akan menghasilkan 2^11                                         |\n\
\t\t\t |    2^(6+10) akan menghasilkan 2^16                                      |\n\
\t\t\t | E. Setiap perhitungan yang terjadi error tidak dimasukan kedalam        |\n\
\t\t\t |    riwayat.                                                             |\n\
\t\t\t |                                                                         |\n\
\t\t\t %=========================================================================&\n\
	";
	for(int i = 0; peraturan[i]!=0; i++){
		charToASCII(peraturan[i]);
	}
}

void petunjukPenggunaan(){
//menampilkan petunjuk penggunaan dari aplikasi PowerPuffCulator
	char petunjuk[] = 
	"\n\
\t\t\t ?=========================================================================$\n\
\t\t\t |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n\
\t\t\t |[[[[[[[[[[[[[[[[[[[[[[[[[[ Petunjuk Penggunaan ]]]]]]]]]]]]]]]]]]]]]]]]]]|\n\
\t\t\t |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n\
\t\t\t |=========================================================================|\n\
\t\t\t |                                                                         |\n\
\t\t\t | Aplikasi kalkulator kami memiliki 7 fitur utama yang dapat digunakan,   |\n\
\t\t\t | diantaranya sebagai berikut;                                            |\n\
\t\t\t | 1. Kalkulator                                                           |\n\
\t\t\t |    Untuk mengakses kalkulator kami, kamu dapat memilih angka  untuk     |\n\
\t\t\t |    diarahkan menuju fitur kalkulator.                                   |\n\
\t\t\t | 2. Konversi Suhu                                                        |\n\
\t\t\t |    Untuk mengakses fitur konversi suhu, kamu dapat memilih angka 2.     |\n\
\t\t\t |    Setelah masuk ke dalam menu ini, kamu diminta untuk menginputkan     |\n\
\t\t\t |    angka(derajat) dalam satuan Celcius, lalu nanti program akan         |\n\
\t\t\t |    mengkalkulasikannya ke dalam satuan Reamur, Fahrenheit, dan Kelvin.  |\n\
\t\t\t | 3. Petunjuk Penggunaan                                                  |\n\
\t\t\t |    Untuk dapat menuju ke fitur help, kamu dapat memilih angka 3.        |\n\
\t\t\t |    Nantinya kamu akan diberikan penjelasan mengenai bagaimana cara      |\n\
\t\t\t |    menggunakan dan memilih fitur pada program aplikasi kami secara      |\n\
\t\t\t |    detail untuk membantu kamu agar tidak kesulitan.                     |\n\
\t\t\t | 4. Peraturan Perhitungan                                                |\n\
\t\t\t |    Untuk mengakses fitur peraturan perhitungan, kamu dapat memilih      |\n\
\t\t\t |    angka 4. Kemudian, kamu akan diberikan penjelasan peraturan          |\n\
\t\t\t |    perhitungan pada program aplikasi kami.                              |\n\
\t\t\t | 5. Credits                                                              |\n\
\t\t\t |    Jika kamu penasaran mengenai informasi dari pembuatan program        |\n\
\t\t\t |    aplikasi, kamu dapat memilih angka 5 untuk dapat melihat penjelasan  |\n\
\t\t\t |    mengenai nama program, author, tanggal pembuatan aplikasi, dll.      |\n\
\t\t\t | 6. Keluar                                                               |\n\
\t\t\t |    Untuk keluar dari program kami, kamu dapat memilih angka 6.          |\n\
\t\t\t |                                                                         |\n\
\t\t\t %=========================================================================&\n\
	";
	
	for(int i = 0; petunjuk[i]!=0; i++){
		charToASCII(petunjuk[i]);
	}
}

void tampilanKalkulator()
{
		char kalku[26][24]={   // Referensi program milik kating: Cyber Scrabble 
	{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191},
	{' ',179,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',179},
	{' ',179,' ',218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191,' ',179},
	{' ',179,' ',179,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',179,' ',179},
	{' ',179,' ',179,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',179,' ',179},
	{' ',179,' ',192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217,' ',179},
	{' ',179,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',179},
	{' ',179,' ',218,196,196,191,' ',218,196,196,191,' ',218,196,196,191,' ',218,196,196,191,' ',179},
	{' ',179,' ',179,' ','7',179,' ',179,' ','8',179,' ',179,' ','9',179,' ',179,' ','C',179,' ',179},
	{' ',179,' ',192,196,196,217,' ',192,196,196,217,' ',192,196,196,217,' ',192,196,196,217,' ',179},
	{' ',179,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',179},
	{' ',179,' ',218,196,196,191,' ',218,196,196,191,' ',218,196,196,191,' ',218,196,196,191,' ',179},
	{' ',179,' ',179,' ','4',179,' ',179,' ','5',179,' ',179,' ','6',179,' ',179,' ','*',179,' ',179},
	{' ',179,' ',192,196,196,217,' ',192,196,196,217,' ',192,196,196,217,' ',192,196,196,217,' ',179},
	{' ',179,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',179},
	{' ',179,' ',218,196,196,191,' ',218,196,196,191,' ',218,196,196,191,' ',218,196,196,191,' ',179},
	{' ',179,' ',179,' ','1',179,' ',179,' ','2',179,' ',179,' ','3',179,' ',179,' ','/',179,' ',179},
	{' ',179,' ',192,196,196,217,' ',192,196,196,217,' ',192,196,196,217,' ',192,196,196,217,' ',179},
	{' ',179,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',179},
	{' ',179,' ',218,196,196,191,' ',218,196,196,191,' ',218,196,196,191,' ',218,196,196,191,' ',179},
	{' ',179,' ',179,' ','0',179,' ',179,' ','^',179,' ',179,' ','-',179,' ',179,' ','+',179,' ',179},
	{' ',179,' ',192,196,196,217,' ',192,196,196,217,' ',192,196,196,217,' ',192,196,196,217,' ',179},
	{' ',179,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',179},
	{' ',192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	};
	
	int i, j;
	
	for(i=0;i<26;i++){
			gotoxy(5,12+i);
			for(j=0;j<24;j++){
				printf("%c",kalku[i][j]);	
			}	
		printf("\n");
		}

}

void loading() //tampilan teks berjalan "loading.."
{
	const char text[] = "Now Loading...";
 	int i;

 	gotoxy(55, 10);
 	for (i = 0; text[i]!=0 ; i++) {
  		Sleep(80);
  		printf("%c", text[i]);
 	}
 	//system("cls");
 	Sleep(60);

 	gotoxy(55, 10);
 	for (i = 0; text[i]!=0 ; i++) {
  		Sleep(60);
  		printf(" ");
 	}
}

void loadingBar(){ //tampilan loading bar, paling awal saat aplikasi PowerPuffCulator dibuka
	char wait[] = 	"          Please Wait..\n";
	char upper[] =  "{================================}\n";
	char middle[] = "|                                |\n";

	char lower[] =	"<================================>\n"; 
	
	char bar[]= 	" ###############################\n";
	
	gotoxy (40,15);
	for(int i = 0; wait[i]!=0 ; i++){
		charToASCII(wait[i]);
	}
	
	gotoxy (40,16);
	for(int i = 0; upper[i]!=0 ; i++){
		charToASCII(upper[i]);
	}
	
	gotoxy (40,17);
	for(int i = 0; middle[i]!=0 ; i++){
		charToASCII(middle[i]);
	}
	
	gotoxy (40,18);
	for(int i = 0; lower[i]!=0 ; i++){
		charToASCII(lower[i]);
	}
	
	gotoxy(41,17);
	for(int i = 0 ;bar[i]!=0; i++){
		Sleep(100);
		charToASCII(bar[i]);
	}
		system("cls"); // nanti simpen di main
}

void credits() {
	system("cls");
    FILE*crdts = NULL;     
	char a[500];
	
	crdts=fopen("credits.txt","r");
	if(crdts == NULL){
	
		printf("data tidak ada");
	}else {
		while(fscanf(crdts, "%[^\n]%*c", a) == 1){
			printf("\t\t\t\t");
			printf("%s\n", a);
		}		
	}
	fclose(crdts);
}

void title(){ //screen awal berisi judul aplikasi
	
	char welcome[] = "\t\t\t\t     Welcome to....\n";
	char home[] =
	"\n\
\t\t               _ _ _ _ _ _ _ _          _ _ _ _ _ _ _ _           _ _ _ _ _ _ _ _ _\n\
\t\t              /     _ _ _     /        /     _ _ _     /         /                 /\n\
\t\t             /    /     /     /       /    /	 /     /        /    _ _ _ _ _ _ _\n\
\t\t            /    /     /     /       /    /     /     /        /    /\n\
\t\t           /     _ _ _      /       /	  _ _ _      /        /    /\n\
\t\t          /                /       /                /        /    /\n\
\t\t         /    _ _ _ _ _ _ _       /    _ _ _ _ _ _ _        /    /\n\
\t\t        /    /                   /    /                    /    /\n\
\t\t       /    /                   /    /                    /    /\n\
\t\t      /    /                   /    /                    /     _ _ _ _ _ _ _\n\
\t\t     /    /                   /    /                    /                   /\n\
\t\t     _ _ _                    _ _ _                     _ _ _ _ _ _ _ _ _ _\n\
	";
	
	
	
		char credits[] = 
	"\n\
\t\t\t\t\t        PowerPuffCulator\n\
\t\t\t\t\t\t       by\n\
\t\t\t\t\t     Ghessa x Novia x Syifa\n\
	";
	
	gotoxy(20,5);
	for(int i = 0; welcome[i]!=0; i++){
		Sleep(1);
		charToASCII(welcome[i]);
	}
	gotoxy(20,7);
	for(int i = 0; home[i]!=0; i++){
		Sleep(0.9);
		charToASCII(home[i]);
	}
	
	gotoxy(20,20);
	for(int i = 0; credits[i]!=0; i++){
		Sleep(5);
		charToASCII(credits[i]);
}
	getch();

}

void Error() // menampilkan error message ketika input user invalid
{
	gotoxy(30,20);puts(" Error.");
	gotoxy(30,21);puts(" Please enter the valid input!");
	getch();
	system("cls");
	tampilanKalkulator();
}
