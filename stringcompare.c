/*desc: membandingkan dua buah kata pada array of character 
author: vermilion10
date:  december 2024*/

#include <stdio.h>

int main() {
    char K1[10], K2[10];
    int i = 0;
    
    // Input
    printf("masukkan kata 1: ");
    scanf("%s", K1);
    printf("masukkan kata 2: ");
    scanf("%s", K2);
    
    // Bandingkan karakter
    while (K1[i] != '\0' && K2[i] != '\0' && K1[i] == K2[i]) {
        i++;
    }
    
    // Output
    if (K1[i] == K2[i]) {
        printf("0\n0\n");
    } else if (K1[i] > K2[i]) {
        printf("+%d\n%d\n", K1[i] - K2[i], i + 1);
    } else {
        printf("%d\n%d\n", K1[i] - K2[i], i + 1);
    }
    
    return 0;
}
