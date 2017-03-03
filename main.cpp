include <iostream>
#include <math.h>

using namespace std;
int static i=0;
long pow(int x,int n){
if(n==0){
    i++;
    return 1;
}
if(n==1){
    i++;
    return x;
}
if(n%2==0){
    i++;
    return pow(x*x,n/2);
}

else{
    i++;
    return pow(x*x,n/2)*x;
}

}


int main()
{
    long sonuc=pow(3,40);

    cout << "sonuc= " << sonuc << endl;
    cout<< "adim sayisi= "<<i<<endl;
    return 0;
}
