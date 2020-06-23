#include<iostream>
using namespace std;

int main(){
    int a,b,c,in;
    int dus[3][3]={{2,4,6},{8,10,12},{14,16,18}};
    int *pointer;
    
    pointer=&dus[0][0];  //mengassign pointer untuk menunjuk array
    
    
    cout<<"Jumlah dus= ";
    cin>>in;
    for(a=0;a<3;a++){  //loop utk mengakses array multidimensi
        for(int b=0;b<3;b++,c++){
            if(c<in){ //if sebagai pembatas
            cout<<*(pointer+(a*3)+b)<<" ";        //output nilai dus
            }
        }
    }
    c=0;
    for(a=0;a<3;a++){
        for(b=0;b<3;b++,c++){
            if (c<in){
            cout<<"\nNomor Dus "<<c+1<<"= "<<*(pointer+(a*3)+b);
            }                                            
        }        
    }
    return 0;    
}
