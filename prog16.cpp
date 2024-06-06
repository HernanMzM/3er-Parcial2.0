#include <iostream>
using namespace std;
int main ()
{
    int n1,n2,n3,n4,n5;
    cout<<"introduzca 5 numeros enteros\n";
    cin>>n1>>n2>>n3>>n4>>n5;
    if(n1<n2 && n1<n3 && n1<n4 && n1<n5){
        cout<<"el numero menor es "<<n1;
    }else if(n2<n1 && n2<n3 && n2<n4 && n2<n5){
        cout<<"su numero menor es "<<n2;
    }else if (n3<n1 && n3<n2 && n3<n4 && n3<n5){
        cout<<"su numero menor es "<<n3;
    }else if(n4<n1 && n4<n2 && n4<n3 && n4<n5){
        cout<<"su numero menor es "<<n4;
    }else if (n5<n1 && n5<n2 && n5<n3 && n5<n4){
        cout<<"su numero menor es "<<n5;
    }
}