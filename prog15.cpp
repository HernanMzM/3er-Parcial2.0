#include <iostream>
using namespace std;
#define entrada 70
int main()
{
	int desc1,desc2,edad;
	cout<<"ingrese su edad\n";
	cin>>edad;
	if(edad<5){
		desc1=entrada-(entrada*.60);
		cout<<"el precio de la entrada para niños de menos de 5 años es de "<<desc1;
	}else if(edad>60){
		desc2=entrada-(entrada*.55);
		cout<<"el precio de la entrada para adultos mayores a 60 es de "<<desc2;
	}else {
		cout<<"el precio de la entrada es de "<<entrada;
	}

	
}