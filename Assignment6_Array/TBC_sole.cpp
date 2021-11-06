//Tinh TBC cac so le trong mang n so

#include<stdio.h>
int main(){
	int n;
	do{
		printf("Nhap n: "); scanf("%d",&n);
	}
	while(n<=0);
	int a[n]; 	
	for(int i=0;i<n;i++){
		printf("Nhap pt thu %d:",i);
		scanf("%d",&a[i]); 
	}
	
	double tbc, sum=0;
	int count=0;
	for( int i=0 ; i<n ; i++ ){
		if(a[i]%2==1)
		{
			sum=sum+a[i];
			count++;
		}
	}		
		tbc=double(sum/count);
		printf("TBC cac so le la: %lf",tbc);
}
