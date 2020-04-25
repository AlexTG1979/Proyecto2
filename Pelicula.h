#ifndef PELICULA_H_INCLUDED
#define PELICULA_H_INCLUDED
#include <iostream>
#include "Actor.h"
#include "Funcion.h"
using namespace std;

class Pelicula
{
  private:
  int iNumPelicula;
  string sTitulo;
  int iAnio;
  int iDuracion;
  string sGenero;
  int iCantidadActores;
  int iListaActores[10];

  public:
  Pelicula();
  int getNumPelicula();
  string getTitulo();
  int getAnio();
  int getDuracion();
  string getGenero();
  int getCantidadActores();
  int getActor(int);
  void setNumPelicula(int);
  void setTitulo(string);
  void setAnio(int);
  void setDuracion(int);
  void setGenero(string);
  bool addActor(int);
  void toString();
};

Pelicula::Pelicula()
{
  iNumPelicula = -1;
  sTitulo = "N/A";
  iAnio = -1;
  iDuracion = -1;
  sGenero = "N/A";
  iCantidadActores = 0;
}


int Pelicula::getNumPelicula()
{
  return iNumPelicula;
}

string Pelicula::getTitulo()
{
  return sTitulo;
}

int Pelicula::getAnio()
{
  return iAnio;
}

int Pelicula::getDuracion()
{
  return iDuracion;
}

string Pelicula::getGenero()
{
  return sGenero;
}

int Pelicula::getCantidadActores()
{
  return iCantidadActores;
}

int Pelicula::getActor(int iA)
{
  return iListaActores[iA];
}

void Pelicula::setNumPelicula(int iN)
{
  iNumPelicula = iN;
}

void Pelicula::setTitulo(string sT)
{
  sTitulo = sT;
}

void Pelicula::setAnio(int iA)
{
  iAnio = iA;
}

void Pelicula::setDuracion(int iD)
{
  iDuracion = iD;
}

void Pelicula::setGenero(string sG)
{
  sGenero = sG;
}

bool Pelicula::addActor(int iI)
{
  bool bValor = true;
  int iX = 0;
  if (iCantidadActores > 10)
  {
    return false;
  }
  else
  {
    while(iX == 10 && iListaActores[iX] != 0)
    {
      if(iListaActores[iX] == iI)
      {
        bValor = false;
      }
      iX++;
    }
    if(bValor == true)
    {
      iListaActores[iCantidadActores] = iI;
      iCantidadActores++;
      return true;
    }
    else
    {
      return false;
    }
  }
}

void Pelicula::toString()
{
  cout << "Número de Pelicula: " << iNumPelicula << endl;
  cout << "Título: " << sTitulo << endl;
  cout << "Año de lanzamiento: " << iAnio << endl;
  cout << "Duración de la Pelicula: " << iDuracion << endl;
  cout << "Género: " << sGenero << endl;
  cout << "Cantidad de actores: " << iCantidadActores << endl;
}


#endif // PELICULA_H_INCLUDED
