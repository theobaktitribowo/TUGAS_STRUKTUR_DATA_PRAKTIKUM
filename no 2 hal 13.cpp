#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
	int i, n;
	float angka[90],total,totalpangkat,angkapangkat[i],x;
	
	cout << "*_*_*_* PROGRAM MENGHITUNG STANDAR DEVIASI DARI SEJUMLAH ANGKA YANG DIMASUKAN *_*_*_*"<<endl;
	cout << "\nMASUKAN ANGKA YANG INGIN DI MASUKAN = ";cin>>n;
	for (i=0; i<n; i++)
	{
		cout << "Masukkan angka ke-" << i+1 << " : ";cin>>angka[i];
		total = total+angka[i];
		angkapangkat[i]=pow(angka[i],2);
		totalpangkat = totalpangkat+angkapangkat[i];
	}
	x = pow(total,2);
	cout << "\n*_*_*_* STANDAR DEVISI DARI ANGKA YANG DIMASUKAN ADALAH *_*_*_* = " << sqrt((n*totalpangkat-x)/(n*(n-1)))<< endl;
	return 0;
}

