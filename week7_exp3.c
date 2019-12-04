// sayýnýn palindrom olup olmadýðýný kontrol eden bir program yazýlacak
//recursive fonksiyonlar kullanýlacak
#include<stdio.h>
#include<stdlib.h>

int sayac=0;
int palindrom(char a[])
{
    int b=strlen(a);
    if(a[sayac]==a[b-sayac-1])
    {
        if(sayac==(b-sayac-1))
        {
            return printf("Palindromdur.\n");
        }
        else if(sayac>(b-sayac-1))
        {
            return printf("Palindromdur. \n");
        }
        sayac++;
        return palindrom(a);
    }
    else
        return printf("Palindrom degildir. \n");

}

int main(){
printf("Diziyi giriniz: \n");
char dizi[999];
gets(dizi);
palindrom(dizi);
}

