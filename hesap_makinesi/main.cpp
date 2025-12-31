#include<iostream>
using namespace std;

int main()
{
    int s1,s2,son=0;
    char islem;
    cout<<"Bir sayi giriniz: ";
    cin>>s1;
    cout<<"Bir sayi daha giriniz: ";
    cin>>s2;
    cout<<"Yapmak istediginiz islemi seciniz (+,-,*,/): ";
    cin>>islem;
    if(islem=='+')
    {
        son=s1+s2;
    }
    else if(islem=='-')
    {
        son=s1-s2;
    }
    else if(islem=='*')
    {
        son=s1*s2;
    }
    else if(islem=='/')
    {
        if(s2!=0)
        {
            son=s1/s2;
        }
        else
        {
            cout<<"Hata: Bir sayi sifira bolunemez."<<endl;
            return 1;
        }
    }
    else
    {
        cout<<"Gecersiz islem secimi."<<endl;
        return 1;
    }
    cout<<"Sonuc: "<<son<<endl;
    return 0;
}