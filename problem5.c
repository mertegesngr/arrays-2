#include <stdio.h>

int main(){

char x[500] ; 
int sayac =0 ; 

 printf("cümle giriniz(maks 500 karakter) : ");gets(x); printf("\n") ; 


for(int i =0 ; i<500;i++){

if(x[i]==' '){

sayac++ ; 
}

if(x[i]=='\0'){
    break ; 
}


} 




printf("cümledeki kelime sayısı : %d",sayac+1) ; 








    return 0 ; 
}