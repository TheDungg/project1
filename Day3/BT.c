#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap a:"); scanf("%d",&a);
	printf("Nhap b:"); scanf("%d",&b);
	
	if(a>=b){
		if(b==0){
			printf("Error..");
		}else{
			float div=a/(float)b;
			printf("\n%d / %d = %f",a,b,div);
		}
	}else{
		int mul = a*b;
    	printf("\n%d * %d = %d",a,b,mul);
	}
}
