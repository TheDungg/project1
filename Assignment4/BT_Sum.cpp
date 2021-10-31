//Nhap n sau do tinh S = 1 + 1/2 + 1/3 + … + 1/n

#include<stdio.h>
int main(){
	int n,i=1;
	float s=0;
	do{
		printf("Nhap n:"); scanf("%d",&n);
	}
	while(n<=0);
	while(i<=n){
		s=s+1/(float)i;
		i++;
	}
	printf("Sum= %f",s);
}

