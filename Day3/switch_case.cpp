#include<stdio.h>
int main(){
	int a;
	printf("Nhap so:");  scanf("%d",&a);
	
	switch(a){
		case 2: printf("Day la thu 2");break;
		case 3: printf("Day la thu 3");break;
		case 4: printf("Day la thu 4");break;
		case 5: printf("Day la thu 5");break;
		case 6: printf("Day la thu 6");break;
		case 7: printf("Day la thu 7");break;
		case 8: printf("Day la chu nhat");break;
		default: printf("khong phai ngay trong tuan");
	}
}
