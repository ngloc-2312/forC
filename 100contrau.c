#include <stdio.h>
#include <conio.h>
int main(){
	int i, j, k;
	
	for(i = 1;i < 20;i++){
		for(j = 1;j < 33;j++){
			k = 100 - i - j;
				if(i*5 + j*3 + k*1/3 == 100 && k % 3 == 0){
		printf("so trau sung la:%d, trau nam la: %d , trau gia la: %d\n ", i, j ,k);
		}
	}
	
}
}
