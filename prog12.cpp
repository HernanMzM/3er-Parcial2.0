#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"ingrese dos numeros";
	cin>>num1>>num2;
	if(num1%num2==0)
	{
		cout<<num1<<" se puede dividir entre "<<num2<<" y el residuo es 0";
	}else{
		cout<<num1<<" no se puede dividir sobre "<<num2;
	}
}