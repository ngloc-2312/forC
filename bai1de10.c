#include <stdio.h>
int main(){
	int x, n;
	float T = 100;
	
	printf("nhap so nguyen n:");
	scanf("%d", &n);
	
	printf("nhap so nguyen x:");
	scanf("%d",&x);
	
	for(int i = 2;i <= n;i++){
		T += (float)x/i;
	}
	printf("ket qua = %.2f", T);
}
