//@(#) Observer.h
#ifndef OBSERVER_H_H
#define OBSERVER_H_H
/**
  * @class Observer
  *
  * @author sen,soner
  * @date 28.10.2018
  * @version 1.0
  * 
  * @brief Observer bietet eine Schnittstelle für andere Klassen an
  *
  * dient nur dazu damit andere Klasse die Update methode verwenden können
  *
  */
class Observer {

public:
/**
  * @brief eine Update Methode für andere Klassen 
  *
  *  Die Observer Klasse besitzt lediglich eine Update Funktion 
  *  die anderen Klassen zu verfügung stellt wird
  *  Die Klassen besitzen zwar die selbe Funktion jedoch wird sie
  *  meistens überschrieben bzw anders Implementiert
  */
    virtual void update() = 0;

};

#endif
