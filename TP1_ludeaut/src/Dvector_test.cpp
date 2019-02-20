#include<cstdio>
#include "Dvector.cpp"

int main()
{
  Dvector(3, 2).display(std::cout);
  Dvector d = Dvector(5);
  d.fillRandomly();
  d.display(std::cout);
  // Dvector x(3.1); // pas de pb
  // Dvector x; x = Dvector(3, 1.); //pb affiche 0 1 1
  Dvector x = Dvector(3, 1.); // pas de pb : appel au constructeur avec valeurs
  // // puis au constructeur par copie pour l'affectation
  x.display(std::cout);
  Dvector y = Dvector("../tp1_test1.txt");
  y.display(std::cout);
}
