#include <stdio.h>

int main(){


int x ; 

printf("dizi boyutu girin : "); scanf("%d",&x); 

int arr[x]; 
int a ; 
int c ; 

while (1){


printf("diziye hangi sayıyı hangi konuma girmek istiyorsunuz: \n"); 
printf("101 girerseniz programdan çıkış yapılır. \n"); 
printf("sayı = "); scanf("%d",&a); printf("\n"); 
if(a==101){
break ; 
}
printf("dizinin hangi konumuna sayıyı yerleştirmek istiyorsunuz : "); 
scanf("%d",&c); 
arr[c]=a ; 






}











    return 0 ; 
}