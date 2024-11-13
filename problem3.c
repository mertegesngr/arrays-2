#include <stdio.h>
#include <stdlib.h>

int main() {
    int sayac = 0;
    char cumle[100];
    
    printf("Cümleyi giriniz: ");
    gets(cumle);  // Use fgets to read the sentence
    
    char harf;
    printf("Hangi harfin kaç kez tekrarlandığını bulmak istiyorsunuz: ");
    scanf(" %c", &harf);  // Read a single character

    for(int i = 0; cumle[i] != '\0'; i++) {
        if(cumle[i] == harf) {
            sayac++;
        }
    }

    printf("%c harfi sayısı: %d\n", harf, sayac);
    
    return 0;
}
