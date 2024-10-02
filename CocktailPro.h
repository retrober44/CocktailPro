//@(#) CocktailPro.h

#ifndef COCKTAILPRO_H_H
#define COCKTAILPRO_H_H

#include "DeviceVerwalter.h"
#include "VorhandeneZutaten.h"
#include "MischbaresRezeptbuch.h"
#include "CocktailZubereiter.h"


/**
* @class CocktailPro 
*
* @brief System für Restaurants zum automatisierten Zubereiten von Cocktails.
*
*	Dieses Programm simuliert die Hardware eines echten CocktailPro.
*
*/

class CocktailPro {
	/** 
	* erstellt ein Cocktailzubereiter-Objekt
	*/
    CocktailZubereiter * theCocktailZubereiter;

	/**
	* erstellt ein DeviceVerwalter-Objekt
	*/
    DeviceVerwalter * theDeviceVerwalter;

	/**
	* erstellt ein MischbaresRezeptbuch-Objekt
	*/
    MischbaresRezeptbuch * theMischbaresRezeptbuch;

	/**
	* erstellt ein VorhandeneZutaten-Objekt
	*/
    VorhandeneZutaten * theZutatenVerwalter;

protected:
	/**@brief return die Nummer eines Cocktails
	* @return return die Nummer des ausgewählten Cocktails
	*/
    int chooseCocktail();

	/**@brief Testet eine Demoversion von Cocktailpro
	* 
	* Zeigt das Mixen eines Caipirinha-Cocktails
	*/
    void demo();

public:
	/**@brief Konstruktor um ein CocktailPro Objekt anzulegen.
	* param[in] argc ist ein Integer um die Demo Version zu beschleunigen, turbo ist ein char Parameter um die Demoversion zu starten
	* Erstellt ein CocktailPro Objekt.
	*
	* Initialisiert und erstellt neue CocktailZubereiter,
	* DeviceVerwalter, MischbaresRezeptbuch und Vorhandene Zutaten.
	* Hat die möglichkeit eine Demo- oder Vollversion zu starten.
	*
	*/
    CocktailPro(int argc, char * * turbo);

};

#endif
