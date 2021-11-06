#include<stdio.h>
int main(){
	int arr[5]={23,90,9,25,16};
	int tmp,i,j;
	
	for(i=1;i<5;i++){
		int j=i-1;
		int gtkt=arr[i];
		
		for(;j>=0 && gtkt<arr[i];j--){
			arr[j+1] = arr[j];
		}
		arr[j+1] = gtkt;
	}
	printf("\nMang sau khi sap xep la: ");
	for(int i=0;i<5;i++){
		printf("\t%d",arr[i]);
	}
}

