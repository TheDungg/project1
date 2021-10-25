#include<stdio.h>
int main(){
	int a, b;
    printf("\nNhap a = "); scanf("%d", &a); 
    printf("\nNhap b = "); scanf("%d", &b); 
    if(a>b){
    	printf(" %d la so lon hon",a);
	}else{
		if(a==b){
			printf("hai so bang nhau");
		}else{
			printf("%d la so lon hon",b);
		}
	}
}
