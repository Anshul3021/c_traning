#include<stdio.h>
int main(){
    int arr[6]={7,1,4,5,6,1};
    int minbuy=arr[0];
    int maxp=arr[0];
    for(int i=1;i<6;i++){
        if(arr[i]<minbuy){
            minbuy=arr[i];
        }else{
            int profit=arr[i]-minbuy;
            if(profit>maxp){
                maxp=profit;
            }
        }
    } 
    printf("%d",maxp);              

}