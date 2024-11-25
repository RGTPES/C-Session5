#include<stdio.h>

int main(){
	int a,b;
	printf("nhap bang cuu chuong\n");
	scanf("%d",&a);
	if(a >=1 && a<=9){
		for(int i = 1;i<=9;i++){
		b= a * i;
		printf("%d * %d = %d\n",a,i,b);
	}
		}else{
		printf("ko hop le");
	}
}
