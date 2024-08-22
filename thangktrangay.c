#include <stdio.h>
int main(){
    int thang, nam;
    printf("nhap thang: ");
    scanf("%d", &thang);
    if(thang == 4 || thang == 6 || thang == 9 || thang == 11){
        printf("%d co 30 ngay", thang);
    }else if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
        printf("%d co 31 ngay", thang);
    }
    if(thang == 2){
        printf("nhap nam: ");
        scanf("%d", &nam);
        if(nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0){
             printf("%d co 29 ngay", thang);
        }else {
            printf("thang %d co 28 ngay", thang);
        }
    }
}
