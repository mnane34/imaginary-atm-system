#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL,"Turkish");
string sepet_numara="0000000000000000"; // SEPET Hesap Numaras�
string sistem_numara="123456789012345"; // DO�RU Hesap Numaras�

unsigned long int  sepet_sifre=0; // SEPET ��FRE
unsigned long int  sistem_sifre=2580; // DO�RU Sistem Numaras�

unsigned long int mevcut_bakiye =0;
unsigned long int islem_bakiye  =0; 

int durum=-1;


/* Bizim Bilgilerimiz

Hesap Numaram�z = 123456789012345
�ifremiz = 2580

*/

	cout<<"ATM Uygulamas�na Ho�geldiniz."<<endl;
	cout<<"L�tfen Hesap Numaras�n� Ve �ifrenizi Giriniz ."<<endl;
		
	while(1)
	{
	cout<<"Girilen Hesap Numaras� : ";
	cin>>sepet_numara;
	cout<<"Girilen �ifre : ";
	cin>>sepet_sifre;
	
	if(sepet_numara == sistem_numara && sepet_sifre == sistem_sifre)
	{
cout<<endl<<endl<<endl;
cout<<"**** Bankam�za Ho�geldiniz Say�n Mertcan NANE **** "<<endl;		
while(1){
		
if(durum==-1){
	
	cout<<endl<<endl;
	cout<<"Bakiye Sorgulamak ��in #1 Tu�lay�n�z."<<endl;
	cout<<"Para Yat�rmak ��in #2 Tu�lay�n�z."<<endl;
	cout<<"Para �ekmek ��in #3 Tu�lay�n�z."<<endl;
	cout<<"��k�� ��lemi ��in #4 Tu�lay�n�z."<<endl;
	cout<<endl<<endl;
	cout<<"Yap�lmak �stenen ��lem :#";	
	cin>>durum;
	}

	
else if(durum==1)
	{
		cout<<"Mevcut Bakiyeniz : ";
		cout<<mevcut_bakiye;
		cout<<endl<<endl;
		durum=-1;
	}
	
else if(durum==2)
	{
		cout<<"L�tfen Yat�raca��n�z Miktar� Giriniz."<<endl;
		cout<<"Girilen Miktar : ";
		cin>>islem_bakiye;
		
		mevcut_bakiye=mevcut_bakiye+islem_bakiye;		
		islem_bakiye=0;
		cout<<"��lem Onayland�."<<endl;
		cout<<"Mevcut Bakiyeniz : ";
		cout<<mevcut_bakiye;
		cout<<endl<<endl;
		durum=-1;				
	}
	
else  if(durum==3)
	{
	cout<<"L�tfen �ekece�iniz Miktar� Giriniz."<<endl;
	cout<<"Girilen Miktar : ";
	cin>>islem_bakiye;
	
	
		if(mevcut_bakiye>=islem_bakiye)
	{
	mevcut_bakiye=mevcut_bakiye-islem_bakiye;
	islem_bakiye=0;
	cout<<"��lem Onayland�."<<endl;
	cout<<"Mevcut Bakiyeniz : ";
	cout<<mevcut_bakiye;
	}
	
	else
	{
			
	cout<<"�stenilen Miktar Mevcut De�ildir."<<endl;
	cout<<"Mevcut Bakiyeniz : ";
	cout<<mevcut_bakiye;
			
	}	
	cout<<endl<<endl;
	durum=-1;		
	}
	
else  if(durum==4)
	{
		cout<<endl<<endl;
		cout<<"�yi G�nler Dileriz Say�n Mertcan NANE ";
		cout<<endl<<endl<<endl<<endl;
		durum=-1;
		break;	
	}
	
	else 
	{
	cout<<"Hatal� ��lem L�tfen Yeniden Deneyiniz. "<<endl;
	durum=-1;
	cout<<endl<<endl;	
	}	
}	
	}
	
		if(sepet_numara != sistem_numara && sepet_sifre == sistem_sifre)
	{	
	cout<<"Girilen Bilgiler Uyumlu De�ildir."<<endl;
	cout<<"Yeniden Denemek ��in Bir Tu�a Bas�n�z.";
	system("PAUSE");
	cout<<endl<<endl;
	continue;
	}	

	if(sepet_numara == sistem_numara && sepet_sifre != sistem_sifre)
	{	
	cout<<"Girilen Bilgiler Uyumlu De�ildir."<<endl;
	cout<<"Yeniden Denemek ��in Bir Tu�a Bas�n�z.";
	system("PAUSE");
	cout<<endl<<endl;
	continue;
	}
	
		if(sepet_numara != sistem_numara && sepet_sifre != sistem_sifre)
	{	
	cout<<"Girilen Bilgiler Uyumlu De�ildir."<<endl;
	cout<<"Yeniden Denemek ��in Bir Tu�a Bas�n�z.";
	system("PAUSE");
	cout<<endl<<endl;
	continue;
  }		
 }		
}
