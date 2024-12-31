// desc: program untuk menampilkan titik yang berada di kuadran tertentu
// author: vermilion10
// date: 31 desember 2024

#include <stdio.h>

//deklarasi tipe data Titik
typedef struct {
    int x;
    int y;
} Titik;

//fungsi untuk ememntukan kuadran dari titik P
int Kuadran(Titik P) {
    if (P.x > 0 && P.y > 0) return 1;
    if (P.x < 0 && P.y > 0) return 2;
    if (P.x < 0 && P.y < 0) return 3;
    if (P.x > 0 && P.y < 0) return 4;
    return 0;
}

//prosedur untuk membaca titik P
void readTitik(Titik *P) {
    scanf("%d %d", &P->x, &P->y);
}

//prosedur untuk membaca array titik sebanyak M
void readArrTitik(Titik *points, int M) {
    for (int i = 0; i < M; i++) {
        readTitik(&points[i]);
    }
}

//fungsi untuk menghitung banyaknya titik yang berada di kuadran N
int countTitik(Titik *points, int M, int kuadran) {
    int count = 0;
    for (int i = 0; i < M; i++) {
        if (Kuadran(points[i]) == kuadran) {
            count++;
        }
    }
    return count;
}

//prosedur untuk menampilkan titik yang berada di kuadran N
void filterTitik(Titik *A, Titik *B, int M, int N, int *count) {
    *count = 0;
    for (int i = 0; i < M; i++) {
        if (Kuadran(A[i]) == N) {
            B[*count] = A[i];
            (*count)++;
        }
    }
}

//prosedur untuk menampilkan array titik 
void printArrTitik(Titik *points, int M){
    for (int i = 0; i < M; i++){
        printf("%d %d\n", points[i].x, points[i].y);
    }
}

int main() {
    int M, N;
    Titik A[10], B[10];
    scanf("%d", &M);
    readArrTitik(A, M);
    scanf("%d", &N);
    int count;
    filterTitik(A, B, M, N, &count);
    printf("%d\n", count);
    printArrTitik(B, count);
    return 0;
}
