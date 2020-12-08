#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int j1, m1, d1, j2, td1, m2, d2, td2, j3, m3, d3, td3;

    cout<<"Masukan waktu awal : "<<endl;
    cout<<"Jam   = ";
    cin>>j1;
    cout<<"menit = ";
    cin>>m1;
    cout<<"detik = ";
    cin>>d1;
    cout<<endl;
    
    cout<<"Masukan waktu akhir : "<<endl;
    cout<<"Jam   = ";
    cin>>j2;
    cout<<"menit = ";
    cin>>m2;
    cout<<"detik = ";
    cin>>d2;
    cout<<endl;
    
    if ((d2-d1)<0)
{
    td1=(60+d2)-d1;
    }
else
    {
        td1=d2-d1;
    }
    if ((m2-m1)<0)
{
    td2=(60+m2)-m1;
    }
else
    {
        td2=m2-m1;
    }
    if ((j2-j1)<0)
{
    td3=(24+j2)-j1;
    }
else
    {
        td3=j2-j1;
    }
   
    cout<<"Perbedaan Waktu = "<<td3<<":"<<td2<<":"<<td1<<endl;
   
getch ();
}