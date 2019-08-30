#include "stdio.h"
int main(int argc, char const *argv[]) {
  //ciddi programlamaya giriş ilk proje hesap makinesi yazmak
  //while ile sonsuz döngüye sokuyorum
  while (1==1) {
    int ilk_sayi,ikinci_sayi,islem,sonuc;

    printf("BASİT HESAP MAKİNESİNE HOŞ GELDİNİZ, TOPLAMA İŞLEMİ İÇİN 1, ÇIKARMA İŞLEMİ İÇİN 2, ÇARPMA İŞLEMİ İÇİN 3, BÖLME İŞLEMİ İÇİN 4 Ü TUŞLAYINIZ : ");
    scanf("%d",&islem );
    printf("LÜTFEN İLK SAYİYİ GİRİNİZ : ");
    scanf("%d",&ilk_sayi );
    printf("LÜTFEN İKİNCİ SAYİYİ GİRİNİZ : ");
    scanf("%d",&ikinci_sayi );
    if (islem==1) {
      sonuc=ilk_sayi+ikinci_sayi;
      printf("%d\n",sonuc);
    }
    if (islem==2) {
      sonuc=ilk_sayi-ikinci_sayi;
      printf("%d\n",sonuc);
    }if (islem==3) {
      sonuc=ilk_sayi*ikinci_sayi;
      printf("%d\n",sonuc);
    }if (islem==4) {
      sonuc=ilk_sayi/ikinci_sayi;
      printf("%d\n",sonuc);
    }
  }
  return 0;
}
