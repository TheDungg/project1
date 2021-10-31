//Tong tien thu duoc sau khi gui ngan hang 4000$ trong 4 nam voi lai suat 8%/nam

#include<stdio.h>
int main(){
	float a;
	int i=0;
	printf("Nhap so tien gui  vao:"); scanf("%f", &a);
	
	for(i=0; i<4; i++){
		a=a+a*8/100;
	}
	printf("Tong tien thu duoc sau 4 nam la: %f",a);
	return 0;
}
