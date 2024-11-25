#include<stdio.h>
int main(){
	int n,sum =0;
	printf("nhap n\n");
	scanf("%d",&n);
	for(int i = 0; i <=n;i++){
		sum +=i;
	}printf("%d",sum);
}
