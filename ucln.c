#include <stdio.h>
int main(){
	int a, b, ucln;
	printf("nhap a b:\n");
	scanf("%d%d",&a,&b);
	
	for(int i = 1;i <= a && i <= b;i++){
		if(a % i == 0 && b % i == 0){
			ucln = i;
		}
	}
	printf("uoc chung lon nhat cua %d va %d la %d",a,b,ucln);
}
