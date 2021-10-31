//Nhap vao 3 so, tim so nho nhat

#include<stdio.h>
int main(){
	int a, b,c;
    printf("\nNhap a = "); scanf("%d", &a); 
    printf("\nNhap b = "); scanf("%d", &b); 
    printf("\nNhap c = "); scanf("%d", &c);
    
    if(a<b){
    	if(a<c){
    		printf("%d la so nho nhat",a);
		}else{
			printf("%d la so nho nhat",c);
		}
	}else if(b<c){
		printf("%d la so nho nhat",b);
	}else{
		printf("%d la so nho nhat",c);
	}
		
}

