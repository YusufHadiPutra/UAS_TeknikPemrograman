#include <iostream>
using namespace std;
main (){ 

	
	cout<<"==============================="<<endl; 
	cout<<"======== Program Kasir ========"<<endl; 
	cout<<"==============================="<<endl;
	
long int menu, harga, pesanan;
cout<<"Menu Makanan"<<endl;
cout<<"1. Martabak 		Rp 20000"<<endl;
cout<<"2. Terang Bulan 	Rp 15000"<<endl;
cout<<"3. Roti Maryam		Rp 7000"<<endl;
cout<<"menu pilihan anda [1,2,3]=";
cin>>menu;
switch (menu)
{
  case 1:
   cout<<"pesanan anda= Maratabak"<<endl;
   harga = 20000;
  break;
  case 2:
   cout<<"pesanan anda= Terang Bulan"<<endl;
    harga = 15000;
  break;
  case 3:
   cout<<"pesanan anda= Roti Maryam"<<endl;
  harga = 7000;
  break;
   default:
  cout<< "tidak tersedia"<<endl;
}
cout<<"jumlah pesanan=";
cin>>pesanan;
cout<<"total yang harus dibayar="<<harga*pesanan;

}
