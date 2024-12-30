// desc: program untuk menghitung total titik dari kuadran yang diinginkan
// author: vermilion10
// date: 30 desember 2024

#include <stdio.h>

//deklarasi tipe data Titik
typedef struct {
    int x;
    int y;
} Titik;

//fungsi untuk menentukan kuadran dari titik P
int Kuadran(Titik P){
    if (P.x > 0 && P.y > 0){
        return 1;
    } else if (P.x < 0 && P.y > 0){
        return 2;
    } else if (P.x < 0 && P.y < 0){
        return 3;
    } else if (P.x > 0 && P.y < 0){
        return 4;
    } else {
        return 0;
    }
}

//prosedur untuk membaca titik P (oordinat dan absis)
void readTitik(Titik *P){
    scanf("%d %d", &P->x, &P->y);
}

//prosedur untuk membaca array titik sebanyak M
void readArrTitik(Titik *points, int M){
    for (int i =0; i < M; i++){
        readTitik(&points[i]);
    }
}

//fungsi untuk menghitung banyaknya titik yang berada di kuadran N
int countTitik(Titik *points, int M, int kuadran){
    int count = 0;
    for (int i = 0; i < M; i++){
        if (Kuadran(points[i]) == kuadran){
            count++;
        }
    }
    return count;
}

int main(){
    int M, N;
    Titik points[10];
    scanf("%d", &M);
    readArrTitik(points, M);
    scanf("%d", &N);
    printf("%d", countTitik(points, M, N));
    return 0;
}