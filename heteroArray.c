// desc: program untuk memeriksa apakah array M dan N sama.
// author: vermilion10
// date: 6 januari 2025

#include <stdio.h>
#include <stdbool.h>

//deklarasi tipe data Point
typedef struct{
    int x;
    int y;
} Point;

//prosedur untuk membaca input titik
void readPoint(Point *p){
    scanf("%d %d", &p->x, &p->y);
}

//prosedur untuk membaca input array of point M
void inputArrayM(Point M[]){
    for(int i = 0; i < 5; i++){
        readPoint(&M[i]);
    }
}

//prosedur untuk membaca input array of point N
void inputArrayN(Point N[]){
    for(int i = 0; i < 5; i++){
        readPoint(&N[i]);
    }
}

//fungsi untuk memeriksa apakah array M dan N sama
bool isSama(Point M[], Point N[]){
    for(int i = 0; i < 5; i++){
        if(M[i].x != N[i].x || M[i].y != N[i].y){
            return false;
        }
    }
    return true;
}

//prosedur untuk meanmpilkan hasil
void printResult(bool sama){
    if(sama){
        printf("sama");
    } else{
        printf("tidak sama");
    }
}

int main(){
    Point M[5], N[5];
    inputArrayM(M);
    inputArrayN(N);
    printResult(isSama(M, N));
    return 0;
}
