#include<stdio.h>  ///to cehck wheather a given number is prime
int main(){
    int n,i,count;
    printf("enter the value of n");
    scanf("%d",&n);

    count = 0;
    i = 1;
   while(i <= n){
       if(n % i == 0){
           count++;
       }
       i++;
   }
   if(count == 2){
       printf("%d is prime", n);
   }else {
       printf("%d is not prime", n);
   }
   return 0;
}