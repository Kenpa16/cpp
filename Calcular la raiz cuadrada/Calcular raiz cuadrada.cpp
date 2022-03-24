

#include <iostream>

#include <math.h>


using namespace std;


int main(int argc, char** argv) 
{
	int numero=0;
	float raiz=0;
	
	cout<<"**********************CALCULAR LA RAIZ CUADRADA*************************"<<endl;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	raiz=(sqrt(numero));
	
	cout<<"La raiz cuadrada de "<<numero<<" es: "<<raiz;
	
	return 0;
}
