// Tinh tong 100 so le nguyen duong dau tien

#include<stdio.h>
int main(){
	int sum=0;
	for(int i=1;i<=200;i++){
		if(i%2==1){
			sum=sum+i;
		}
	}
	printf("sum=%d",sum);
}
