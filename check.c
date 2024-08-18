#include <stdio.h>
int main(){
	int n, i, j;
	printf("n = ");
	scanf("%d", &n);
	
	for(i = 1;i < n;i++){
		if(i % 2 == 0){
			j += i;
			return j;
		}
	}
}
