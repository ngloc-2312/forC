#include <stdio.h>
#include <math.h>
int main(){
	int i, n;
	float T;
	
	printf("nhap so nguyen n:");
	scanf("%d", &n);
	
	for(i = 1;i <= n;i++){
		if(i % 2 != 0){
		T += sqrt(i);
		
		}
		
	}
	printf("T = %.2f", T);
}
