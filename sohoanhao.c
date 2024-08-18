
#include <stdio.h>

// Hàm tính t?ng các u?c s? c?a m?t s? nguyên duong
int tinhTongUocSo(int n) {
    int tong = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    return tong;
}

int main() {
    printf("Cac so hoan hao tu 1 den 100 la: ");
    for (int i = 1; i <= 100; i++) {
        int tongUocSo = tinhTongUocSo(i);
        if (tongUocSo == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}


