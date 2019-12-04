    #include <stdio.h>
    #include <stdlib.h>

    int us(int sayi, int ussu);

    int main(){
        int a,b,sonuc;
        printf("\nTaban = ");
        scanf("%d",&a);
        printf("\nUs = ");
        scanf("%d",&b);
        sonuc = us(a,b);
        printf("\nUssu = %d\n",sonuc);
        return 0;
    }

    int us(int sayi, int ussu){
       int sonuc=1;
       int i;
       for(i = 0; i < ussu; i++)
          sonuc *= sayi;
       return(sonuc);
    }
