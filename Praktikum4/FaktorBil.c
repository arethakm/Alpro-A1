/*Nama File : FaktorBil.c*/
/*Deskripsi : Menentukan faktor-faktor bilangan dari bilangan integer sembarang sesuai input*/
/*Pembuat   : Aretha Khansa Maritza - 24060121140147*/
/*Tanggal pembuatan : Senin, 21-03-2022 16:51 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Kamus
    int i;
    int N;

    //Algoritma
    printf("Masukkan Bilangan Integer = ");
    scanf("%d", &N);

    if (N <= 0){
        printf("Masukan tidak boleh negatif");
    }
    else {
        printf("Faktor dari bilangan %d adalah", N);
        for (i = 1; i <= N; i++) {
            if (N % i == 0){
                printf(" %d,", i);
            }
        }
    }
}
