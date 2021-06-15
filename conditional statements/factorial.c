#include<stdio.h>
int main(){
    int n;
    int i, fact = 1;
    printf("enter n");
    scanf("%d", &n);

    i = 1;
    while(i <= n)
    {
        fact = fact * i;
        i = i + 1;
    }
    printf("factorial of %d is %d \n",n,fact);
    return 0;
}