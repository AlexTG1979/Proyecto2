#ifndef FUNCION_H_INCLUDED
#define FUNCION_H_INCLUDED
#include <iostream>
#include "Hora.h"
using namespace std;

class Funcion
{
  private:
  string sFuncion;
  int iNumPelicula;
  Hora hHora;
  int iSala;

  public:
  Funcion();
  Funcion(string, int, Hora, int);
  string getFuncion();
  int getNumPelicula();
  Hora getHora();
  int getSala();
  void setFuncion(string);
  void setNumPelicula(int);
  void setHora(Hora);
  void setSala(int);
  void toString();
};

Funcion::Funcion()
{
  sFuncion = "N/A";
  iNumPelicula = -1;
  iSala = -1;
}

Funcion::Funcion (string sF, int iN, Hora hH, int iS)
{
  sFuncion = sF;
  iNumPelicula = iN;
  hHora = hH;
  iSala = iS;
}

string Funcion::getFuncion()
{
  return sFuncion;
}

int Funcion::getNumPelicula()
{
  return iNumPelicula;
}

Hora Funcion::getHora()
{
  return hHora;
}

int Funcion::getSala()
{
  return iSala;
}

void Funcion::setFuncion(string sF)
{
  sFuncion = sF;
}

void Funcion::setNumPelicula(int iN)
{
  iNumPelicula = iN;
}

void Funcion::setHora(Hora hH)
{
  hHora = hH;
}

void Funcion::setSala(int iS)
{
  iSala = iS;
}

void Funcion::toString()
{
  cout << "Clave de Función: " << sFuncion << endl;
  cout << "Número de Pelicula: " << iNumPelicula << endl;
  cout << "Horario de la Función: ";
  hHora.toString();
  cout << "Sala: " << iSala << endl;
}


#endif // FUNCION_H_INCLUDED
