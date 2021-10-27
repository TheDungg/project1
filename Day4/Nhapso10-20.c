#include<stdio.h>
int main(){
	float a;
	int i=0;
	printf("Nhap so trong khoang 10-20:"); scanf("%f",&a);
	
	while(a<10 || a>20){
		printf("Nhap so trong khoang 10-20:"); scanf("%f",&a);
		i++;
	}
	printf("%f",a);
}
