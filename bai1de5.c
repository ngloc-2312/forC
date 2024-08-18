
#include <stdio.h>
#include <math.h>

double sum(int n, float x) {
    double sum = 100;
    for (int i = 1; i <= n; i++) {
        sum += pow(-1, i+1) * x / (10 * i);
        
    }
    return sum;
}

int main() {
    int n;
    double x;

    printf("Nhap gia tri n: ");
    scanf("%d", &n);
    printf("Nhap gia tri x: ");
    scanf("%lf", &x);

    double ketqua = sum(n, x);
    printf("Tong cua day so = %lf\n", ketqua);

    return 0;
}


