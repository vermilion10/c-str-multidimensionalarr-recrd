// desc: program untuk memeriksa apakah sebuah blok yang ada di permainan sudoku valid atau tidak
// author: vermilion10
// date: 31 desember 2024

#include <stdio.h>
#include <stdbool.h>

//fungsi untuk cek apakah blok sudoku valid
bool isValidBlock(int blok[3][3]){
    int cek[10] = {0};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (blok[i][j] == 0) {
                return false;
            }
            cek[blok[i][j]]++;
        }
    }
    for (int i = 1; i<= 9; i++){
        if (cek[i] > 1){
            return false;
        }
    }
    return true;
}

//prosedur untuk membaca blok sudoku
void readBlock(int blok[3][3]){
    for (int i = 0; i < 3 ; i++){
        for (int j = 0; j < 3; j++){
           scanf("%d", &blok[i][j]);
        }
    }
}

//prosedur untuk print status sudoku
void cekSudokBlock(int blok[3][3]){
    if (isValidBlock(blok)){
        printf("valid");
    } else {
        printf("tidak valid");
    }
}

int main(){
    int blok[3][3];
    readBlock(blok);
    cekSudokBlock(blok);
    return 0;
}