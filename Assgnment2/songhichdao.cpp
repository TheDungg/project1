//Tim so nghich dao cua 1 so nguyen duong khong qua 4 c/s

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
