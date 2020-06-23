#include <iostream>
using namespace std;

void fungsi(int *sum,int n){
	int input;
	for(int i=0;i<n;i++){
		cin>>input;   //input nilai kemudian menjumlahkan
		*sum+=input;
	}
}

int main(){
	int sum,n;
	cout<<"Jumlah bilangan:";
	cin>>n;	
	fungsi(&sum,n);  //memanggil fungsi 
	cout<<"Hasil Penjumlahan:"<<sum;  //nilai variabel sum berubah
	return 0;
}
