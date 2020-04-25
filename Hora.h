#ifndef HORA_H_INCLUDED
#define HORA_H_INCLUDED
#include <iostream>
using namespace std;

class Hora
{
  private:
  int iHH;
  int iMM;

  public:
  Hora();
  Hora(int, int);
  int getHH();
  int getMM();
  void setHH(int);
  void setMM(int);
  void toString();
  bool operator==(Hora);
};

Hora::Hora()
{
  iHH = 0;
  iMM = 0;
}

Hora::Hora(int iH, int iM)
{
  iHH = iH;
  iMM = iM;
}

int Hora::getHH()
{
  return iHH;
}

int Hora::getMM()
{
  return iMM;
}

void Hora::setHH(int iH)
{
  iHH = iH;
}

void Hora::setMM(int iM)
{
  iMM = iM;
}

void Hora::toString()
{
  if (iHH <= 9 && iMM <= 9) //ciclos para desplegar la hora, dependiendo de los dígitos ingresados
  {
    cout << "0" << iHH << ":0" << iMM << endl;
  }
  else if (iHH <= 9 && iMM >= 10)
  {
    cout << "0" << iHH << ":" << iMM << endl;
  }
  else if (iHH >= 10 && iMM <=9)
  {
    cout << iHH << ":0" << iMM << endl;
  }
  else if (iHH >= 10 && iMM >= 10)
  {
    cout << iHH << ":" << iMM << endl;
  }
}

bool Hora::operator==(Hora hH)
{
  if(iHH == hH.getHH() && iMM == hH.getMM()) //se compara la hora del atributo con la hora ingresada en el main
  {
    return true;
  }
  else
  {
    return false;
  }
}


#endif // HORA_H_INCLUDED
