#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a"); /*biggest of three numbers*/
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    printf("enter c");
    scanf("%d",&c);
    if(a > b && a > c){
        printf("%d is big",a);
    }
    else if(b>c){
        printf("%d is big",b);
    }
    else{
          printf("%d is big",c);
    }

}
