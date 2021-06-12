/*print numbers from 1 to n*/
#include<stdio.h>
int main(){
    int n,i;
    printf("enter n");
    scanf("%d",&n);

    i=1;
    while(i <= n){
        printf("%d ",i);
        i=i+1;
    }
    return 0;
}