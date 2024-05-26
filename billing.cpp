#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int tampil1()
{
	int pilihan, a;
	menu:
	cout<<"=========================================================="<<endl;
	cout<<"==  ********** Selamat Datang Di Amazing Net ********   =="<<endl;
	cout<<"==     ******** Menu Apa yang Anda Gunakan ********     =="<<endl;
	cout<<"=========================================================="<<endl;
	cout<<"== |1| Paket Game                                       =="<<endl;
	cout<<"== |2| Paket Personal (Per-Menit)                       =="<<endl;
	cout<<"== |3| Paket Malam (Paket Aktif Jam 21.00 s.d 04.00)    =="<<endl;
	cout<<"== |4| Paket Print                                      =="<<endl;
	cout<<"== |5| Tentang Warnet                                   =="<<endl;
	cout<<"=========================================================="<<endl;
	cout<<endl;
	do
	{
		cout<<"=========================================================="<<endl;
		cout<<"== Masukan Pilihan Anda [|1||2||3||4||5|] : ";cin>>pilihan;
		cout<<"=========================================================="<<endl;
		cout<<endl;
 
		switch(pilihan)
		{
			case 1:
			{
				int b,total;
				cout<<"=========================================================="<<endl;
				cout<<"==            *** Menggunakan Paket game ***            =="<<endl;
				cout<<"=========================================================="<<endl;
				cout<<"==  Masukkan Jam        : ";cin>>b;
				total=b*8000;
				cout<<"==  Anda Harus Membayar : Rp."<<total<<endl;
				cout<<"=========================================================="<<endl;
				cout<<endl;
				break;
			}
			case 2:
			{
				int c,total;
				cout<<"=========================================================="<<endl;
				cout<<"==          *** Menggunakan Paket Personal ***          =="<<endl;
				cout<<"=========================================================="<<endl;
				cout<<"==                 (Maksimal 60 Menit)                  =="<<endl;
				cout<<"==                                                      =="<<endl;
				cout<<"==  Masukkan Menit      : ";cin>>c;
				total=c*150;
				cout<<"==  Anda Harus Membayar : Rp."<<total<<endl;
				cout<<"=========================================================="<<endl;
				cout<<endl;
				break;
			}
			case 3:
			{
				int total;
				cout<<"=========================================================="<<endl;
				cout<<"==           *** Menggunakan Paket Malam ***            =="<<endl;
				cout<<"=========================================================="<<endl;
				cout<<"==           (Paket Aktif Jam 21.00 s.d 04.00)          =="<<endl;
				cout<<"==                                                      =="<<endl;
				total=18000;
				cout<<"==  Anda Harus Membayar : Rp."<<total<<endl;
				cout<<"=========================================================="<<endl;
				cout<<endl;
				break;
			}
			case 4:
			{
				int d,e,pilih,total;
				cout<<"=========================================================="<<endl;
				cout<<"==                     *** Print ***                    =="<<endl;
				cout<<"=========================================================="<<endl;
				cout<<"== |1| Print Hitam Putih                                =="<<endl;
				cout<<"== |2| Print Warna                                      =="<<endl;
				cout<<"=========================================================="<<endl;
				cout<<"== Masukan Pilihan Anda [|1||2|] : ";cin>>pilih;
				cout<<endl;
	
				if (pilih==1)
				{
					cout<<"=========================================================="<<endl;
					cout<<"==               *** Print Hitam Putih ***              =="<<endl;
					cout<<"=========================================================="<<endl;
					cout<<"==  Masukkan Jumlah Lembar : ";cin>>d;
					total=d*500;
					cout<<"==  Anda Harus Membayar    : Rp."<<total<<endl;
					cout<<"=========================================================="<<endl;
					cout<<endl;	
					break;
				}	
			
				else 
				{
					if (pilih==2)
					{
						cout<<"=========================================================="<<endl;
						cout<<"==                  *** Print Warna ***                 =="<<endl;
						cout<<"=========================================================="<<endl;
						cout<<"==  Masukkan Jumlah Lembar : ";cin>>e;
						total=e*1000;
						cout<<"==  Anda Harus Membayar    : Rp."<<total<<endl;
						cout<<"=========================================================="<<endl;
						cout<<endl;
					}
					else
					{
						cout<<"**********************************************************"<<endl;
						cout<<"* Pilihan yang anda Masukkan Salah, Silahkan Coba Lagi!! *"<<endl;
						cout<<"**********************************************************"<<endl;	
					}	
					break;
				}
			}
			case 5:
			{
				char data1[25] = {"Raihan Yusuf Sa'ari"}, data4[50] = {"JL. Pemuda Raya III No.89 RT08/12"}; 
				int data2 = {2019},data3 = {50};
				cout<<"=========================================================="<<endl;
				cout<<"==                *** Tentang Warnet ***                =="<<endl;
				cout<<"=========================================================="<<endl;
				cout<<"== Pemilik       = "<<data1<<endl;                             
				cout<<"== Tahun Berdiri = "<<data2<<endl;                            
				cout<<"== Jumlah PC     = "<<data3<<endl;                             
				cout<<"== Alamat        = "<<data4<<endl;                              
				cout<<"=========================================================="<<endl;
				cout<<endl;
				break;
			}		
		default:
		cout<<"**********************************************************"<<endl;
		cout<<"* Pilihan yang anda Masukkan Salah, Silahkan Coba Lagi!! *"<<endl;
		cout<<"**********************************************************"<<endl;
		cout<<endl;
		}		
	cout<<"=========================================================="<<endl;
	cout<<"==                ingin Masukkan Kembali??              =="<<endl;
	cout<<"==          >>[jika ya tekan 1, tidak tekan 0] : ";cin>>a;
	cout<<"=========================================================="<<endl;
	cout<<endl;
	if (a==1)
	{
		goto menu;
	}
	else 
		goto end;
	}
while(a==1);
end:
cout<<"=========================================================="<<endl;
cout<<"==        Terima Kasih Telah menggunakan Jasa kami      =="<<endl;
cout<<"==          Selamat datang kembali Di Amazing Net       =="<<endl;
cout<<"=========================================================="<<endl;
}
	
int main()
{
tampil1();
cout<<endl;
cin.get();
}