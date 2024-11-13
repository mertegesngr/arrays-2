#include <stdio.h>

int main(){
int x ; 
printf("dizi boyutu girin : ") ; scanf("%d",&x) ; printf("\n") ;  





int arr[x]; 
int sayac=0 ; 

for(int i=0 ; i<x;i++){

printf("sayı : ") ; scanf("%d",&arr[i]) ; printf("\n") ; 






}


for(int j =0 ; j<x ; j++){



    sayac++ ; 


    if(arr[j]%2==0 &&arr[j+1]%2==0 && sayac<x){

        printf("%d %d",arr[j],arr[j+1]) ; 

    }


}











    return 0 ; 
}