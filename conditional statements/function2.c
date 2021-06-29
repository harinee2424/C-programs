//smaalest among three numbers using functions
//small(a,small(b,c))->logic
#include<stdio.h>
int small(int x,int y){
    if(x < y)
       return x;
    else 
       return y;
}
int main(){
    int a,b,c;
    printf("enter three values");
    scanf("%d %d %d",&a,&b,&c);
    int z = small(a, small(b,c));
    printf("result is %d\n",z);
    return 0;
}