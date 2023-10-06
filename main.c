#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Urunun kodunu giriniz\n");
    printf("Kitap :0 \nTemel Gida :1 \nLuks :2\n:");
    int kod;
    scanf("%d",&kod);
    printf("Urunun fiyatini giriniz:");
    float fiyat;
    scanf("%f",&fiyat);
    float son_fiyat;
    switch(kod)
    {
    case 0:
        son_fiyat=fiyat*1.04;
        break;
    case 1:
        son_fiyat=fiyat*1.056;
        break;
    case 2:
        son_fiyat=fiyat*1.196;
        break;
    default:
        printf("Gecerli bir kod girilmedi.");
        return(1);
    }
    printf("Urunun son fiyati: %.3f",son_fiyat);
    return 0;
}
