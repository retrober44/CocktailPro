//@(#) Dosierer.h

#ifndef DOSIERER_H_H
#define DOSIERER_H_H

#include <string>
#include <iostream>

#include "Observer.h"
#include "InternalDevice.h"
#include "Waage.h"

/**
* @class Dosierer
* @author Albin Latifi
* @version 1.0
* @brief managt das Dosierverhalten des Dosierers
* 
* Der Dosierer ist eine Unterklasse der Klasse InternalDevice.
* erzeugt einen Dosierer der anhand der Grammzahl, Zeit, Inhalt
* dosiert. Es wird die benötigte Zutat (bzw. Inhalt des Cocktails)
* jenach Gewicht der Zutat dosiert.
* vererbt alle Funktionen und Attribute der Klasse InternalDevice
*/
class Dosierer : public InternalDevice, public Observer {
public:

	/**
	* @brief Konstruktor der den Dosierer erzeugt
	* @param[in] g Grammzahl die dosiert werden soll
	* @param[in] ze Zeiteinheit des Dosiervorgans
	* @param[in] inhalt Inhalt des zu zubereitenden Cocktail
	* @param[in] wg Pointer auf ein Waage-Objekt
	*
	* Der Konstruktor des Dosierers erzeugt ein Dosiererobjekt
	* welches zum Dosieren der Zutaten, Inhalte benötigt wird
	*/
    Dosierer(float g, int ze, std::string inhalt, Waage * wg);

	/**
	* @brief prüft das Gewicht der Waage
	* 
	* Diese Funktion prüft ob der Dosierer grade dosiert
	* und startet jenachdem den Dosiervorgang
	* Falls das Deltagewicht größer oder gleich 
	* dem Gewicht ist, stoppt die Funktion
	* den Dosiervorgang.
	*/
    virtual void update();

	/**
	* @brief startet den Dosiervorgang
	* @param[in] gramm Grammzahl die dosiert werden soll
	*
	* Diese Funktion startet den Dosiervorgang. 
	* Die Ventile der einzelnen Zutaten(Inhalte) werden geöffnet.
	* Währenddessen wird die Waage aktualisiert und das Gewicht ändert sich.
	*/
    void doIt(float gramm);

	/**
	* @brief gibt Grammzahl zurück
	* gibt die Grammanzahl zurück, den der
	* den der Dosierer für eine bestimmte Zeit braucht
	* @return Grammzahl pro Zeit
	*/
    int getStueckProZeit();

private:

    float grammProZeit;
	/**
	*	ist ein Pointer auf ein Waage-Objekt
	*/
    Waage * myWaage;

	/*
	* Das Gewicht was dosiert werden soll
	*/
    float gwicht;

	/**
	* der Inhalt der in den Cocktails ist 
	*/
    std::string inhalt;
};

#endif
