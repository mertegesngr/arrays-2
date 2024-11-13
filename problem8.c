#include <stdio.h>

int main(){

int arr []={51,52,53,54,55,56} ; 


for(int i =0;i<5;i++){

if(arr[i]%2==1){

    arr[i]=arr[i]+1;
    printf("%d\n",arr[i]) ;
}
}













    return 0 ; 
}