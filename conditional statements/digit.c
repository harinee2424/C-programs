/*sum of digits*/
#include<stdio.h>
int main() {
    int n;
    int sum = 0;
    printf("enter n");
    scanf("%d",&n);

    while(n > 0){
        sum = sum + (n % 10);
        n = n / 10;
    }
    printf("sum of digits is %d",sum);
    return 0;
}