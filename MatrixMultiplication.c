// desc: program untuk mengkalikan dua buah matriks, dimana matriks pertama berukurna A x B dan matirks kedua berukuran C x D
// author: vermilion10
// date: 31 desember 2024

#include <stdio.h>

//prosedur untuk membaca dimensi matriks pertama
void readDimensi1(int *A, int *B){
    scanf("%d %d", A, B);
}

// prosedur untuk membaca matriks pertama
void readMatrix1(int A, int B, int matriks1[A][B]){
    for (int i = 0; i < A; i++){
        for (int j = 0; j < B; j++){
            scanf("%d", &matriks1[i][j]);
        }
    }
}

//prosedur untuk membaca dimensi matriks kedua
void readDimensi2(int *C, int *D){
    scanf("%d %d", C, D);
}

// prosedur untuk membaca matriks kedua
void readMatrix2(int C, int D, int matriks2[C][D]){
    for (int i = 0; i < C; i++){
        for (int j = 0; j < D; j++){
            scanf("%d", &matriks2[i][j]);
        }
    }
}

// prosedur untuk mengalikan dua buah matriks
void multiplyMatrix(int A, int B, int C, int D, int matriks1[A][B], int matriks2[C][D], int hasil[A][D]){
    for (int i = 0; i < A; i++){
        for (int j = 0; j < D; j++){
            hasil[i][j] = 0;
            for (int k = 0; k < B; k++){
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }
}

// prosedur untuk print hasil perkalian matriks
void printResult(int A, int D, int hasil[A][D]){
    for (int i = 0; i < A; i++){
        for (int j = 0; j < D; j++){
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int A, B, C, D;
    readDimensi1(&A, &B);
    int matriks1[A][B];
    readMatrix1(A, B, matriks1);
    readDimensi2(&C, &D);
    int matriks2[C][D];
    readMatrix2(C, D, matriks2);
    int hasil[A][D];
    multiplyMatrix(A, B, C, D, matriks1, matriks2, hasil);
    printResult(A, D, hasil);
    return 0;
}