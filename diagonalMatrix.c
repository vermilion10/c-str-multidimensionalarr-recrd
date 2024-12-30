// desc: program untuk memeriksa apakah sebuah matriks 3x3 merupakan matriks diagonal atau bukan
// author: vermilion10
// date: 31 desember 2024

#include <stdio.h>
#include <stdbool.h>

//fungsi untuk cek apakah matriks merupakan matriks diagonal
bool isDiagonal(int matriks[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i == j) {
                if (matriks[i][j] == 0) {
                    return false;
                }
            } else {
                if (matriks[i][j] != 0) {
                    return false;
                }
            }
        }
    }
    return true;
}

//prosedur untuk membaca matriks
void readMatrix(int matriks[3][3]){
    for (int i = 0; i < 3 ; i++){
        for (int j = 0; j < 3; j++){
           scanf("%d", &matriks[i][j]);
        }
    }
}

//prosedur untuk print status matriks diagonal
void cekDiagonal(int matriks[3][3]){
    if (isDiagonal(matriks)){
        printf("matriks diagonal");
    } else {
        printf("bukan matriks diagonal");
    }
}

int main(){
    int matriks[3][3];
    readMatrix(matriks);
    cekDiagonal(matriks);
    return 0;
}