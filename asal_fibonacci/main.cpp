#include<iostream>
using namespace std;


int main()
{
    int ilk=1,iki=1,son,s;
    cout<<"Bir sayı giriniz: ";
    cin>>s;
    while (s<=2)
    {
        cout<<"Lütfen 2'den büyük pozitif bir sayı giriniz: ";
        cin>>s;
    }
    for (int i=2; i<s/2;i++)
    {
        if(s%2==0)
        {
            cout<<s<<" sayisi asal degildir."<<endl;
            return 0;
        }
    }
    cout<<s<<" sayisi asaldir."<<endl;
    cout<<"Fibonacci serisi: ";

    if(s >= 1) cout << ilk << " ";//Yapay zekadan yardım aldım burası için.
    if(s >= 2) cout << iki << "";//Burasını ekledim ki kullanıcı 1 veya 2 girerse doğru çıktı versin.

    for (int i = 2; i < s; i++)
    {
        son=ilk+iki;
        cout<<" "<<son;
        ilk=iki;
        iki=son;
    }
    cout<<endl;
    return 0;
}