#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c;
	printf("nhap a b c:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a + b > c && b + c > a && a + c > b){
		printf("a b c tao thanh tam giac\n");
	}else{
		printf("a b c khong tao thanh tam giac\n");
	}
	
	if(a == b && b == c){
		printf("tam giac deu\n");
	}else if(a == b || b == c || a == c){
		printf("tam giac can\n");
	}else if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
		printf("tam giac vuong\n");
	}
	
	float chuvi, dientich, p;
	chuvi = a + b + c;
	p = chuvi/2;
	dientich = sqrt(p*(p-a)*(p-b)*(p-c));
	
	printf("chu vi = %.2f\n",chuvi);
	printf("dientich = %.2f\n",dientich);
	
	
}
