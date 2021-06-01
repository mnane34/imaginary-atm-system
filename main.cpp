#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL,"Turkish");
string sepet_numara="0000000000000000"; // SEPET Hesap Numarasý
string sistem_numara="123456789012345"; // DOÐRU Hesap Numarasý

unsigned long int  sepet_sifre=0; // SEPET ÞÝFRE
unsigned long int  sistem_sifre=2580; // DOÐRU Sistem Numarasý

unsigned long int mevcut_bakiye =0;
unsigned long int islem_bakiye  =0; 

int durum=-1;


/* Bizim Bilgilerimiz

Hesap Numaramýz = 123456789012345
Þifremiz = 2580

*/

	cout<<"ATM Uygulamasýna Hoþgeldiniz."<<endl;
	cout<<"Lütfen Hesap Numarasýný Ve Þifrenizi Giriniz ."<<endl;
		
	while(1)
	{
	cout<<"Girilen Hesap Numarasý : ";
	cin>>sepet_numara;
	cout<<"Girilen Þifre : ";
	cin>>sepet_sifre;
	
	if(sepet_numara == sistem_numara && sepet_sifre == sistem_sifre)
	{
cout<<endl<<endl<<endl;
cout<<"**** Bankamýza Hoþgeldiniz Sayýn Mertcan NANE **** "<<endl;		
while(1){
		
if(durum==-1){
	
	cout<<endl<<endl;
	cout<<"Bakiye Sorgulamak Ýçin #1 Tuþlayýnýz."<<endl;
	cout<<"Para Yatýrmak Ýçin #2 Tuþlayýnýz."<<endl;
	cout<<"Para Çekmek Ýçin #3 Tuþlayýnýz."<<endl;
	cout<<"Çýkýþ Ýþlemi Ýçin #4 Tuþlayýnýz."<<endl;
	cout<<endl<<endl;
	cout<<"Yapýlmak Ýstenen Ýþlem :#";	
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
		cout<<"Lütfen Yatýracaðýnýz Miktarý Giriniz."<<endl;
		cout<<"Girilen Miktar : ";
		cin>>islem_bakiye;
		
		mevcut_bakiye=mevcut_bakiye+islem_bakiye;		
		islem_bakiye=0;
		cout<<"Ýþlem Onaylandý."<<endl;
		cout<<"Mevcut Bakiyeniz : ";
		cout<<mevcut_bakiye;
		cout<<endl<<endl;
		durum=-1;				
	}
	
else  if(durum==3)
	{
	cout<<"Lütfen Çekeceðiniz Miktarý Giriniz."<<endl;
	cout<<"Girilen Miktar : ";
	cin>>islem_bakiye;
	
	
		if(mevcut_bakiye>=islem_bakiye)
	{
	mevcut_bakiye=mevcut_bakiye-islem_bakiye;
	islem_bakiye=0;
	cout<<"Ýþlem Onaylandý."<<endl;
	cout<<"Mevcut Bakiyeniz : ";
	cout<<mevcut_bakiye;
	}
	
	else
	{
			
	cout<<"Ýstenilen Miktar Mevcut Deðildir."<<endl;
	cout<<"Mevcut Bakiyeniz : ";
	cout<<mevcut_bakiye;
			
	}	
	cout<<endl<<endl;
	durum=-1;		
	}
	
else  if(durum==4)
	{
		cout<<endl<<endl;
		cout<<"Ýyi Günler Dileriz Sayýn Mertcan NANE ";
		cout<<endl<<endl<<endl<<endl;
		durum=-1;
		break;	
	}
	
	else 
	{
	cout<<"Hatalý Ýþlem Lütfen Yeniden Deneyiniz. "<<endl;
	durum=-1;
	cout<<endl<<endl;	
	}	
}	
	}
	
		if(sepet_numara != sistem_numara && sepet_sifre == sistem_sifre)
	{	
	cout<<"Girilen Bilgiler Uyumlu Deðildir."<<endl;
	cout<<"Yeniden Denemek Ýçin Bir Tuþa Basýnýz.";
	system("PAUSE");
	cout<<endl<<endl;
	continue;
	}	

	if(sepet_numara == sistem_numara && sepet_sifre != sistem_sifre)
	{	
	cout<<"Girilen Bilgiler Uyumlu Deðildir."<<endl;
	cout<<"Yeniden Denemek Ýçin Bir Tuþa Basýnýz.";
	system("PAUSE");
	cout<<endl<<endl;
	continue;
	}
	
		if(sepet_numara != sistem_numara && sepet_sifre != sistem_sifre)
	{	
	cout<<"Girilen Bilgiler Uyumlu Deðildir."<<endl;
	cout<<"Yeniden Denemek Ýçin Bir Tuþa Basýnýz.";
	system("PAUSE");
	cout<<endl<<endl;
	continue;
  }		
 }		
}
