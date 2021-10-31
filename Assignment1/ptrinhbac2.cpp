//Nhap vao 3 so a,b,c. Giai ptrinh bac 2: ax^2+bx+c = 0 ( tim x)

#include<stdio.h>
#include<math.h>
int main(){
	int a, b,c;
    printf("\nNhap a = "); scanf("%d", &a); 
    printf("\nNhap b = "); scanf("%d", &b); 
    printf("\nNhap c = "); scanf("%d", &c);
    
    if(a==0){
    	if(b==0){
    		if(c==0){
    			printf("pt vo so no");
			}else{
				printf("pt vo no");
			}
		}else{
			int x=-c/b;
			printf("pt co no:%d",x);
		}
	}else{
		int delta=b*b-4*a*c;
		if(delta<0){
			printf("pt vo no");
		}else{
			if(delta==0){
				int x12=-b/(2*a);
				printf("pt co no kep:%d",x12);
			}else{
				int x1=(-b+sqrt(delta))/(2*a);
				int x2=(-b-sqrt(delta))/(2*a);
				printf("\npt co no x1=%d",x1);
				printf("\npt co no x2=%d",x2);
			}
		}
	}
}
	


