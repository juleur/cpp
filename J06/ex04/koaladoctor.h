#ifndef __KOALADOCTOR_H_
#define __KOALADOCTOR_H_

#include <iostream>
//class SickKoala;
//#include "sickkoala.h"
#include "koalanurse.h"

class KoalaDoctor
{
  std::string m_doctorName;

 public :
  KoalaDoctor(std::string name);
  ~KoalaDoctor();
  void diagnose(SickKoala *patient);
};

#endif