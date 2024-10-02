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
 * die verschiedenen Rezeptschritte durch und führt 
 * diese durch. 
 */
class CocktailZubereiter {
public:
	/**
	*@brief erzeugt den CocktailZubereiter
	*param[in] dv DeviceVerwalter. Pointer auf ein DeviceVerwalter-Objekt
	*
	* Diese Funktion setzt den Pointer auf das übergebene 
	* DeviceVerwalter-Objekt in der Klasse CocktailZubereiter
	*/
    CocktailZubereiter(DeviceVerwalter * dv);

	/**
	* @brief bereitet den Cocktail zu anhand der Rezeptschritte
	* @param[in] rzpt pointer auf ein Rezept
	* @return true wenn Funktion durchlaufen wurde
	*
	* Diese Funktion bekommt ein Rezept übergeben und 
	* überprüft wie viele Rezeptschritte der ausgewählte
	* Cocktail hat und führt diese dementsprechend durch.
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
