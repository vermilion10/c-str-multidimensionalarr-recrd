// desc: program untuk memeriksa posisi suatu titik terhadap lingkaran
// author: vermilion10
// date: 6 januari 2025

#include <stdio.h>

//deklarasi tipe data Point
typedef struct{
    int x;
    int y;
} Point;

//prosedur untuk membaca titik pusat lingkaran
void readPusat(Point *p){
    scanf("%d %d", &p->x, &p->y);
}

//prosedur untuk membaca radius lingkaran
void readRadius(int *r){
    scanf("%d", r);
}

//prosedur untuk membaca titik yang akan diperiksa
void readTitik(Point *p){
    scanf("%d %d", &p->x, &p->y);
}

//fungsi untuk menghitung jarak antara dua titik
int calcJarak(Point p1, Point p2){
    return (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);
}

//prosedur untuk menampilkan status titik terhadap lingkaran
void printStatus(Point pusat, int r, Point titik){
    int jarak = calcJarak(pusat, titik);
    if(jarak == 0){
        printf("tepat pada titik pusat");
    } else if(jarak < r * r){
        printf("di dalam lingkaran");
    } else if(jarak == r * r){
        printf("tepat pada lingkaran");
    } else {
        printf("di luar lingkaran");
    }
}

int main(){
    Point pusat, titik;
    int r;
    readPusat(&pusat);
    readRadius(&r);
    readTitik(&titik);
    printStatus(pusat, r, titik);
    return 0;
}