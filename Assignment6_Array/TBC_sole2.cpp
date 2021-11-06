// Tinh TBC cac so le o vi tri so chan trong mang n so 

#include<stdio.h>
int main(){
	int n; 	
	printf("Nhap so luong n=");
	scanf("%d",&n);
	
	int a[n]; 	
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d:",i);
		scanf("%d",&a[i]); 
	}
	int sum=0;
	int count=0;
	float tbc;
	for(int i=0; i<n; i+=2){
		if(a[i]%2==1){
			sum=sum + a[i];
			count++;
		}
	}
	tbc=(float)sum/count;
	printf("\nTBC cac so le o vi tri so chan la: %f", tbc);
}
