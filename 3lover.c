// desc: program untuk menghitung jumlah kemunculan tiga buah huruf berpasangan (tidak terpisah oleh spasi) yang ada dalam sebuah array karakter, dengan ketentuan huruf besar dan huruf kecil dianggap sama 
// author: vermilion10
// date: 6 januari 2025

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void readInput(char *teks, char *huruf1, char *huruf2, char *huruf3) {
    fgets(teks, 41, stdin);
    scanf(" %c", huruf1);
    scanf(" %c", huruf2);
    scanf(" %c", huruf3);
}

void toKecil(char *teks, char *huruf1, char *huruf2, char *huruf3) {
    int panjang = strlen(teks);
    for(int i = 0; i < panjang; i++) {
        teks[i] = tolower(teks[i]);
    }
    *huruf1 = tolower(*huruf1);
    *huruf2 = tolower(*huruf2);
    *huruf3 = tolower(*huruf3);
}

int countMuncul(char *teks, char huruf1, char huruf2, char huruf3) {
    int panjang = strlen(teks);
    int count = 0;
    for(int i = 0; i <= panjang-3; i++) {
        if(teks[i] == huruf1 && teks[i+1] == huruf2 && teks[i+2] == huruf3) {
            count++;
        }
    }
    return count;
}

void printResult(int hasil) {
    printf("%d\n", hasil);
}

int main() {
    char teks[41];
    char huruf1, huruf2, huruf3;
    int hasil;
    readInput(teks, &huruf1, &huruf2, &huruf3);
    toKecil(teks, &huruf1, &huruf2, &huruf3);
    hasil = countMuncul(teks, huruf1, huruf2, huruf3);
    printResult(hasil);
    return 0;
}

