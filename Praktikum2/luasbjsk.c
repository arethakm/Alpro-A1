/*Nama File : luasbjsk.c*/
/*Deskripsi : Menghitung luas bujur sangkar*/
/*Pembuat   : Aretha Khansa Maritza - 24060121140147*/
/*Tanggal pembuatan : Sabtu, 05-03-2022 12:41 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    int s; //variabel sisi
    float l; //variabel luas

/*Algoritma*/
    printf("Masukkan sisi = ");
    scanf("%d", &s);
    //s*s
    l = s*s;

    printf("Luas Bujur Sangkar = ");
    printf("%d", s*s);


    return 0;
}
