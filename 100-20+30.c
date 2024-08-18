#include <stdio.h>

int main() {
    int n;
    int i;
    int T = 100;
    int sum = 0;

    // Nh?p v�o n
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);

    // T�nh bi?u th?c
    for(i = 0;i <= n;i++) {
        if (i % 2 == 0) {
            sum += 10 * i;
        } else {
            sum -= 10 * i;
        }
        i++;
    }

    // In k?t qu?
    printf("Ket qua la: %d\n", T + sum);

    return 0;
}
