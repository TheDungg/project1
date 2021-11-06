//Nhap 1 mang n so nguyen. Tim so gan lon nhat trong mang

#include <stdio.h>
int main(){
	int n; 	
	printf("Nhap n=");
	scanf("%d",&n);
	
	int arr[n]; 	
	for(int i=0;i<n;i++){
		printf("Nhap pt thu %d:",i);
		scanf("%d",&arr[i]); 
	}
	
	int h = arr[0]; // gia dinh h la max
	for(int i=1;i<n;i++){
		if(arr[i]>h){
			h = arr[i];
		}
	}
	printf("Max: %d\n",h);
	
	// tim so gan lon nhat
	int m = h;
	// tim 1 so thuoc array nhung khong phai so lon nhat
	for(int i=0;i<n;i++){
		if(arr[i] < h){
			m = arr[i];
			break;
		}
	}
	// chac chan dc 1 so ko phai max
	if(m == h){
		printf("Mang deu la cac so giong nhau");
	}else{
		for(int i=0;i<n;i++){
			if(m < arr[i] && arr[i] < h){
				m = arr[i];
			}
		}
		printf("So gan lon nhat: %d\n",m);
	}
}

