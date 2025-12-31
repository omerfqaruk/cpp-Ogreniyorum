#include<iostream>
using namespace std;

int main()
{
    int s1,s2,top=0,carp=1,fark=0,bol=1;
    cout<<"1. sayiyi giriniz: ";
    cin>>s1;
    cout<<"2. sayiyi giriniz: ";
    cin>>s2;
    top=s1+s2;
    carp=s1*s2;
    fark=s1-s2;
    if(s2!=0)
        bol=s1/s2;
    else
        cout<<"Bolme isleminde ikinci sayi sifir olamaz!"<<endl;
    cout<<"Toplama:     "<<top<<endl;
    cout<<"Carpma:      "<<carp<<endl;
    cout<<"Cikarma:     "<<fark<<endl;
    if(s2!=0)
        cout<<"Bolme:       "<<bol<<endl;
    return 0;
}