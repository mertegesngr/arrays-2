#include <stdio.h>

int main(){

int x =2;
while (1)
{
   printf("dizi boyutunu giriniz: "); scanf("%d",&x) ; printf("\n"); 
if(x>0){
    break ; 
}
else{

    printf("lütfen pozitif değer girin!!\n"); 
}
}

 

int arr[x]; 

for(int i =0 ; i<x; i++){

  printf("sayı %d : ",i+1) ; scanf("%d",&arr[i]); printf("\n") ;
  




}
int o ; 
while (1)
{
 
   
    printf("dizideki hangi sayınıın konumunu görmek istiyorsunuz:(-1 programdan çıkış)"); 
    scanf("%d",&o); 
if(o==-1){
    printf("programdan çıkış yapıldı") ;
    break ; 
}
for(int j=0 ; j<x;j++){
if(arr[j]==o){
    printf("sayının dizideki sırası %d\n",j+1); 

}

}

}













    return 0 ; 
}