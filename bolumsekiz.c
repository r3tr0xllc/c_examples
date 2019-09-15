//
// Created by r3tr0x on 15.09.2019.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){/*
    printf("\nbüyük sayıyı bulan program \n");
    int sayi1,sayi2,sayi3,sonuc;
    printf("\nLütfen ilk sayıyı giriniz : ");
    scanf("%d",&sayi1);
    printf("\nLütfen ikinci sayıyı giriniz : ");
    scanf("%d",&sayi2);
    printf("\nLütfen üçüncü sayıyı giriniz : ");
    scanf("%d",&sayi3);
    if (sayi1>sayi2){
        sonuc=sayi1;
    } else{
        sonuc=sayi2;
    }
    if (sayi3>sonuc){
        sonuc=sayi3;
        printf("\nbüyük sayi : %d\n",sonuc);
    } else {
        printf("\nbüyük sayi : %d\n", sonuc);
    }
    */
    //BANKA SİMÜLASYONU
    srand(time(NULL));//rastagele sayı üretimi için başlangıç sayısını zamana bağla
    float bakiye=(float) (rand()%2000);
    float cekilecek=0;
    printf("\nşu anki bakiyeniz : %.2f\n",bakiye);
    printf("\nlütfen çekmek istediğiniz miktarı giriniz : ");
    scanf("%f",&cekilecek);
    if (cekilecek<=bakiye){
        bakiye=bakiye-cekilecek;
        printf("\nçekilen para miktarı : %.2f",cekilecek);
        printf("\nkalan para miktarı : %.2f",bakiye);
    } else{
        printf("\nhesabınızda yeterli miktar bulunmamaktadır!");
    }
    printf("\nPROGRAM SONLANDI!\n");
}
