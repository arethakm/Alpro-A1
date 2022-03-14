/*Nama File : CekBulan.c*/
/*Deskripsi : Menampilkan nama-nama bulan berdasarkan nomor bulan sesuai input*/
/*Pembuat   : Aretha Khansa Maritza - 24060121140147*/
/*Tanggal pembuatan : Senin, 14-03-2022 19:57 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int i;

    //Algoritma
    printf("Masukan nomor bulan = ");
    scanf("%d", &i);

    if(i == 1){
        printf("Januari");
    } else if(i == 2){
        printf("Februari");
    } else if(i == 3){
        printf("Maret");
    } else if(i == 4){
        printf("April");
    } else if(i == 5){
        printf("Mei");
    } else if(i == 6){
        printf("Juni");
    } else if(i == 7){
        printf("Juli");
    } else if(i == 8){
        printf("Agustus");
    } else if(i == 9){
        printf("September");
    } else if(i == 10){
        printf("Oktober");
    } else if(i == 11){
        printf("November");
    } else if(i == 12){
        printf("Desember");
    } else {
        printf("Masukan nomor bulan tidak tepat");
    }
}

