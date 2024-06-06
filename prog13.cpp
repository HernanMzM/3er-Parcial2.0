#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"ingrese un numero\n";
	cin>>num;
	if(num%2==0)
	{
		cout<<"El numero es par\n";
		if(num%3==0){
			cout<<"su numero es multiplo de 3";
		}
	}else if(num%2==1)
	{
		cout<<"su numero es impar\n";
		if(num%3==0) {
			cout<<"su numero es multiplo de 3";
		}
	}
}