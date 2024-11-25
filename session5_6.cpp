#include<stdio.h>
int main(){
	int num1,num2,answer;
		printf("Nhap so thu nhat\n");
	scanf("%d",&num1);
	printf("Nhap so thu hai\n");
	scanf("%d",&num2);
	while(1){
		printf("1. Tong 2 so\n");
		printf("2. Hieu 2 so\n");
		printf("3. Tich 2 so\n");
		printf("4. Thuong 2 so\n");
		printf("5. Exit\n");
			scanf("%d",&answer);
			switch(answer){
		case 1:
			printf("tong hai so la %d\n",num1 + num2);
			
			continue;
		case 2:
			printf("Hieu hai so la %d\n",num1 - num2);
			continue;
		case 3:
			printf("Tich hai so la %d\n",num1 * num2);
			continue;
		case 4:
			printf("Thuong hai so la %d\n",num1 / num2);
			continue;
		default :
		break;	
		}
	if(answer=5){
		break;
		}
	
	}


	
	
		return 0;
			
}

