//Hien thi so lon nhat trong 10 so nhap vao

#include<stdio.h>
int main(){
	int ary[10];
	int i, total, high;
	for(i=0; i<10; i++){
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &ary[i]);
	}
	high = ary[0];
	for(i=1; i<10; i++){
		if(ary[i] > high){
			high = ary[i];
		}
	}
	printf("\nSo lon nhat la %d", high);
}
