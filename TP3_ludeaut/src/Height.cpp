#include "Height.h"
#include "Dvector.h"

Height::Height()
{
  Lx = 0;
  Ly = 0;
  dVectX = Dvector();
  dVectY = Dvector();
}

Height::Height(int lx, int ly, Dvector dX, Dvector dY)
{
  try {
    Lx = lx;
    Ly = ly;
    if(dX.size()!=dY.size()) throw std::string("Les deux vecteurs doivent être de même taille !\n");
    for(int i=0; i < dX.size(); i++){
      if(dX(i) > Lx || dY(i) > Ly) throw std::string("Un point n'est pas dans la boîte !\n");
    }
    dVectX = dX;
    dVectY = dY;
  } catch(std::string const& chaine)
  {
    std::cerr << chaine;
  }
}

Height::Height(const Height &h)
{
  Lx = h.Lx;
  Ly = h.Ly;
  dVectX = h.dVectX;
  dVectY = h.dVectY;
}

Height::~Height()
{
}

Height& Height::operator=(const Height &h)
{
  Lx = h.Lx;
  Ly = h.Ly;
  dVectX = h.dVectX;
  dVectY = h.dVectY;

  return *this;
}

Height& Height::operator=(Height &&h)
{
  std::swap(Lx, h.Lx);
  std::swap(Ly, h.Ly);
  std::swap(dVectX, h.dVectX);
  std::swap(dVectY, h.dVectY);

  return *this;
}

void Height::display(std::ostream& str)
{
  str<<"Lx : "<<Lx<<" ";
  str<<"Ly : "<<Ly<<"\n";
  dVectX.display(str);
  dVectY.display(str);
}
