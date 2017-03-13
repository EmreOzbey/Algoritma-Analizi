#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
using namespace std;
int maxSubSum(int dizi[],int boyut)
{

    int maxSum=0;

    int i,j,k;
    for(i=0; i< boyut; i++)
    {

        for ( j=i; j<boyut; j++)
        {
            int thisSum=0;
            for( k=i; k<=j; k++)
            {
                thisSum += dizi[k];
            }
            if(thisSum > maxSum)
            {
                maxSum = thisSum;
            }
        }
    }
    return maxSum;
}

int main()
{
    int dizi[10000];
    int i,boyut=500;
    srand (time(NULL));
    for(i=0;i<boyut;i++)
    {
        dizi[i]=(rand()%200)-100;

    }

    cout<<"MAXSUM="<<maxSubSum(dizi,boyut)<<endl;
    return 0;
}
