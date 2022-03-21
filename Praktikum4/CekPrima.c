/*Nama File : CekPrima.c*/
/*Deskripsi : Menentukan apakah sebuah bilangan integer sembarang merupakan bilangan prima atau bukan*/
/*Pembuat   : Aretha Khansa Maritza - 24060121140147*/
/*Tanggal pembuatan : Senin, 21-03-2022 18:07 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int N, i, j;
    j = 1;

    //Algoritma
    printf("Masukkan bilangan integer = ");
    scanf("%d", &N);

    if (N <= 0){
        printf("Masukan tidak boleh negatif");
    }
        if (N == 0, N == 1) {
            j = 0;
        }
        else {
            for (i = 2; i <= N-1; i++) {
                if (N % i == 0) {
                    j = 0;
                    break;
                }
            }
        }

        if (j == 1)
            printf("%d adalah bilangan prima",N);
        else
            printf("%d bukan bilangan prima",N);

        return 0;
}

