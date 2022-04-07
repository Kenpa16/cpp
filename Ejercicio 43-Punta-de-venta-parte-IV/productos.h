



#include <iostream>
#include "productos.h"


using namespace std; 

void productos (int opcion)
{
	system ("cls");
	
	int opcionProducto=0;
	switch (opcion)
	{
	case 1:
	{
			cout <<"BEBIDAS CALIENTES"<<endl;
			cout <<"*****************"<<endl;
			cout <<"1- Capuccino"<<endl;
			cout <<"2- Expresso"<<endl;
			cout<<endl;
			
			cout<<"Ingrese una opcion: ";
			
			
			
			cin>>opcionProducto;
			
			
			switch (opcionProducto)
			{
			case 1:
				agregarProductos("1 Capuccino - L 40.00", 1, 40);
				break;
				
			case 2:
				agregarProductos("1 Expresso - L 30.00", 1, 30);
				break;
			default:
				{
				cout<<"Opcion no valida";
				return;
				break;
				}
			}
			
			cout<<endl;
			cout<<"Producto agregado"<<endl<<endl;
			system ("pause");
			
			
			break;
	}
	case 2:
	{
		cout <<"BEBIDAS FRIAS"<<endl;
		cout <<"*************"<<endl;
		cout <<"1- Coca cola"<<endl;
		cout <<"2- Pepsi "<<endl;
		cout <<"3- Seven up "<<endl;
		cout<<endl;
		
		cin>>opcionProducto;
			
			
			switch (opcionProducto)
			{
			case 1:
				agregarProductos("1 Coca Cola - L 20.00", 1, 20);
				break;
				
			case 2:
				agregarProductos("1 Seven Up - L 25.00", 1, 25);
				break;
				
			case 3:
				agregarProductos("1 Pepsi - L 30.00", 1, 30);
				break;
			default:
				{
				cout<<"Opcion no valida";
				return;
				break;
				}
			}
			
			cout<<endl;
			cout<<"Producto agregado"<<endl<<endl;
			system ("pause");
			
			
		break;
	}
	case 3:
	{
	
		cout <<"REPOSTERIA"<<endl;
		cout <<"**********"<<endl;
		cout <<"1- Pastel tres leches"<<endl;
		cout <<"2- Pastel Envinado"<<endl;
		cout <<"3- Tartaleta de pecanas"<<endl;
		cout<<endl;
		
		cin>>opcionProducto;
			
			
			switch (opcionProducto)
			{
			case 1:
				agregarProductos("1 Pastel tres leches - L 40.00", 1, 40);
				break;
				
			case 2:
				agregarProductos("1 Pastel envinado - L 45.00", 1, 45);
				break;
				
			case 3:
				agregarProductos("1 Tartaleta de pecanas - L 50.00", 1, 50);
				break;
			default:
				{
				cout<<"Opcion no valida";
				return;
				break;
				}

			}
				cout<<endl;
				cout<<"Producto agregado"<<endl<<endl;
				system ("pause");
		default:
		break;
	}

}

}
