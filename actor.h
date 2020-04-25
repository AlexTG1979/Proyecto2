#ifndef ACTOR_H_INCLUDED
#define ACTOR_H_INCLUDED
#include <iostream>
using namespace std;

class Actor
{
  private:
  int iID;
  string sNombre;

  public:
  Actor();
  Actor(int, string);
  int getID();
  string getNombre();
  void setID(int);
  void setNombre(string);
  void toString();
};

Actor::Actor()
{
  iID = -1;
  sNombre = "N/A";
}

Actor::Actor(int iI, string sN)
{
  iID = iI;
  sNombre = sN;
}

int Actor::getID()
{
  return iID;
}

string Actor::getNombre()
{
  return sNombre;
}

void Actor::setID(int iI)
{
  iID = iI;
}

void Actor::setNombre(string sN)
{
  sNombre = sN;
}

void Actor::toString()
{
  cout << "Actor: " << sNombre << endl;
  cout << "ID: " << iID << endl;
}


#endif // ACTOR_H_INCLUDED
