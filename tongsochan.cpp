#include <stdio.h>
#include <math.h>
int main(){
	int n, i, j;

	printf("nhap so nguyen n: ");
	scanf("%d", &n);

	for(i = 0;i < n;i++){
		if(i % 2 == 0){
			j += i;
		}
	}

	printf("tong so chan la %d", j);
}
