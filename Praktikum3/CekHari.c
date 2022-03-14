/*Nama File : CekHari.c*/
/*Deskripsi : Menampilkan nama-nama hari berdasarkan nomor hari sesuai input*/
/*Pembuat   : Aretha Khansa Maritza - 24060121140147*/
/*Tanggal pembuatan : Senin, 14-03-2022 19:51 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int i;

    //Algoritma
    printf("Masukan nomor hari = ");
    scanf("%d", &i);

    if(i == 1){
        printf("Senin");
    } else if(i == 2){
        printf("Selasa");
    } else if(i == 3){
        printf("Rabu");
    } else if(i == 4){
        printf("Kamis");
    } else if(i == 5){
        printf("Jumat");
    } else if(i == 6){
        printf("Sabtu");
    } else if(i == 7){
        printf("Minggu");
    } else {
        printf("Masukan nomor hari tidak tepat");
    }
}
