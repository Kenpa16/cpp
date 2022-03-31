


#include <iostream>
#include <ctime>
#include <cstdlib>


int input (int cant)
{
  if (cant == 1)
    {
      std::cout << "Presione \"Enter\" para lanzar el dado numero 1";
    }
  else
    {
      std::cout << "Presione \"Enter\" para lanzar el dado numero 2";
    }
  std::cin.ignore ();
}


int Lanzardado ()
{
	
  int ran;
  srand (time (0));
  ran = rand () % 6 + 1;
  std::cout << "El resultado del dado es " << ran << std::endl;

   system ("color 09");
  return ran;
}

int dado (int pdado, int sdado)
{
  std::cout << "Ha avanzado " << pdado + sdado << " recuadros " << std::endl;
  return pdado + sdado;
}



int main ()
{
  int total, primerdado, segundodado;

  input (1);
  primerdado = Lanzardado ();
  input (2);
  segundodado = Lanzardado ();
  total = dado(primerdado, segundodado);
  
  
  
  return 0;
  
  
  
}
