#include<iostream>
using namespace std;

int main()
{
    int s;
    cout<<"Lütfen bir sayı giriniz: ";
    cin>>s;
    bool asal=true;

    if (s<=1)
    {
        asal=false;
        cout<<s<<" sayısı asal değildir;
    }

    for (int i=2;i<=s/2;i++)
    {
        if (s%i==0)
            {
                asal=false;
                cout << s << " sayısı asal değildir." << endl;
                break;
            }
    }
    if (asal==true)
    {
        cout << s << " sayısı asaldır." << endl;
    }
    return 0;

}
