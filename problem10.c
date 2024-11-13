#include <stdio.h>


int main(){

char kelime[50]; 
int index =0; 
int bharf=0;
int kharf=0;
int sayi =0; 
printf("random salla bişiler"); gets(kelime); printf("\n"); 

while (kelime[index]!='\0'){

if(kelime[index]>='a'&&kelime[index]<='z'){
kharf++;
}


if (kelime[index]>='A'&&kelime[index]<='Z'){
 bharf ++;
}
if(kelime[index]>='1'&&kelime[index]<='9'){
 sayi ++;
}



    index++ ; 
}
printf("küçük harf sayısı =%d\n",kharf);
printf("büyük harf sayısı =%d\n",bharf);
printf("sayı sayısı =%d\n",sayi);










    return 0 ; 
}