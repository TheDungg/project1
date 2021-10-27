#include<stdio.h>
int main(){
	float a,b;
	int n=0;
	printf("Nhap so tien gui vao:");  scanf("%f",&a);
	printf("Nhap so tien muon nhan:"); scanf("%f",&b);
	
	while(a<b){
		a=a+a*8/100;
		n++;
	}
	printf("So nam can gui la: %d",n);
}
