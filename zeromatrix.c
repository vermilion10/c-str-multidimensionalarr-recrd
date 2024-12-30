// desc: program untuk memeriksa apakah sebuah matrik  merupakan  matriks nol atau buakn
// author: vermilion10
// date: 30 desember 2024

#include <stdio.h>

//fungsi untuk cek apakah matriks merupapakan matriks nol
int isZero(int matriks[3][3]){
    int cekNol = 1;
    for (int i = 0; i < 3 ; i++){
        for (int j = 0; j < 3; j++){
            if (matriks[i][j] != 0){
                cekNol = 0;
            }
        }
    }
    return cekNol;
}

//prosedur untuk membaca matriks
void readMatriks(int matriks[3][3]){
    for (int i = 0; i < 3 ; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &matriks[i][j]);
        }
    } 
}

//prosedur untuk print apakah matriks merupakan matriks nol atau bukan
void cekZero(int matriks[3][3]){
    if (isZero(matriks)){
        printf("matriks nol");
    } else {
        printf("bukan matriks nol");
    }
}

int main(){
    int matriks[3][3];
    readMatriks(matriks);
    cekZero(matriks);
    return 0;
}