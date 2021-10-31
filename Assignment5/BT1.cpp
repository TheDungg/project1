//Nhap 1 so n>0 tu ban phim. In ra cac so chan be hon n

#include<stdio.h>
int main(){
	int n;
	do{
	printf("Nhap n:"); scanf("%d",&n);
	}
	while(n<=0);
	for(int i=0;i<n;i++){
		if(i%2==0){
			printf("\t%d",i);
		}
	}
}
