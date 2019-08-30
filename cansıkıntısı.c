//can sıkıntısından yazılmış beyin yakan boş bir c projesi
#include "stdio.h"
int main(int argc, char const *argv[]) {
    int sayi1,sayi2,sayi3,sonuc;
    printf("LÜTFEN İLK SAYİYİ GİRİNİZ :" );
    scanf("%d",&sayi1 );
    printf("LÜTFEN İKİNCİ SAYİYİ GİRİNİZ : ");
    scanf("%d",&sayi2 );
    printf("LÜTFEN ÜÇÜNCÜ SAYİYİ GİRİNİZ : ");
    scanf("%d",&sayi3 );
    printf("GİRDİĞİNİZ SAYİLAR SİRASİYLA : %d , %d , %d ",sayi1,sayi2,sayi3 );
    if (sayi1>sayi2) {
      sonuc=sayi1;
    }
    else{
      sonuc=sayi2;
    }
    if (sayi3>sonuc) {
      printf("\nSONUÇ : %d\n",sayi3 );
    } else {
      printf("\nSONUÇ : %d\n",sonuc );
    }
  return 0;
}
