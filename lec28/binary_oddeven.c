#include<stdio.h>
int main(){
    int n;
    printf("enter a no:\n");
    scanf("%d",&n);
    if(n&1){
        printf("odd");

    }else{
        printf("even");

    }
}