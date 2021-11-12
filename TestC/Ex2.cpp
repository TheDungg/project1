#include <stdio.h> 
float average (int arr[], int number){
    int sum = 0;
    int count = 0;
    float average = 0;
    for (int i = 0; i < number; i++) {
        sum += arr[i];
        count++;
    }
    average = (float)sum/count;
    return  average;
}
int main(){
    int n;
    printf("Nhap so luong so nguyen: ");
    scanf("%d",&n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("So nguyen thu %d: ", i);
        scanf("%d",&arr[i]); 
    }   
    
    printf("\nTrung binh cong: %.2f", average(arr,n));
    return 0;
}
