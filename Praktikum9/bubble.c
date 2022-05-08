/*Nama File : bubble.c*/
/*Deskripsi : Mengurutkan data dengan Bubble sorting*/
/*Pembuat   : Aretha Khansa Maritza - 24060121140147*/
/*Tanggal pembuatan : Minggu, 08-05-2022 22:14 WIB*/


#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    // Kamus Lokal
    int i, j, temp;

    // Algoritma
    for(i = 0; i < n; i++)
    {
        for(j=0; j < n-i-1; j ++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    // Kamus
    int array[100], n, i, j;

    // Algoritma
    printf("Masukkan banyak elemen: ");
    scanf("%d", &n);
    printf("Masukkan %d angka integer\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    bubbleSort(array, n);
    printf("Hasil pengurutannya adalah \n");
    for(i = 0; i < n; i++)
    {
    printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
