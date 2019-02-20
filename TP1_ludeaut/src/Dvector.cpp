#include<iostream>
#include<fstream>
#include<limits>
#include<cstdio>
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

Dvector::Dvector(std::string fichier)
{
  std::ifstream f(fichier.c_str());
  if(f)
  {
    std::string line("");
    int lines = 0;
    while (std::getline(f, line))
    {
      ++lines;
    }
    sizeVect = lines;
    f.close();
    std::ifstream f(fichier.c_str());
    int i = 0;
    dVect = new double[sizeVect];
    while(std::getline(f, line))
    {
        dVect[i] = atof(line.c_str());
        i++;
    }
  }
  else
  {
    sizeVect = 0, dVect = new double[sizeVect];
  }
}

Dvector::~Dvector()
{
  delete [] dVect;
}


void Dvector::display(std::ostream& str)
{
    for(int i = 0 ; i < sizeVect ; i++) str<<dVect[i]<<"\n";
}

int Dvector::size()
{
    return sizeVect;
}

void Dvector::fillRandomly()
{
    srand(time(NULL));
    for(int i = 0 ; i < sizeVect ; i++) dVect[i] = rand()/(double)RAND_MAX;
}
