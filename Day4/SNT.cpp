//Nhap 1 so nguyen duong, kiem tra n có phai so nguyen to hay khong

#include<stdio.h>
int main(){
	int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
    
    int count=0,i=1;
    while(i<=n){
    	if(n%i==0){
    		count++
		}
	}
	
}
