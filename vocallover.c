// desc: program untuk memeriksa apakah huruf yang berpasangan ada pada array 1D
// author: vermilion10
// date: 28 desember 2024

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isEqual(char a, char b){
    return tolower(a) == tolower(b);
}

void cekSama(char arr[], int size, char a, char b){
    for (int i = 0; i < size - 1; i++) {
        if (isEqual(arr[i + 1], a) && isEqual(arr[i], b)) {
            printf("ada\n");
            return;
        }
    }
    printf("tidak ada\n");
}

int main(){
    char arr[] = {'J', 'T', 'K', 'P', 'o', 'l', 'b', 'a', 'n'};
    int size = sizeof(arr) / sizeof(arr[0]);
    char pertama, kedua;
    scanf("%c %c", &pertama, &kedua);
    cekSama(arr, size, pertama, kedua);
}