#include <iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"ingrese dos numeros";
	scanf("%i%i",&num1,&num2);
	if(num1==num2){
		cout<<"los numeros son iguales";
	}
	else if(num1>num2)
	{
		cout<<num1<<" es mayor que "<<num2;
	}else{
		cout<<num1<<" es menor que "<<num2;
	}
}