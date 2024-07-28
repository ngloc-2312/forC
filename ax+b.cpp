#include <stdio.h>
int main(){
	int a, b;
	float x;
	
	printf("nhap a b:");
	scanf("%d%d",&a, &b);
	
	if(a == 0){
		if(b == 0){
			printf("pt vo so no");
		}else{
			printf("pt vo no");
		}
	}else{
		x = (float)-b/a;
		printf("pt co no x = %.2f", x);
	}
}
