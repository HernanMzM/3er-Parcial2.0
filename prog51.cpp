#include <iostream>
#include <cstring>
using namespace std;

int main() {
char pass[12], name[20];
int co, i, precio, cantidad, total, co2,cot=0;
int users[20];
co=0;
co2 =0;
do {
co = co + 1;
cout << "usuario:\n";
cin >> name;
cout << "contraseña:\n";
cin >> pass;
if (strcmp(pass, "2b26") == 0 && strcmp(name, "Hernan") == 0) {
cout << "Bienvenido al sistema\n";
break;
}
if (co >= 3) {
cout << "Has excedido el número máximo de intentos\n";
return 0;
}
} while (co < 3);
cout<<"Ingrese 0 para pasar a otro usuario\n";
cout<<"Ingrese 1 para pasar ver la venta total del dia\n";
for(i=1; i=20; i++){
cout << "introduzca el precio del articulo\n";
cin>>precio;
if (precio < 0) {
cout << "ingrese un numero positivo\n";
continue;
}
if (precio == 0) {
cout<<"total parcial: $"<<co2;
co2=0;
cout<<"\nintroduzca el precio del articulo\n";
cin>>precio;
}
if(precio==1){
break;
}
cout << "introduzca la cantidad de unidades vendidas\n";
cin >> cantidad;
if (cantidad < 0) {
cout << "ingrese un numero positivo\n";
continue;
}
total = precio * cantidad;
co2 += total;
users[i]=co2;
cot=cot+co2;
}

cout << "El importe total es de " << cot << "\n";
return 0;
}