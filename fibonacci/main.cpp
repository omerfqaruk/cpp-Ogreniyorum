#include<iostream>
using namespace std;

int main()
{
    int ilk=1,iki=1,son,s;
    cout<<"Bir sayi giriniz: ";
    cin>>s;
    while (s<=0)
    {
        cout<<"Lutfen pozitif bir sayi giriniz: ";
        cin>>s;
    }
    
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