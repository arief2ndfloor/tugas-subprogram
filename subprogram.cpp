#include <conio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void garis(){
	cout<<"***************************************\n";
}

int salary(int h){
	int Total;
    int Bayar=50000;
	cout<<"Harian : " ;cin>>h;
    Total = Bayar*h;
	cout<<"Total = "<<Total;
	return Total;
}

int Komisi (int l){
	int Total;
	int lembur=70000;
	cout<<"Lemburan : ";cin>>l;
	Total = lembur*l;
	cout<<"Total : "<<Total;
	return Total;
}

int menu(int pilih){
	int h,l;
	cout<<"\nMasukan pilihan : "; cin>>pilih;
	if(pilih=1){
		salary(h);
	}
	else if(pilih=2){
		Komisi(l);
	}
	else{
		cout<<"salah input\n";
		cout<<"Silakan input ulang";
		menu(pilih);
	}
	return pilih;
}

main(){
	int h,l,pilih;
	system("CLS");
	garis();
	cout<< "   PROGRAM DENGAN SUB PROGRAM FUNGSI\n";
	garis();
	
	cout<<"\n[1] Total salary\n";
	cout<<"[2] Komisi\n";
	
	menu (pilih);
	
	
	getch();
}