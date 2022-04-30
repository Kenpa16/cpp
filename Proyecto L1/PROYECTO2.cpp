




// PROGRAMA PARA CONTROL DE RESERVA DE ASIENTOS DE VUELO


#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <vector>
#include <string>



#define ENTER 13
#define BACKSPACE 8
#define INTENTOS 3

// CODIGOS
// Asiento vacio = 0
// Asiento reservado = 1
// Asiento confirmado = 2

using namespace std;

int main()

{
    vector<string> usuarios;
    vector<string> claves;

    // Se añaden usuarios al vector
    usuarios.push_back("kenneth");
    usuarios.push_back("bily");
    usuarios.push_back("mariela");
    usuarios.push_back("roque");
    usuarios.push_back("veronica");

    // Se añaden claves al vector
    claves.push_back("123");
    claves.push_back("456");
    claves.push_back("789");
    claves.push_back("abc");
    claves.push_back("efg");

    string usuario, password;

    int contador = 0;
    bool ingresa = false;

    do
    {
        system("cls");
        cout << "\t\t\tLOGIN DE USUARIO" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\t\tCONSTA DE 3 INTENTOS PARA INGRESAR AL SISTEMA" << endl;
        cout << "\n\tUsuario: ";
        getline(cin, usuario);

        char caracter;

        cout << "\tPassword: ";
        caracter = getch();

        password = "";

        while (caracter != ENTER)
        {

            if (caracter != BACKSPACE)
            {
                password.push_back(caracter);
                cout << "*";
            }
            else
            {
                if (password.length() > 0)
                {
                    cout << "\b \b";
                    password = password.substr(0, password.length() - 1);
                }
            }

            caracter = getch();
        }

        for (int i = 0; i < usuarios.size(); i++)
        {
            if (usuarios[i] == usuario && claves[i] == password)
            {
                ingresa = true;
                break;
            }
        }

        if (!ingresa)
        {
            cout << "\n\n\tEl usuario y/o password son incorrectos" << endl;
            cin.get();
            contador++;
        }

    } while (ingresa == false && contador < INTENTOS);

    if (ingresa == false)
    {
    	system("cls");
        cout << "\n\tUsted no pudo ingresar al sistema. QUE PASE UN BUEN DIA." << endl;
    }
    else
    {
    	system("cls");
        cout << "\n\n\tBIENVENIDO AL SISTEMA DE RESERVAS DE ASIENTOS DE VUELOS" << endl;
        {
 
  int av=0,c=0,asiento=0,m=0,av1[49],av2[49],av3[49],i;

  char opcion;

  for (i=0;i<49;i++)

  av1[i]=0;

  for (i=0;i<49;i++)

  av2[i]=0;

  for (i=0;i<49;i++)

  av3[i]=0;
  
  cout<<"\n ***************************************************";
  cout<<"\n *******TODOS LOS ASIENTOS ESTAN DISPONIBLES********";
  cout<<"\n ***************************************************";
  cout<<"\n";
  cout<<"\n \t Presione ENTER para continuar...";

  getch();

   do

    {  system("cls");

        cout<<"\n\n\t SELECCIONE UNA OPCION DEL MENU\n";

        cout<<"\n\n\t 1. Reservar\n";

        cout<<"\n\n\t 2. Confirmar Reserva\n";

        cout<<"\n\n\t 3. Cancelar Reserva\n";

        cout<<"\n\n\t 4. Estado del Avion\n";

        cout<<"\n\n\t 5. Salir\n";

        cout<<"\nIngrese el numero de la opcion: ";

        cin>>opcion;

        switch(opcion)

        {

        case '1':

             cout<<"\nDesea viajar en:" "\n 1. Avion (AVIANCA)" "\n 2. Avion (SPIRIT)" "\n 3. Avion (UNITED)" "\n \nEliJa el numero correspondiente del avion deseado: ";

             cin>>av;

             cout<<"\nEn que clase desea viajar: ""\n""1-Primera Clase""\n""2-Segunda Clase\n";

             cin>>c;

             if (c==1)

             {

               do {

               cout<<"\nIntroduzca un numero de asiento entre 0 y 14: ";

               cin>>asiento;

               if ((asiento<0)||(asiento>14))

               cout<<"\n DATO DE ASIENTO NO VÁLIDO....";

               } while ((asiento<0)||(asiento>14));

                   }

                   else

             {cout<<"Elija un asiento entre 15 y 49:";

              do {

               cout<<"\nIntroduzca el numero de asiento: ";

               cin>>asiento;

               if ((asiento<15)||(asiento>49))

               cout<<"\nDATO DE ASIENTO NO VÁLIDO....";

               } while ((asiento<15)||(asiento>49));

               }

               if (av==1)

             { if (av1[asiento]==0)

                   {av1[asiento]=1;

                   cout<<"\n\nSu operacion se realizo con exito...";

                   }

                else

               cout<<"\n\nEl asiento no esta disponible....";

              }

             if(av==2)

             { if (av2[av==2]==0)

                   {av2[asiento]=1;

                    cout<<"\n\nSu operacion se realizo con exito...";

                   }

               else

               cout<<"El asiento no esta disponible....";

             }

               if(av==3)

               { if (av3[av==3]==0)

                     {av3[asiento]=1;

                      cout<<"\n\nSu operacion se realizo con exito...";

                     }

                     else

               cout<<"El asiento no esta disponible....";

               }

             break;

        case '2':

             cout<<"\nPara confirmar su reserva:""\n""Ingrese el numero de avion que reservo:";

             cin>>av;

             cout<<"\nIngrese el numero de asiento:";

             cin>>asiento;

             if (av==1)

             { if (av1[asiento]==1)

                   {av1[asiento]=2;

                   cout<<"\n\nSu confirmacion se realizo con exito...";

                   }

                else

               cout<<"El asiento no ha sido reservado aun. Por favor reservelo antes....";

              }

             if(av==2)

             { if (av2[av==2]==1)

                   {av2[asiento]=2;

                    cout<<"\n\nSu confirmacion se realizo con exito...";

                   }

               else

               cout<<"El asiento no ha sido reservado aun. Por Favor reservelo antes....";

              }

               if(av==3)

               { if (av3[av==3]==1)

                     {av3[asiento]=2;

                       cout<<"\n\nSu confirmacion se realizo con exito...";

                     }

                     else

               cout<<"El asiento no ha sido reservado aun. Por Favor reservelo antes....";

               }

             break;

        case '3':

             cout<<"\nPara cancelar su reserva""\n""Ingrese El Numero De Avion En Que Reservo:";

             cin>>av;

             cout<<"\nIngrese El Numero De Asiento:";

             cin>>asiento;

             if (av==1)

             {if (av1[asiento]==0)

                  cout<<"\nEl asiento no ha sido reservado aun. Por Favor reservelo antes....";

                       {if (av1[asiento]==2)

                        cout<<"El asiento ya no se puede cancelar. Gracias....";

                        else

                        {if (av1[asiento]==1)

                             av1[asiento]=0;

                             cout<<"\nSu reserva ha sido cancelada.";

                        }

                        }

           }

             if(av==2)

             { if (av2[av==2]==2)

                   av2[asiento]=0;

               else

               cout<<"El asiento ya no se puede cancelar. Gracias....";

              }

               if(av==3)

               { if (av3[av==3]==2)

                     av3[asiento]=0;

                     else

               cout<<"El asiento ya no se puede cancelar. Gracias....";

               }

             break;

       case '4':

             cout<<"\nQue avion desea verificar \n1. Avion (AVIANCA), \n2. Avion (SPIRIT), \n3. Avion (UNITED) ";
			 cout<<"\nIngrese el numero de avion: ";
             cin>>av;

            cout<< "\nQue desea verificar:""\n""1-Reservas""\n""2-Reservas Confirmadas""\n""3-Asientos Vacios""\n""Elija La opcion a verificar: ";

             cin>>m;

             if ((av==1)&&(m==1))

             { cout<<"Los Asientos Reservados Son: \n";

                 for (i=0;i<=49;i++)

                 { if(av1[i]==1)

                    cout<<i<<"-"; }

             }

                else

              if ((av==1)&&(m==2))

             { cout<<"Los asientos confirmados son: \n";

                 for (i=0;i<=49;i++)

                 { if(av1[i]==2)

                    cout<<i<<"-"; }

             }

                else

              if ((av==1)&&(m==3))

             { cout<<"Los asientos vacios son: \n";

                 for (i=0;i<=49;i++)

                 { if(av1[i]==0)

                    cout<<i<<"-"; }

             }

               if ((av==2)&&(m==1))

             { cout<<"Los asientos reservados son: \n";

                 for (i=0;i<=49;i++)

                 { if(av2[i]==1)

                    cout<<i<<"-"; }

             }

                else

              if ((av==2)&&(m==2))

             { cout<<"Los asientos confirmados son: \n";

                 for (i=0;i<=49;i++)

                 { if(av2[i]==2)

                    cout<<i<<"-"; }

             }

                else

              if ((av==2)&&(m==3))

             { cout<<"Los asientos vacios son: \n";

                 for (i=0;i<=49;i++)

                 { if(av2[i]==0)

                    cout<<i<<"-"; }

             }



              if ((av==3)&&(m==1))

             { cout<<"Los asientos reservados son: \n";

                 for (i=0;i<=49;i++)

                 { if(av3[i]==1)

                    cout<<i<<"-"; }

             }

                else

              if ((av==3)&&(m==2))

             { cout<<"Los asientos confirmados son: \n";

                 for (i=0;i<=49;i++)

                 { if(av3[i]==2)

                    cout<<i<<"-"; }

             }

                else

              if ((av==3)&&(m==3))

             { cout<<"Los asientos vacios son: \n";

                 for (i=0;i<=49;i++)

                 { if(av3[i]==0)

                    cout<<i<<"-"; }

             }

              break;

        case '5':

             break;

        default:

                cout<<"\n  ";

        }

        getch();

  } while (opcion != '5');

        cout<<"\nHa decidido salir del menu...";

        getch();

        return 0;

}

    }

    cin.get();

    return 0;
}

