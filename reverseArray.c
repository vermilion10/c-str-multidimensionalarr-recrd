// desc: program untuk membalik array of character yang diinputkan
// author: vermilion10
// date: 6 januari 2025

#include <stdio.h>
#include <string.h>

//prosedur untuk membaca input
void readInput(char *teks){
    fgets(teks, 11, stdin);
    teks[strcspn(teks, "\n")] = 0; 
}

//prosedur untuk print array char yang sudah dibalikkan
void reverseArray(char *teks){
    int length = strlen(teks);
    for(int i = length-1; i >= 0; i--){
        printf("%c", teks[i]);
    }
}

int main(){
    char teks[11];
    readInput(teks);
    reverseArray(teks);
    return 0;
}