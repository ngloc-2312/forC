#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	float e = 2.71;
	int n, x;
	printf("nhap so nguyen n:");
	scanf("%d", &n);
	printf("nhap so nguyen x:");
	scanf("%d", &x);
	float T;
	for(int i = 1;i <= n;i++){
		T += pow(e,i*x);
	}
	printf("ket qua la %.2f", T);
} 
