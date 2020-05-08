#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int boy;
    printf("lütfen boyunuzu cm cinsinden giriniz..\n");
    scanf("%d",&boy);
    if (boy < 155 ) {
        printf("Boyunuz ortalamaya gore kisadir :( ..\n");
        }
    else {
    printf("otalamaya gore uzun boylusunuz :)..\n ");
    }





    int kilo;
    printf("lütfen kilonuzu giriniz..\n");
    scanf("%d",&kilo);

    if (kilo<60){
        printf("kilonuz normal diyet programlarina ihtiyaciniz yok..\n");

    } else if(60<kilo && kilo<70){
    printf("balik etlisiniz biraz dikkat etmenizi tavsiye ediyoruz..\n");
    }
    else if(kilo>70){
            printf("kilonuz normalin ustunde lutfen dikkat ediniz..\n");

}  




        int sayi;
        printf("bir sayi giriniz..\n");
        scanf("%d ",&sayi);

        if (sayi % 16==0){

            printf("sayi onaltiya bolunebiliyor..");

        } else {
        printf("sayi onaltiya bolunemiyor..");
        }





        char cinsiyet;
        printf("lutfen cinsiyetinizi belirtiniz.. E/K..");
        scanf("%c",&cinsiyet);

        if (cinsiyet=='K'){
            printf("basvuru yapabilirsiniz..\n");
           }
           else if (cinsiyet=='E'){
            printf("uzgunuz basvurumuz sadece kadınlara yoneliktir..");
           }
           else {
            printf("cinsiyet belirtmeniz gerekmektedir..");
           }






           char cinsiyet;
           float kilo;
           float boy;

           printf("Lutfen cinsiyetinizi belirtiniz..E\K..\n");
           scanf("%c",&cinsiyet);

           printf("lutfen kilonuzu ve boyunuzu belirtiniz..\n");
           scanf("%f %f",&boy,&kilo);

           if ((cinsiyet=='K' || cinsiyet=='k') && boy>=155 && kilo<65){
            printf("Tebrikler,ideal olculere sahipsiniz..\n");
           }
            else if ((cinsiyet=='E' || cinsiyet=='e')&& boy>175 && kilo<90){
                printf("Tebrikler ideal olculere sahipsiniz..\n");
            }
            else {
                printf("Ideal olcunuze kavusmaniz icin spor yapmanizi tavsiye ederiz..\n");
            }

 return 0;
}
