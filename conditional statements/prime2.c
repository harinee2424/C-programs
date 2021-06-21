#include<stdio.h> //print all prime with in given range
int main(){
    int n,count,i,range;
    printf("enter range");
    scanf("%d",&range);

    n = 2;
    while(n <= range){
        count=0;
        i = 1;
        while(i <= n){
            if(n % i ==0){
                count++;
            }
            i++;

        }
        if(count == 2)
        printf("%d",n);
    }
    n++;

}