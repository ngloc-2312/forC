#include <stdio.h>

int main(){
	int a, b, c;
	
	printf("nhap a b c:");
	scanf("%d%d%d",&a, &b, &c);
	
	if(a + b > c && b + c > a && a + c > b){
		printf("a b c tao thanh tam giac\n");
	}else{
		printf("a b c khong tao thanh tam giac\n");
		return 0;
	}
	if(a == b && b == c){
		printf("a b c la tam giac deu");
	}else if(a == b || b == c || a == c){
		printf("a b c la tam giac can");
	}else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
		printf("a b c la tam giac vuong");
	}else if(a*a > b*b + c*c || b*b > a*a + c*c || c*c > b*b + a*a){
		printf("a b c la tam giac tu");
	}else{
		printf("a b c la tam giac nhon");
	}
}
