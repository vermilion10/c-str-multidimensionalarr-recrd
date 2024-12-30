// desc: program untuk menghitung banyaknya bilngan ganjil pada array 4x4
// author: vermilion10
// date: 30 desember 2024

#include <stdio.h>

//fungsi untuk mmenghitung banyaknya bilangan ganjil pada array
int cekGanjil(int arr[4][4]){
    int count = 0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (arr[i][j] % 2 != 0){
                count++;
            }
        }
    }
    return count;
}

//prosedur untuk menginputkan array
void inputArray(int arr[4][4]){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &arr[i][j]);
        }
    }
}

int main(){
    int arr[4][4];
    inputArray(arr);
    printf("%d\n", cekGanjil(arr));
    return 0;
}