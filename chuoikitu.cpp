#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, xaudoixung = 1, countA = 0;

    printf("Nhap vao mot chuoi: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            xaudoixung = 0;
            break;
        }
    }

    for (i = 0; i < len; i++) {
        if (str[i] == 'a') {
            countA++;
        }
    }

    if (xaudoixung) {
        printf("Chuoi la chuoi doi xung.\n");
    } else {
        printf("Chuoi khong la chuoi doi xung.\n");
    }

    printf("So ky tu 'a' xuat hien trong chuoi: %d\n", countA);

    return 0;
}
