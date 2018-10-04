#include <iostream>
using namespace std;
int main(){
float n, angka[5], total=0, rata;
cout<<"-_-_-_- MENCARI RATA-RATA BILANGAN -_-_-_-";
cout<<endl;
cout<<"\nMASUKAN BANYAK BILANGAN = ";cin>>n;
cout<<endl;
for (int i=1; i<=n; i++){
cout<<"Masukan angka ke"<<i<<" : ";cin>>angka[i];
total+=angka[i];
}
cout<<"\n-----TOTAL NILAI----- = "<<total<<endl;
rata=total/n;
cout<<"\n-----NILAI RATA-RATA----- = "<<rata;
}


