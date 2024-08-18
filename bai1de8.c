#include <stdio.h>
#include <math.h>
int main(){
	int n, i;
	
	printf("nhap so nguyen n");
	scanf("%d",&n);
	 float T;
	for(i = 1;i <= n;i++){
		T += i * (i + 1);
	}
	printf("T = %.2f", T);
}
