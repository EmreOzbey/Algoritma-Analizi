#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sonuc=1;
    int i;
    printf("Sayi giriniz:\n");
    scanf("%d",&a);
    printf("Us giriniz:\n");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        sonuc=sonuc*a;

    }


    printf("\n%d\n",sonuc);
    printf("%d",b);
    return 0;
}
