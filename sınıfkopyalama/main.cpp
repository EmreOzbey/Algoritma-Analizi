#include <iostream>

using namespace std;

class myclass{
    int dizi[10];
    int index;
public:
    myclass(){
        index=0;
    }
    void add(int x);
    void print();

    myclass & operator=(myclass & x);
    int getDiziEleman(int i);
    int getIndex(){
        return index;
    };

};

void myclass::add(int x){
    myclass::dizi[index]=x;
    myclass::index++;

}

void myclass::print(){
    for(int i = 0; i < index; i++)
        cout << dizi[i] << " ";
    cout << endl;
}

int myclass::getDiziEleman(int x){
    return dizi[x];
}

myclass & myclass::operator=(myclass & x){
    for(int i=0; i< x.getIndex(); i++){
        this->add(x.getDiziEleman(i));
    }
}

int main()
{
    myclass a,b;

    a.add(5);
    a.add(10);
    a.add(20);
    a.add(30);
    b=a;

    b.print();

    cout << "KARMASIKLIK (STEP SAYISI) = " << "O(" << b.getIndex() << ") = O(n)" << endl;

    /* KARMASIKLIK O(n)*/
    return 0;
}
