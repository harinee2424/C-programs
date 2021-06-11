#include<stdio.h>
int main(){
    double quantity,amount,rpu;

    printf("enter the quantity");
    scanf("%lf",&quantity);

    printf("enter the rpu");
    scanf("%lf",&rpu);

    amount=quantity * rpu;
    if(amount > 500){
        amount= amount * 0.9;
        printf("calculated net amount %lf\n",amount);
        return 0;
    }
}