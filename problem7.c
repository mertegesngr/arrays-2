#include <stdio.h>

int main() {
    int sayac = 0;         
    char kelime[20];        
    int sayi = 0;          
int sayac2 =0; 
    printf("Bir kelime girin: ");
    gets(kelime);         
    printf("Girdiğiniz kelime: %s\n", kelime);

    // Kelimenin uzunluğunu hesapla
    while (kelime[sayi] != '\0') {   
      sayi++; 
        sayac++;
    }
    printf("Uzunluk = %d\n", sayac);

   
    char ters[sayac + 1];

   int sayi2 =sayac-1 ; 
    for (int i = 0; i < sayac; i++) {
        ters[i] = kelime[sayi2 - i];   
    }
    ters[sayac] = '\0';  

    printf("Kelimenin tersi: %s\n", ters);  

    for(int i= 0 ; i<=sayac ; i++){
        if(kelime[i]!=ters[i]){
sayac2++; 
        }
    }

if(sayac2==0){
    printf("kelime palindromdur") ; 
}

else{
    printf("kelime palindrom değildir") ; 
}
    return 0;
}
