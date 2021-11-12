#include<stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap danh sach %d so nguyen:",n);
	for(int i=0;i<n;i++){
		printf("\nNhap so thu %d =",i);
		scanf("%d",&arr[i]);
	}
	int EvenNumber = 0;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			EvenNumber = arr[i];
		}
	}

	if(EvenNumber != 0){
		printf("\nLast Even Number: %d",EvenNumber);
	}else{
		printf("\nNo Even Number");
	}

}
