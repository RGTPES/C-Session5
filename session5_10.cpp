#include<stdio.h>
int main(){
	int num;
	printf("Nhap so \n");
	scanf("%d",&num);
	while(num>0){
		printf("%d ",num%10);
		num/=10;
	}
}