//@(#) Schuettler.h

#ifndef SCHUETTLER_H_H
#define SCHUETTLER_H_H

/**
* Verebt alle Attribute und Funktionen von InternalDevice.
*/
#include "InternalDevice.h"

/**
 * @class Schuettler
 * @author Rober K�ten
 * @version 1.0
 * @brief Schuettler 'sch�ttelt' die Zutaten
 *
 * Schuettler besteht aus einem leeren Konstrukor und
 * einer Funktion doIt, welche 'sch�ttelt' bzw. den �bergeben
 * Parameter als Zeit interpretiert und dementsprechend wartet (sleep).
 *
 */
class Schuettler : public InternalDevice {
public:

/**
* @brief Leerer Konstruktor der ein Schuettler Objekt von Klasse Schuettler erstellt.
*
*/
    Schuettler();

	
/**
* @brief doIt sch�ttelt die Zutaten
*
* @param [in] time ist ein float Wert
*
* Das Sch�tteln der Zutaten wird in der Funktion nur
* virtuell dargestellt, da die Funktion nur den �bergebenen Parameter
* als Timer interpretiert und dementsprechend wartet bzw. sleept.
*/
    void doIt(float time);


private:
};

#endif
