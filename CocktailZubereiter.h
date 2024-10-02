//@(#) CocktailZubereiter.h

#ifndef COCKTAILZUBEREITER_H_H
#define COCKTAILZUBEREITER_H_H



#include "Recipe.h"
#include "RecipeBook.h"
#include "DeviceVerwalter.h"

/**
 * @class CocktailZubereiter
 * @author Albin Latifi
 * @version 1.0
 * @brief bereitet den Cocktail nach den Rezeptschritten zu
 * 
 * Der CocktailZubereiter schaut bei jedem Cocktail
 * die verschiedenen Rezeptschritte durch und f�hrt 
 * diese durch. 
 */
class CocktailZubereiter {
public:
	/**
	*@brief erzeugt den CocktailZubereiter
	*param[in] dv DeviceVerwalter. Pointer auf ein DeviceVerwalter-Objekt
	*
	* Diese Funktion setzt den Pointer auf das �bergebene 
	* DeviceVerwalter-Objekt in der Klasse CocktailZubereiter
	*/
    CocktailZubereiter(DeviceVerwalter * dv);

	/**
	* @brief bereitet den Cocktail zu anhand der Rezeptschritte
	* @param[in] rzpt pointer auf ein Rezept
	* @return true wenn Funktion durchlaufen wurde
	*
	* Diese Funktion bekommt ein Rezept �bergeben und 
	* �berpr�ft wie viele Rezeptschritte der ausgew�hlte
	* Cocktail hat und f�hrt diese dementsprechend durch.
	* Zum Schluss wird das Device noch entleert und geputzt
	*/
    bool cocktailZubereiten(Recipe * rzpt);

private:

	/**
	* Pointer auf ein Objet der Klasse DeviceVerwalter
	*/
    DeviceVerwalter * myDeviceVerwalter;


};

#endif
