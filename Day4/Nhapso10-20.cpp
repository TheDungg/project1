//Nhap so tu 10-20. Neu sai, bat nhap lai

#include<stdio.h>
int main(){
	float a;
	int i=0;
	do{
		printf("Nhap so trong khoang 10-20:"); scanf("%f",&a);
	}
	while(a<10 || a>20);	
	printf("%f",a);
}
