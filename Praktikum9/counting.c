/*Nama File : counting.c*/
/*Deskripsi : Mengurutkan data dengan Counting sorting*/
/*Pembuat   : Aretha Khansa Maritza - 24060121140147*/
/*Tanggal pembuatan : Minggu, 08-05-2022 23:20 WIB*/

#include <stdio.h>

int main()
{
    //Kamus lokal
    int A[15],B[15],C[100],i,j,n,k;

    //Algoritma
    printf("Masukkan banyak elemen: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d ",&A[i]);
        if(A[i]>k){
            k = A[i];
        }
    }
    printf("\n");
    printf("nilai k = %d \n",k);
    for(i=1;i<=n;i++){
        printf("%d ",A[i]);
    }

    //logic
    for(i=0;i<=k;i++){
        C[i] = 0;
    }
    for(j=1;j<=n;j++){
        C[A[j]] = C[A[j]]+1;
    }
    for(i=1;i<=k;i++){
        C[i] = C[i] + C[i-1];
    }
    for(j=n;j>=1;j--){
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }

    printf("\nHasil pengurutannya adalah \n");
    for(i = n; i >= 1; i--)
    {
    printf("%d ",B[i]);
    }
    printf("\n");

    return 0;
}
