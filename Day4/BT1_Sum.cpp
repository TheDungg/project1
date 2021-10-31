//Nhap 1 so nguyen n, tinh S=1+2+3+...+n

#include <stdio.h>
int main(){
	int n, i=1, s=0;
	do{
	printf("nhap n: ");
	scanf("%d",&n);
	}
	while (n<=0);
	while(i<=n){
		s=s+i;
		i++;
	}	
	printf("ket qua: %d",s);
}
