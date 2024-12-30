// desc: program untuk memeriksa apakah sebuah matriks 3x3 merupakan matriks simetris atua bukan
// author: vermilion10
// date: 31 desember 2024

#include <stdio.h>
#include <stdbool.h>

//fungsi untuk cek apakah matriks merupakan matriks simetris
bool isSymetric(int matriks[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (matriks[i][j] != matriks[j][i]){
                return false;
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

//prosedur untuk print status matriks simetris
void cekSymetric(int matriks[3][3]){
    if (isSymetric(matriks)){
        printf("matriks simetris");
    } else {
        printf("bukan matriks simetris");
    }
}

int main(){
    int matriks[3][3];
    readMatrix(matriks);
    cekSymetric(matriks);
    return 0;
}