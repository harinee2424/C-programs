#include<stdio.h>  //factorial using functions.
int fact(int n){
    int i,f =1;
    for(i = 1; i <= n; i++){
        f = f*i;

    }
    return f;
}
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);

    printf("factorial value of %d is %d\n", n, fact(n));
    return 0;
}