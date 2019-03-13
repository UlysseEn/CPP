#include<cstdio>
#include "Dvector.cpp"
#include "Height.cpp"

int main()
{
  Dvector(3, 2).display(std::cout);
  Dvector d = Dvector(3);
  d.fillRandomly();
  d.display(std::cout);
  printf("%f\n", d(1));
  // Dvector x(3.1); // pas de pb
  Dvector x; x = Dvector(3, 1.); //pas de pb
  // Dvector x = Dvector(3, 1.); // pas de pb
  x = x + 2.0;
  x.resize(5, 4);
  x.display(std::cout);
  // std::cin>>x;
  std::cout<<x;
  bool verif = x==d;
  std::cout<<(verif==1?"true":"false")<<"\n";
  Dvector y = Dvector("../tp1_test1.txt");
  y.display(std::cout);

  Height h(5, 4, x, x);
  h.display(std::cout);

}
