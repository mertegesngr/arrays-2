#include <stdio.h> // Gerekli kütüphane tanımlanıyor

int main() { // Ana fonksiyon başlıyor
    int x; // Kullanıcının gireceği karakter sayısını tutacak değişken tanımlanıyor

    // Kullanıcıdan kaç karakter gireceğini alıyoruz
    printf("Kaç karakter gireceksiniz: ");
    scanf("%d", &x);

    // Kullanıcıdan gelen yeni satır karakterini temizlemek için getchar() kullanılıyor
    getchar();

    char a[x + 1]; // Kullanıcıdan alınacak karakterleri tutacak dizi tanımlanıyor (null terminator için +1)

    // Kullanıcıdan cümleyi girmesi isteniyor
    printf("Cümleyi giriniz: ");
    gets(a); // Kullanıcının girdiği cümle alınarak a dizisine kaydediliyor

    int bHarfsayac = 0; // Büyük harf sayısını tutacak sayaç değişkeni tanımlanıyor ve 0'a eşitleniyor
    int kHarfsayac = 0; // Küçük harf sayısını tutacak sayaç değişkeni tanımlanıyor ve 0'a eşitleniyor
    int ozelkarsayac = 0; // Özel karakter sayısını tutacak sayaç değişkeni tanımlanıyor ve 0'a eşitleniyor
    int sayiSayac = 0; // Sayı karakterlerinin sayısını tutacak sayaç değişkeni tanımlanıyor ve 0'a eşitleniyor
    int boslukSayac = 0; // Boşluk karakterlerinin sayısını tutacak sayaç değişkeni tanımlanıyor ve 0'a eşitleniyor

    // Dizideki karakterleri kontrol etmek için döngü başlatılıyor
    for (int i = 0; i < x; i++) {
        // Eğer karakter null ('\0') ise, döngüden çıkılıyor
        if (a[i] == '\0') {
            break;
        }
        // Eğer karakter büyük harf ise, sayaç artırılıyor
        if (a[i] <= 'Z' && a[i] >= 'A') {
            bHarfsayac++;
        }
        // Eğer karakter küçük harf ise, sayaç artırılıyor
        else if (a[i] <= 'z' && a[i] >= 'a') {
            kHarfsayac++;
        }
        // Eğer karakter sayı ise, sayaç artırılıyor
        else if (a[i] <= '9' && a[i] >= '0') {
            sayiSayac++;
        }
        // Eğer karakter boşluk ise, sayaç artırılıyor
        else if (a[i] == ' ') {
            boslukSayac++;
        }
        // Eğer karakter özel bir karakter ise, sayaç artırılıyor
        else {
            ozelkarsayac++;
        }
    }

    // Büyük harf, küçük harf, sayı, boşluk ve özel karakter sayıları ekrana yazdırılıyor
    printf("Büyük harf sayısı: %d\n", bHarfsayac);
    printf("Küçük harf sayısı: %d\n", kHarfsayac);
    printf("Sayı karakterlerinin sayısı: %d\n", sayiSayac);
    printf("Boşluk karakterlerinin sayısı: %d\n", boslukSayac);
    printf("Özel karakter sayısı: %d\n", ozelkarsayac);

    return 0; // Ana fonksiyon başarıyla sonlandırılıyor
}
