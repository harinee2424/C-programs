#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num>=0){             
        printf("it is positive");
    }
    else if(num<=0){
        printf("it is negative");
    }
    else{
        printf("it is zero");
    }
    return 0;
}