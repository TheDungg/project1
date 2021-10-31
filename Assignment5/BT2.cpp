//Nhap 1 so n. Tim cac uoc va tinh tong cac uoc

#include<stdio.h>
int main(){
	int n;
	int S=0;
	do
  {
    printf("\nNhap n: ");
    scanf("%d", &n);
  }
  while(n <= 0);
	printf("Cac uoc cua %d là: ",n);
  for(int i = 1; i <= n; i++)
  {
    if(n % i == 0)
    {
      printf("%4d", i);
      S = S + i;
    }
  }
    printf("\nTong cac uoc cua %d là: %d",n,S);
}
