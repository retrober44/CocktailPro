//@(#) InternalDevice.h

#ifndef INTERNALDEVICE_H_H
#define INTERNALDEVICE_H_H

#include "Timer.h"

/**
 * @class InternalDevice
 * @author Albin Latifi
 * @version 1.0
 * @brief Parentklasse der verschiedenen Devices
 * 
 * Die InternalDevice-Klasse ist die Parentklasse der 
 * verschiedenen Devices. Sie setzt die Grundfunktionen
 * die jedes Device hat
 */
class InternalDevice {
public:
	/**
	* @brief erzeugung der Grundfunktion doIt()
	* @param[in] value Wert der dem Device übergeben wird
	*
	* Hier wird die Grundfunktion, die für das Durchführen
	* der einzelnen Devices benötigt wird, erzeugt.
	*/
    virtual void doIt(float value) = 0;


	/**
	* @brief Erzeugung der Grundfunktion putzen()
	*
	* Hier wird die Grundfunktion, die für das Putzen der
	* einzelnen Devices benötigt wird, erzeugt.
	*/
    void putzen();

private:
	/**
	* @brief Erzeugung der Grundfunktion setTimer()
	*
	* Hier wird die Grundfunktion, die den Timer in jeder Childrenklasse
	* setzt erzeugt. Sie ist dafür verantwortlich, dass sinnvolle Wartezeiten
	* zwischen den Schritten durchgeführt werden.
	*/
    void setTimer();


public:

	/**
	* Konstruktor der ein leeres InternalDevice-Objekt erstellt
	*/
    InternalDevice();
protected:

	/**
	* Zeit die das Device etwas durchführen soll
	*/
    int zeiteinheit;

	/**
	* gibt an ob das Device gerade etwas durchführt
	*/
    bool doinIt;

	/**
	* erzeugt ein Pointer auf ein Timer-Objekt
	*/
    Timer * myTimer;

};

#endif
