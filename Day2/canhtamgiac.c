#include<stdio.h>
#include<math.h>
int main(){
	int a, b,c;
    printf("\nNhap a = "); scanf("%d", &a); 
    printf("\nNhap b = "); scanf("%d", &b); 
    printf("\nNhap c = "); scanf("%d", &c);
    
    if(a+b>c){
    	if(b+c>a){
    		if(a+c>b){
    			int C=a+b+c;
    			int P=C/2;
    			int S=sqrt(P*(P-a)*(P-b)*(P-c));
    			printf("\nChu vi=%d",C);
    			printf("\nDien tich=%d,S");
			}else{
				printf("day ko phai 3 canh tam giac");
			}
		}else{
			printf("day ko phai 3 canh tam giac");
		}
	}else{
		printf("day ko phai 3 canh tam giac");
	}
}
	
