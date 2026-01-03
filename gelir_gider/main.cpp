#include<iostream>
using namespace std;

int main()
{
    double gelir,kira,fatura,ulasim,yemek,market,eglence;
    cout<<"Aylık Gelirinizi Giriniz: ";
    cin>>gelir;
    cout<<"Aylık Kira Giderinizi Giriniz: ";
    cin>>kira;
    cout<<"Aylık Fatura Giderinizi Giriniz: ";
    cin>>fatura;
    cout<<"Günlük Ulasım Giderinizi Giriniz: ";
    cin>>ulasim;
    double ulasimh;
    cout<<"Haftada kaç gün yol masrafınız oluyor: ";
    cin>>ulasimh;
    ulasim=ulasim*ulasimh;
    cout<<"Haftalık Yemek Giderinizi Giriniz: ";
    cin>>yemek;
    cout<<"Haftalık Market Giderinizi Giriniz: ";
    cin>>market;
    cout<<"Aylık Eglence Giderinizi Giriniz: ";
    cin>>eglence;
    cout<<endl;
    cout<<endl;
    cout<<"---Gelir Gider Hesaplama Tablosu---"<<endl;
    cout<<"Aylık Geliriniz: "<<gelir<<endl;
    cout<<"-------- Aylık Giderleriniz -------"<<endl;
    cout<<"Kira:                    "<<kira<<endl;
    cout<<"Fatura:                  "<<fatura<<endl;
    cout<<"Ulasım:                  "<<ulasim*4<<endl;
    cout<<"Yemek:                   "<<yemek*4<<endl;
    cout<<"Market:                  "<<market*4<<endl;
    cout<<"Eğlence:                 "<<eglence<<endl;
    cout<<"-----------------------------------"<<endl;
    double toplam_gider=kira+fatura+(ulasim*4)+(yemek*4)+(market*4)+eglence;
    cout<<"Toplam Giderleriniz:     "<<toplam_gider<<endl;
    double net_gelir=gelir-toplam_gider;
    cout<<"Net Geliriniz:           "<<net_gelir<<endl;
    cout<<"-----------------------------------"<<endl;
    if (net_gelir>0)
    {
        cout<<"Tebrikler! Aylık Geliriniz Giderlerinizden Fazla."<<endl;
    }
    else if (net_gelir<0)
    {
        cout<<"Dikkat! Aylık Giderleriniz Gelirinizden Fazla."<<endl;
    }
    else
    {
        cout<<"Aylık Geliriniz ve Giderleriniz Eşit."<<endl;
    }
    return 0;
}