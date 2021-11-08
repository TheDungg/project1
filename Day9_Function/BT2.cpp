#include<stdio.h>
int TimSoDaoNguoc(int n){
	int m=0;
	for(;n!=0;n/=10){
		m = m*10 +n%10;
	}
	return m;
}
int main(){
	int x;
	printf("Nhap x: "); scanf("%d",&x);
	printf("So dao nguoc cua %d la: %d\n",x,TimSoDaoNguoc(x));
}
