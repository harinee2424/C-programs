#include<stdio.h>
int fact(int n){
    int i,f =1;
    for(i = 1; i <= n; i++){
        f = f*i;

    }
    return f;
}

int ncr(int n, int r) {
    return fact(n)/(fact(n-r) * fact(r));
}
int main(){
    int n,r;
    printf("enter n");
    scanf("%d",&n);

    printf("enter r");
    scanf("%d",&r);

    printf("%d is %d\n", ncr(n,r));
    return 0;
}