
#include<iostream>

using namespace std;

int main (){
    int a=0;
    int b=0;
    int sum, rest, mult, div;

	cout<<"\n************************CALCULADORA************************ ";
    cout<<"\nEscriba un número= "; cin>>a;
    cout<<"Escriba otro número= "; cin>>b;

    sum = a+b;
    rest = a - b;
    mult = a * b;
    div = a / b;

    cout<<"\nLa suma total es: "<<sum<<endl;
    cout<<"\nLa resta total es: "<<rest<<endl;
    cout<<"\nLa multiplicacion total es: "<<mult<<endl;
    cout<<"\nLa division total es: "<<div<<endl;
    
    return 0;
    
}
