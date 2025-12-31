#include<iostream>
using namespace std;

int main()
{
    int s;
    cout<<"Lütfen bir sayı giriniz: ";
    cin>>s;
    bool asal=true;

    for (int i=2;i<=s/2;i++)
    {
        if (s%i==0)
            {
                asal=false;
                cout << s << " sayisi asal degildir." << endl;
                break;
            }
    }
    if (asal==true)
    {
        cout << s << " sayisi asaldir." << endl;
    }
    return 0;

}