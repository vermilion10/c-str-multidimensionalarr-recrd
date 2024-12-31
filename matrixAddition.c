// desc: program untuk menjumlahkan matriks A dan matriks B, keduanya berordo 3x3
// author: vermilion10
// date: 31 desember 2024

#include <stdio.h>

//prosedur untuk membaca matriks A
void readMatrixA(int matriksA[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &matriksA[i][j]);
        }
    }
}

//prosedur untuk membaca matriks B
void readMatrixB(int matriksB[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &matriksB[i][j]);
        }
    }
}

//prosedur untuk membaca kedua matriks
void bacaKeduaMatrix(int matriksA[3][3], int matriksB[3][3]){
    readMatrixA(matriksA);
    readMatrixB(matriksB);
}

//prosedur penjumlahan matriks
void addMatrix(int matriksA[3][3], int matriksB[3][3], int hasil[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            hasil[i][j] = matriksA[i][j] + matriksB[i][j];
        }
    }
}

//prosedur untuk print hasil penjumlahan matrisk
void printResult(int hasil[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matriksA[3][3],matriksB[3][3], hasil[3][3];
    bacaKeduaMatrix(matriksA, matriksB);
    addMatrix(matriksA, matriksB, hasil);
    printResult(hasil);
    return 0;
}
