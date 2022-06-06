/* 
 * Program 			: tampilan.h
 * Deskripsi 		: header modul tampilan yang digunakan
 * Nama 			: Novia Nur Azizah
 * Tanggal			: 5 Juni 2022
 * Compiler			: Dev-C++
 * ==============================================================
 */

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <unistd.h>
#include <windows.h>
#include <stdlib.h>
#include "data.h"

void title();
//menampilkan tampilan awal dari aplikasi PowerPuffCulator

void credits();
//menampilkan credits dari aplikasi PowerPuffCulator

void loading();
//tampilan teks berjalan "Loading..."

void loadingBar();
//tampilan loading bar sebagai pembukaan dari aplikasi PowerPuffCulator

void tampilanKalkulator();
//tampilan kalkulator dari aplikasi PowerPuffCulator

void konverterSuhu();
//tampilan mengenai konverter suhu dari aplikasi PowerPuffCulator

void peraturanPerhitungan();
//tampilan mengenai peraturan perhitungan dalam aplikasi PowerPuffCulator

void petunjukPenggunaan();
//tampilan mengenai petunjuk penggunaan dari aplikasi PowerPuffCulator

void error();
//menampilkan error message ketika user inputan invalid/tidak sesuai