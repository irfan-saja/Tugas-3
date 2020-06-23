#include<iostream>
using namespace std;

void tukar(int *v1,int *v2){ //fungsi tukar nilai
    int c;  //penyimpanan sementara
    c=*v2;
    *v2=*v1;
    *v1=c;
    
}

int main(){
    int n1,n2;
    
    cout<<"a: ";
    cin>>n1;   //input nilai 1
    cout<<"b: ";
    cin>>n2;   //input nilai 2
    
    tukar(&n1,&n2); //memanggil fungsi dan mengirim alamat variabel

    cout<<"\na: "<<n1<<endl; //nilai variabel berubah
    cout<<"b: "<<n2;

    return 0;
}
