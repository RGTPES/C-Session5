#include<stdio.h>
int main(){
	int num1,num2,min,ucln,bcnn;
	printf("nhap so thu nhat\n");
	scanf("%d",&num1);
	printf("nhap so thu hai\n");
	scanf("%d",&num2);
	if(num1 <=0 || num2<=0){
		printf("nhap lai");
	}else{
		int min= (num1 < num2)?num1:num2;
		for(ucln =min;ucln >0;ucln--  ){
			if(num1 % ucln==0 && num2 %ucln==0){
				bcnn = num1 * num2 / ucln;
				printf("%d la BCNN cua 2 so %d va %d",bcnn,num1,num2);
				break;
			}
		}
	}

}
