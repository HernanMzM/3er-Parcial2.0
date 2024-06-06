#include <iostream>
using namespace std;
int main()
{
	int hora;
	printf("introduzcala hora");
	cin>>hora;
	if(hora>4 && hora<12){
		cout<<"buenos dias";
	} else if (hora>12 && hora<19) {
		cout<<"buenas tardes";
	} else if (hora>19 && hora<24){
		cout<<"buenas noches";
	} else if(hora<4){
		cout<<"buenas noches";
	}else {
		cout<<"numero no valido";
	}
}


