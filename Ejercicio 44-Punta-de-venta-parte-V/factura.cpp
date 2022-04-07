


#include <iostream>


using namespace std; 

double subtotal;
string listaProductos;

void agregarProductos(string descripcion, int cantidad, double precio)
{
	listaProductos = listaProductos + descripcion + '\n';
	subtotal = subtotal + (cantidad * precio);
	impuesto = subtotal * 0.15;
	total = subtotal* impuesto;
}


void imprimirFactura()
{
	system("cls");
	cout<<"********"<<endl;
	cout<<"FACTURA"<<endl;
	cout<<"********"<<endl;
	cout<<endl;
	
	
	cout<<"Productos: "<<endl;
	cout<<listaProductos;
	
	cout<<endl;
	cout<<"Subtotal: "<<subtotal;
	cout<<"Impuesto: "<<impuesto;
	cout<<"Total: "<<total;
	cout<<endl;
	cout<<endl;
	system ("pause");
}
