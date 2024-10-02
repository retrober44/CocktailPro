//@(#) Stampfer.h

#ifndef STAMPFER_H_H
#define STAMPFER_H_H

/**
* Verebt alle Attribute und Funktionen von InternalDevice.
*/
#include "InternalDevice.h"

/**
 * @class Stampfer
 * @author Rober Köten
 * @version 1.0
 * @brief Stampfer 'stampft' die Zutaten
 *
 * Stampfer besteht aus einem leeren Konstrukor und
 * einer Funktion doIt, welche 'stampft' bzw. den übergeben
 * Parameter als Zeit interpretiert und dementsprechend wartet (sleep).
 *
 */
class Stampfer : public InternalDevice {
public:

/**
* @brief Leerer Konstruktor der ein Stampfer Objekt von Klasse Stampfer erstellt.
*
*/
    Stampfer();


/**
* @brief doIt stampft die Zutaten
*
* @param [in] time ist ein float Wert
*
* Das Stampfen der Zutaten wird in der Funktion nur
* virtuell dargestellt, da die Funktion nur den übergebenen Parameter
* als Timer interpretiert und dementsprechend wartet bzw. sleept.
*/
    void doIt(float time);

private:
};

#endif
