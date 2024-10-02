//@(#) VorhandeneZutaten.h

#ifndef VorhandeneZutaten_H_H
#define VorhandeneZutaten_H_H

#include <string>
#include <map>
#include <vector>
#include <list>
#include <fstream>
#include <cstdlib> // fuer exit() unter Linux
#include <iostream>

/**
 * @class VorhandeneZutaten
 *
 * @brief Liest Zutaten aus Liste ein.
 *
 * Merkt sich in der Liste die Zutaten + Aggregatszustand.
 * 	
 */
class VorhandeneZutaten {
public:

	/**@brief Konstruktor um ein VorhandeneZutaten Objekt anzulegen.
	*
	* Erstellt ein VorhandeneZutaten Objekt.
	*
	* Initialisiert zutaten und anzahlDosierer.
	*
	*/
    VorhandeneZutaten(void);

	/** @brief Destructor that deletes the VorhandeneZutaten
	*/
    virtual ~VorhandeneZutaten();

	/** @brief Zeigt alle verfuegbaren Zutaten im Menue
	*/
    void browse(void);

	/** @brief return ein Zutat
	* @return ein Zutat als string zurück
	* param [in] ein integer als Parameter für den i-ten Zutat
	*/
    std::string getZutat(int);

	/** @brief return die Anzahl der verfügbaren Zutaten
	* @return return die Anzahl der vorhanden Zutaten
	*/
    int getAnzahlVorhandeneZutaten();

private:

	/**
	* Hier werden alle vorhandenen Zutaten gespeichert und verwaltet
	*
	*/
    std::vector<std::string> * zutaten;

    static const bool DEBUG = false;

	/**@brief Zutat wird in Liste eingelesen
	* 
	* Wenn !DEBUG dann werden Dummys in die Liste gespeichert.
	* Bei True wird die ZutatenDateiEinlesen aufgerufen und die Liste
	* wird mit den Zutaten der txt Datei befüllt.
	*
	*/
    void zutatenEinlesen();

	/**@brief fuegt Dummys in die Liste ein falls !DEBUG
	* 
	*/
    void DummyZutatenEinfuegen();

	/**@brief Liest die Zutaten aus einer Datei
	* @param [in] Name der Datei wird als string übergeben
	*
	* Liest die Zutaten aus einer Datei und speichert
	* sie in einem vector.
	*
	*/
    virtual void ZutatenDateiEinlesen(std::string);

	/**@brief Mischen und Stampfen, etc hinzufuegen
	*
	*/
    void spezielleFaehigkeitenHinzufuegen();

	/**
	* anzahlt der benötigten Dosierer
	*/
    int anzahlDosierer;

};
/**
* Name der Datei, die Zutaten
*/
static std::string FileName;
#endif
