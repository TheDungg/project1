#include<stdio.h>
int TinhTong(int a,int b){
	return a+b;
}
//gia tri Luan Ly(boolean) -- la ket qua qua toan tu logic và relation(so sanh va ket hop) -- true/false
bool KiemTraSoDuong(int a){
	 if(a>0){
	 	return true;
	 }
	 return false;
	 // a>0 -> ket qua la true or false
	 return a>0;	
}
void InRaMenu(){
	printf("vui long chon menu:\n");
	printf("1. Chon mon an\n");
	printf("2. Chon do uong\n");
	//return;  // co hoac ko co return
}
int main(){
	printf("12+15 = %d\n", TinhTong(12,15));
	
	if(KiemTraSoDuong(5)){
		printf("Day la so duong\n");
	}else{
		printf("Khong phai so duong");
	}
	InRaMenu();
}
