/*
Tugas Kelompok PMC Kelas 01 EL2008
Anggota kelompok:
1. Muhammad Daris Nurhakim (13220047)
2. Raihan Fadhil Yanuarsyah (13220049)
3. Aloysius Efrata Sumaryo (13220057)
Program digunakan untuk mencari hasil perkalian dua matriks
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int kali10(int** matriksA, int** matriksB);
int kali100(int** matriksA, int** matriksB);
int kali1000(int** matriksA, int** matriksB);
int kali10000(int** matriksA, int** matriksB);

int main(){
    int n;
    time_t start, end;
    printf("Pilihan ukuran matriks\n");
    printf("1. 10 x 10\n");
    printf("2. 100 x 100\n");
    printf("3. 1000 x 1000\n");
    printf("4. 10000 x 10000\n");
    printf("Masukkan ukuran matriks (pilih 1 - 4): ");
    scanf("%d",&n);

    int ukuran;
    if (n == 1){
        ukuran = 10;
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

    start = time(NULL);
    int** matriksA;
    printf("\nMatrix 1\n\n");
    matriksA = (int**)malloc(ukuran*sizeof(int*));
    for (int i = 0; i < ukuran; i++){
        matriksA[i] = (int*)malloc(ukuran*sizeof(int*));
    }
    for (int i = 0; i < ukuran; i++){
        for (int j = 0; j < ukuran; j++){
            matriksA[i][j] = rand() % 10;
            printf("%d\t",matriksA[i][j]);
        }
        printf("\n");
    }

    int** matriksB;
    printf("\nMatrix 2\n\n");
    matriksB = (int**)malloc(ukuran*sizeof(int*));
    for (int i = 0; i < ukuran; i++){
        matriksB[i] = (int*)malloc(ukuran*sizeof(int*));
    }
    for (int i = 0; i < ukuran; i++){
        for (int j = 0; j < ukuran; j++){
            matriksB[i][j] = rand() % 10;
            printf("%d\t",matriksA[i][j]);
        }
        printf("\n");
    }

    if (n == 1){
        kali10(matriksA,matriksB);
    }
    else if (n == 2){
        kali100(matriksA,matriksB);
    }
    else if (n == 3){
        kali1000(matriksA,matriksB);
    }
    else if (n == 4){
        kali10000(matriksA,matriksB);
    }

    end = time(NULL);
    printf("Waktu program : %.2f", difftime(end, start));

    return 0;
}

int kali10(int** matriksA, int** matriksB){
    int ukuran = 10;
    int hasil[ukuran][ukuran];
    for (int m = 0; m < ukuran; m++){
        for (int n = 0; n < ukuran; n++){
            hasil[m][n] = 0;
        }
    }

    printf("\nHasil kali matrix\n\n");
    for (int i = 0; i < ukuran; i++){
        for (int j = 0; j < ukuran; j++){
            for (int k = 0; k < ukuran; k++){
                hasil[i][j] += matriksA[i][k] * matriksB[k][j];
            }
            printf("%d\t",hasil[i][j]);
        }
        printf("\n");
    }
}

int kali100(int** matriksA, int** matriksB){
    int ukuran = 100;
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
}

int kali1000(int** matriksA, int** matriksB){
    int ukuran = 1000;
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
}

int kali10000(int** matriksA, int** matriksB){
    int ukuran = 10000;
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
}
