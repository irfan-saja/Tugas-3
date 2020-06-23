#include<iostream>
using namespace std;

int main(){
	int a=100,*ptr1,**ptr2;
	
	
	ptr1=&a; //pointer menyimpan alamat variabel a
	ptr2=&ptr1;//pointer to pointer
	
	cout<<"Alamat variabel a: "<<ptr1;//output alamat a
	cout<<"\nptr1, nilai variabel a: "<<*ptr1;
	cout<<"\nptr2, nilai variabel a: "<<**ptr2;
	//ptr2 menunjuk alamat dari ptr1
	//**ptr2 mengambil nilai dari alamat yang tersimpan pada ptr1 
	return 0;
}
