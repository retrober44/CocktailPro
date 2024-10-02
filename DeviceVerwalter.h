//@(#) DeviceVerwalter.h

#ifndef DEVICEVERWALTER_H_H
#define DEVICEVERWALTER_H_H

#include <string>
#include <map>

#include "InternalDevice.h"
#include "VorhandeneZutaten.h"
#include "Dosierer.h"
#include "Mixer.h"
#include "Stampfer.h"
#include "Schuettler.h"
#include "Entleerer.h"
#include "Waage.h"

/**
* @class DeviceVerwalter
* @author Albin Latifi
* @version 1.0
* @brief verwaltet die Devices
*
* Der DeviceVerwalter erstellt alle Devices,
* bereitet die Rezeptschritte zu, entleert
* und putzt die Devices 
*/
class DeviceVerwalter {
public:
	/**
	* @brief Konstruktor 
	* @param[in] ze Pointer auf ein Objekt der Klasse VorhandeneZutaten
	*
	* Diese Funktion erzeugt mehrere Devices
	* und speichert diese in eine Liste
	* Zudem prüft die Funktion um welche Zutat es 
	* sich handelt, und weist dem entsprechend
	* dem Dosierer, das passende Gewicht der Zutat zu.
	*/
    DeviceVerwalter(VorhandeneZutaten * ze);

	/**
	* @brief Zubereitung der Rezeptschritte
	* @param[in] zutat Zutat
	* @param[in] menge Menge der Zutat
	* 
	* Diese Funktion geht bei jedem Cocktail
	* die Schritte durch, und holt sich dementsprechend
	* die Zutaten
	*/
    void rezeptSchrittZubereiten(std::string zutat, float menge);

	/**
	* @brief entleert den Becher
	* @param[in] menge Menge die entleert werden soll
	* 
	* Dieser Funktion wird eine Menge übergeben
	* Diese Menge wird dann vom Becher entleert
	*/
    void entleeren(float menge);


	/**
	* @brief putzt die Devices
	*
	* Diese Funktion putzt die Devices,
	* die in myDevices gespeichert sind
	*/
    void putzen();

private:
	/**
	* @brief setzt den Übergeben ZutatenVerwalter
	*
	* Diese Funktion setzt den übergebenen Pointer
	* der Klasse Vorhandene Zutaten in der Klasse
	* DeviceVerwalter
	*/
    void setZutatenVerwalter(VorhandeneZutaten * ze);

    std::map<std::string, InternalDevice *> * myDevices;

	/**
	* Das ist ein Device um zu entleeren
	*/
    Entleerer * myEntleerer;

	/**
	* Das ist ein Device um zu mixen
	*/
    Mixer * myMixer;

	/**
	* Das ist ein Device um zu stampfen
	*/
    Stampfer * myStampfer;

	/**
	* Das ist ein Device um zu schuetteln
	*/
    Schuettler * mySchuettler;

	/**
	* Das ist ein Device um die Zutaten zu verwalten
	*/
    VorhandeneZutaten * myZutatenVerwalter;

	/**
	* Das ist ein Device um zu wiegen
	*/
    Waage * theWaage;

	/**
	* @brief erstellt die Devices 

	* Diese Funktion erstellt die Devices(z.B. Stampfer, Entleerer, etc...) und speichert
	* diese in einer Map MyDevices.
	* Zudem holt sich die Funktion die vorhandenen Zutaten,
	* prüft um welche Zutat es sich handelt
	* und setzt dementsprechend z.B. das Gewicht und Zeit der
	* einzelnen Zutat
	*/
    void createDevices();

};

#endif
