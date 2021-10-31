// Yeu cau nguoi dung nhap vao dung 3 canh cua tam giac roi tinh C va S 

#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	do{
	printf("\nNhap a = "); scanf("%d", &a); 
    printf("\nNhap b = "); scanf("%d", &b); 
    printf("\nNhap c = "); scanf("%d", &c);  
	}
	while(a+b<c || a+c<b || b+c<a);
	int C=a+b+c;
   	int P=C/2;
   	int S=sqrt(P*(P-a)*(P-b)*(P-c));
   	printf("\nChu vi=%d",C);
   	printf("\nDien tich=%d",S);
}
