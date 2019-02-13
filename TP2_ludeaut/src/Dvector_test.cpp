#include<cstdio>
#include "Dvector.cpp"

int main()
{
  Dvector(3, 2).display(std::cout);
  Dvector d = Dvector(5);
  d.fillRandomly();
  d.display(std::cout);
  // Dvector x(3.1); // pas de pb
  Dvector x; x = Dvector(3, 1.); //pb affiche 0 1 1
  // par défaut sont en collision
  // Dvector x = Dvector(3, 1.); // pas de pb
  x.display(std::cout);
  printf("%f", x.element(0));
  // Dvector y = Dvector("../../tp1_test1.txt");
  // y.display();
}
