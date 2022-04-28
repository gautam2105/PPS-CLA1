#include <stdio.h>

int main() {

    int num, i,sum;
    scanf("%d", &num);
    int arr[num];
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i=0;i<num;i++){
        sum=sum+arr[i];
    } 
    
    printf("%d",sum);
    return 0;
}