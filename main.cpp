#include <iostream>
#include <fstream>
#include "Hora.h"
#include "Actor.h"
#include "Funcion.h"
#include "Pelicula.h"
using namespace std;

int main()
{
  Actor Actores[20];
  Funcion Funciones[20];
  Pelicula Peliculas[20];
  int iID;
  int iNumActor = 0;
  string sNombreActor;
  int iIDActor;
  int iNumeroPelicula;
  int iAnio;
  int iDuracion;
  string sGenero;
  int iCantidadActores;
  string sTitulo;
  int iPelicula = 0; 
  int iSala;
  int iHora;
  int iMinuto;
  string sClave;
  int iX; 
  char cOpcion;
  bool bValor;

  ifstream ifActores;
  ifstream ifPeliculas;

  ifActores.open("actores.txt");

  while(!ifActores.eof())
  {
    ifActores >> iID; 
    getline(ifActores, sNombreActor);
    Actores[iNumActor].setID(iID); 
    Actores[iNumActor].setNombre(sNombreActor);

    iNumActor++;
  }
  ifActores.close();

  ifPeliculas.open("peliculas.txt");

  while(!ifPeliculas.eof())
  {
    ifPeliculas >> iNumeroPelicula >> iAnio >> iDuracion >> sGenero >> iCantidadActores; 

    Peliculas[iPelicula].setNumPelicula(iNumeroPelicula); 
    Peliculas[iPelicula].setAnio(iAnio);
    Peliculas[iPelicula].setDuracion(iDuracion);
    Peliculas[iPelicula].setGenero(sGenero);

    for(iX = 0; iX < iCantidadActores; iX++) 
    {
      ifPeliculas >> iIDActor;
      Peliculas[iPelicula].addActor(iIDActor);
    }
    getline(ifPeliculas, sTitulo); 

    Peliculas[iPelicula].setTitulo(sTitulo);
    iPelicula++; 
  }
    ifPeliculas.close();
