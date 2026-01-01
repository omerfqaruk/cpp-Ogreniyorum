#include<iostream>
using namespace std;

int main()
{
    int s,i=0;
    int sayi[32];

    cout<<"Bir sayi giriniz: ";
    cin>>s;

    while (s<0)
    {
        cout<<"Lütfen pozitif bir sayi giriniz: ";
        cin>>s;
    }

    do {//do-while nedeni 0 girildiğinde de binary karşılığını gösterebilmek içindir. İf bloğu da kullanılabilirdi.
        sayi[i] = s % 2;
        s = s / 2;
        i++;
    } while (s > 0);

    cout<<"Sayinin binary karsiligi: ";

    for (int j=i-1;j>=0;j--)
    {
        cout<<sayi[j];
    }
    return 0;
}