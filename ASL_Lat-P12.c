/*
  Latihan Praktikum 12 D 
  Nama  : Ahmad Sobirin
  Kelas : S1 - D
  NPM   : 432007006220166
  
  STMIK TASIKMALAYA - 2022
*/
#include <stdio.h>
#include <stdlib.h>
#include "Goto_as.c"

typedef unsigned short int angka_as;
angka_as x = 3, y = 1;
angka_as i, j;
angka_as jmlOrder_as[10];

typedef unsigned long int price_as;
price_as hrgMenu_as[10], byaOrder_as[10];
price_as totBiaya_as, bayar_as, kembali_as, totOrder_as;

char addTrans = 'Y', ulangi = 'Y';
char idKasir_as[8], nmKasir_as[35], idMenu_as[10];
char tempData_as[35], nmCust_as[10][35], nmMenu_as[10][20];


int main () {
	do {
		x = 3, y = 1; totBiaya_as = 0;
		system("cls");
		
	//Input Data
	as(x, y);  printf("==================================================================================================================");
	as(x, ++y);printf("*                                     \"Friend's Zone\" Cafe                                                       *");
	as(x, ++y);printf("*                        Jl. RE. Martadinata No. 272D - Indihiang , Tasikmalaya                                  *");
	as(x, ++y);printf("==================================================================================================================");
	

	
	as(x, y += 2);printf("---------------------------");
	as(x, ++y);	  printf("+    Input Data Kasir    + ");
	as(x, ++y);	  printf("---------------------------");
	
	as(x, ++y);printf(" ID Kasir       : ");
	scanf ("%s", &idKasir_as);
	
	if (strcmp(idKasir_as, "FZC-D01") == 0) {
		strcpy(nmKasir_as, "Ahmad Sobirin");
	} else if (strcmp(idKasir_as, "FZC-D02") == 0) {
		strcpy(nmKasir_as, "Julian P.");
	} else if (strcmp(idKasir_as, "FZC-D03") == 0) {
		strcpy(nmKasir_as, "Ade Taofik");
	}
	
	as(x, ++y);printf(" Nama Kasir     : %s", nmKasir_as);
	
	as(x, y+= 2);printf("----------------------------");
	as(x, ++y);printf("   Input Data Order       [%d]", i+1);
    as(x, ++y);printf("------------------------------");
	
	fflush(stdin);
	as(x, ++y);printf("  Nama Customer : ");
	gets(tempData_as);
	strcpy(nmCust_as[i], tempData_as);
	
	order:
		fflush(stdin);
		as(x, ++y);printf ("  ID Menu [A-C] : "); scanf ("%c", &idMenu_as[i]);
	
	switch (idMenu_as[i]) {
		case 'A': case 'a':
			strcpy(nmMenu_as[i], "Bobba Latea");
			hrgMenu_as[i] = 22000;
			break;
			
		case 'B': case 'b':
			strcpy(nmMenu_as[i], "Pizza Noodles");
			hrgMenu_as[i] = 35000;
			break;
		
		case 'C': case 'c':
			strcpy(nmMenu_as[i], "Rice Race");
			hrgMenu_as[i] = 30000;
			break;
		
		default:
			as(x+2, ++y); printf ("#- Salah Input ID -#");
			as(x+2, ++y); printf ("#- Pilih ID [A-C] saja -#");
			system("pause > null");
			goto order;
		}
	
	as(x, ++y); printf ("  Nama Menu     : %s ", nmMenu_as[i]);
	as(x, ++y); printf ("  Harga         : Rp. %d.00 ", hrgMenu_as[i]);
	
	as(x+27, ++y); printf ("porsi");
	as(x, y); printf ("  Jml. Order    : "); scanf ("%d", &jmlOrder_as[i]);
	fflush(stdin);
	
	
	
	as(x, y += 2); printf (" Tambah Transaksi [Y/T]? ");
				   scanf ("%c", &addTrans);
	i++;
	
	
	byaOrder_as[j] = hrgMenu_as[j] * jmlOrder_as[j];
	totOrder_as += byaOrder_as[j] + byaOrder_as[i];
	
	x = 3, y = 1;
	system ("cls");
	
    as(x, y);   printf ("==================================================================================================================");
	as(x, ++y); printf ("*                                          \"Friend's Zone\" Cafe                                                *");
	as(x, ++y); printf ("*                           Jl. RE. Martadinata No. 272D - Indihiang , Tasikmalaya                               *");
	as(x, ++y); printf ("==================================================================================================================");
	as(x, ++y); printf (" Jumlah Transaksi : %d", i);
	
	for (j = 0;j < i; j++) {
	
	as(x, y += 2);printf("-------------------------------------");
	as(x, ++y);	  printf("   Detail Transaksi    [%d]", j+1);
	as(x, ++y);	  printf("-------------------------------------");
	
	as(x, ++y); printf (" - Customer         : %s", nmCust_as[j]);
	as(x, ++y); printf (" - Menu             : [%c] - %s", idMenu_as[j], nmMenu_as[j]);
	as(x, ++y); printf (" - Harga            : Rp. %9.2f", (float)hrgMenu_as[j]);
	as(x, ++y); printf (" - Jml. Order       : %d  porsi", jmlOrder_as[j]);
	as(x, ++y); printf (" -      Biaya       : Rp. %9.2f", (float)byaOrder_as[j]);
	as(x, ++y); printf (" -------------------------------------");
	
	
	}
	
	} while (addTrans == 'Y' || addTrans == 'y');
	
	
	as(x, ++y);printf ("******************************************************************************************************************");
	

	
	as(x, ++y);printf (" .: Total Order : Rp. %12.2f ", (float)totOrder_as);
	as(x, ++y);printf ("    Uang Bayar  : Rp.     "); scanf ("%d", &bayar_as);
	
	as(x, ++y);printf ("    UangBayar   : Rp. %12.2f", (float)bayar_as);
	
	kembali_as = bayar_as - totOrder_as;
	as(x, ++y);printf ("    Kembali     : Rp.%12.2f", (float)kembali_as);
	
	as(x, ++y);printf ("*****************************************************************************************************************");
	as(x, ++y);printf (" Diinput oleh : [%s - %s]", idKasir_as, nmKasir_as);
	as(x, ++y);printf ("*****************************************************************************************************************");
	fflush (stdin);
	as(x, y+= 2); printf ("Ulangi Program Cafe [Y/T]? ");
	   scanf ("%d", &ulangi);
	as(x, ++y); printf ("****************************************************************************************************************");
	as(x, ++y);printf ("#- Created By -#\n");
	as(x, ++y);printf ("   Nama : Ahmad Sobirin\n");
	as(x, ++y);printf ("   NPM  : 432007006220166\n");
	as(x, ++y);printf ("   Kelas : S1-D\n\n");
	as(x, ++y);printf ("   STMIK TASIKMALAYA - 2022\n");
	as(x, ++y);printf("=============================================================+===================================================");
	as(x, ++y);printf("x                                      S T M I K  T A S I K M A L A Y A                                         x");
	as(x, ++y);printf("x                                                2022 - 2023                                                    x");
	as(x, ++y);printf("=================================================================================================================");
			
	return 0;
}
