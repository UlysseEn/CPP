#include<iostream>
#include<fstream>
#include<limits>
#include<cstdio>
#include<cstring>
#include "Dvector.h"

Dvector::Dvector()
{
  sizeVect = 0;
  return ;
}

Dvector::Dvector(int s, double init)
{
  sizeVect = s;
  if(sizeVect == 0) return ;
  dVect = new double[sizeVect];
  for(int i = 0 ; i < sizeVect ; i++) dVect[i] = init;
}

Dvector::Dvector(const Dvector &d)
{
  sizeVect = d.sizeVect;
  if(sizeVect == 0) return ;
  dVect = new double[sizeVect];
  for(int i = 0 ; i < sizeVect ; i++) dVect[i] = d.dVect[i];

}

Dvector::Dvector(std::string str)
{
  std::ifstream f(str.c_str());
  if(f) sizeVect = 0, dVect = new double[sizeVect];
  else
  {
    std::string line;
    std::cout << "avant lecture\n";
    // int lines;
    // while ( f.ignore( std::numeric_limits<int>::max(), '\n' ) )
    // {
    //   ++lines;
    // }
    // std::cout << lines;
    while(std::getline(f, line))
    {
        std::cout << line << std::endl;
    }
    std::cout << "apres lecture\n";
  }
}

Dvector::~Dvector()
{
  delete [] dVect;
}

Dvector& Dvector::operator=(const Dvector &d)
{
  sizeVect = d.sizeVect;
  dVect = new double[sizeVect];
  memcpy(dVect, d.dVect, sizeVect*sizeof(double));

  return *this;
}

// Dvector& Dvector::operator=(Dvector &&d)
// {
//   // if()
//   return *this;
// }

void Dvector::display(std::ostream& str)
{
    for(int i = 0 ; i < sizeVect ; i++) str<<dVect[i]<<"\n";
}

int Dvector::size()
{
    return sizeVect;
}

double Dvector::element(const int &i)
{
    return dVect[i];
}

void Dvector::fillRandomly()
{
    srand(time(NULL));
    for(int i = 0 ; i < sizeVect ; i++) dVect[i] = rand()/(double)RAND_MAX;
}
