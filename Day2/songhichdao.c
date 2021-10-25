#include <stdio.h>
int main(){
    int a,b;
    printf("\nNhap so nguyen:"); scanf("%d", &a);
    b = 0;
    while(a > 0){
        b = b * 10 + a%10;
        a = a / 10;
    }
    printf("%d", b);
}
