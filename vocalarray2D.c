// desc: program untuk menampilkan posisi kemunculan huruf vocal pada array 2D dengan ordo 3x3
// author: vermilion10
// date: 29 desember 2024

#include <stdio.h>
#include <ctype.h>

//fungsi untuk mengecek apakah char c adalah vokal
int isVokal(char c){
    c = tolower(c);
    return c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o';
}

//prosedur untuk read array 3x3
void bacaArray(char arr[3][3]){
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            scanf(" %c", &arr[i][j]);
        }
    }
}

//prosedur untuk cek dan print posisi huruf vokal
void cekVokal(char arr[3][3]){
    int ketemu = 0;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(isVokal(arr[i][j])){
                printf("%c: (%d, %d)\n", arr[i][j], i+1, j+1);
                ketemu = 1;
            }
        }
    }
    if(!ketemu){
        printf("tidak ada huruf vokal\n");
    }
}

int main(){
    char arr[3][3];
    bacaArray(arr);
    cekVokal(arr);
    return 0;
}