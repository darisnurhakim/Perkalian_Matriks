/*
Tugas Kelompok PMC Kelas 01 EL2008
Anggota kelompok:
1. Muhammad Daris Nurhakim (13220047)
2. Raihan Fadhil Yanuarsyah (13220049)
3. Aloysius Efrata Sumaryo (13220057)
Program digunakan untuk ...
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    printf("Pilihan ukuran matriks\n");
    printf("1. 10 x 10\n");
    printf("2. 100 x 100\n");
    printf("3. 1000 x 1000\n");
    printf("4. 10000 x 10000\n");
    printf("Masukkan ukuran matriks (pilih 1 - 4): ");
    scanf("%d",&n);

    int ukuran;
    if (n == 1){
        ukuran = 2;
    }
    else if (n == 2){
        ukuran = 100;
    }
    else if (n == 3){
        ukuran = 1000;
    }
    else if (n == 4){
        ukuran = 10000;
    }
    else{
        printf("Masukkan salah!");
    }

    int matriksA[ukuran][ukuran];
    int matriksB[ukuran][ukuran];
    printf("\nMatrix 1\n");
    for (int i = 0; i < ukuran; i++){
        for (int j = 0; j < ukuran; j++){
            matriksA[i][j] = rand() % 3;
            printf("%d ",matriksA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2\n");
    for (int i = 0; i < ukuran; i++){
        for (int j = 0; j < ukuran; j++){
            matriksB[i][j] = rand() % 3;
            printf("%d ",matriksB[i][j]);
        }
        printf("\n");
    }

    int hasil[ukuran][ukuran];
    for (int m = 0; m < ukuran; m++){
        for (int n = 0; n < ukuran; n++){
            hasil[m][n] = 0;
        }        
    }

    printf("\nHasil kali matrix\n");
    for (int i = 0; i < ukuran; i++){
        for (int j = 0; j < ukuran; j++){
            for (int k = 0; k < ukuran; k++){
                hasil[i][j] += matriksA[i][k] * matriksB[k][j];
            }
            printf("%d ",hasil[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;

    return 0;
}