#include<stdio.h>
bool KTSNT(int x)
{
	if(x<2){
		return false;
	}
	for(int i=2; i<x; i++){
		if(x%i==0){
			return false;
		}	
	}		
		return true;	
}
int main(){
	int n;
	printf("Nhap n: "); scanf("%d",&n);
	if(KTSNT(n)==true){
		printf("%d la SNT",n);
	}else{
		printf("%d khong phai la SNT",n);
	}
}

