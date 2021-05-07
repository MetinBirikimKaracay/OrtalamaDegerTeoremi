#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int fonk, a,b,c,e,f;
    float ort;
int main()
{
    girdi();
    yazdir();
    hesapla();
}
    //Girdi Al
    int girdi(){
    printf("a Degeri Giriniz :");
    scanf("%d", &a);
    printf("b Degeri Giriniz :");
    scanf("%d", &b);
    printf("c Degeri Giriniz :");
    scanf("%d", &c);
    printf("e Degeri Giriniz :");
    scanf("%d", &e);
    printf("f Degeri Giriniz :");
    scanf("%d", &f);

    }
    //Fonksiyonu yazdir
    int yazdir(){

    printf("Girdiginiz Fonksiyon :  %d*x^2 + %d*x + %d", a,b,c);
    }

    //Fonksiyonu Hesapla
    int hesapla(){

    printf("\nTurev => %dx +%d", (2*a), b);

    ort = (((((a*pow(f,2) + b*f + c) - (a*pow(e,2) + b*e + c))/(f - e))-b)/ (2*a));

    if(ort - (int)ort == 0){
        printf("\nOrtalama Deger Teoremini Saglayan Nokta x = %d\n\n\n",(int)ort);
    }else {
        printf("\nOrtalama Deger Teoremini Saglayan Nokta x = %.0f/10\n\n\n",ort*10);
    }
}
