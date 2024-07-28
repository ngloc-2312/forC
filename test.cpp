#include <stdio.h>
#include <math.h>
int tinhtonguocso(int n){
	int tong = 0;
	
	for(int i = 1;i <= n/2;i++){
		if(n % i == 0){
			tong += i;
		}
	}
	return tong;
}
int main(){
	printf("cac so hoan hao la:\n");
	
	for(int i = 1;i <= 100;i++){
		int tonguocso = tinhtonguocso(i);
		if(tonguocso == i){
			printf("%d\n",tonguocso);
		}
	}
}
