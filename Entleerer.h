//@(#) Entleerer.h

#ifndef ENTLEERER_H_H
#define ENTLEERER_H_H

#include <iostream>

#include "Observer.h"
#include "InternalDevice.h"
#include "Waage.h"
/**
 * @class Entleerer
 *
 * @author Sen,Soner
 * @date 28.10.2018
 * @version 1.0
 *
 * @brief Simuliert die Entleerung der Cocktail Maschine
 *
 * erbt von InternalDevice und Observer
 */
class Entleerer : public InternalDevice, public Observer {
    
public:
/**
  * @brief Die Waage wird in einen Vector des Observers hinzugefügt 
  *
  * @param (g)  Wie viel gramm pro Zeiteinheit entfernt wird
  * @param (ze) Die Zeiteinheit
  * @param (wg) Die Waage wird zugewiesen
  *
  */
    Entleerer(float g, int ze, Waage * wg);

    ~Entleerer();
/**
  * @brief 
 * 
  * Falls nicht gerade entleert wird, wird die Funktion übersprungen
  * Falls das angegebene Gewicht erreicht oder unterschritten wurde, 
  * wird der Entleerungsvorgang beendet und die Variable von der Funktion "doIt" wird Aktuallisiert
  */
    void update();
/**
  * @brief 
  * Die doIt Funktion gibt das Gesamtgewicht des Cocktails aus
  * Außerdem Informiert sie den Barkeeper wann der                       
  * Entleerungsvorgang beginnt und wann er endet
  * friert das Programm für eine gewisse Zeit ein
  *
  * @param [valueP] Signaliert auch anderen Funktionen dass der Entleerungsvorgang noch läuft    
  */
    void doIt(float valueP);

private:

    float grammProZeit;

    Waage * myWaage;

    float value;

};

#endif
