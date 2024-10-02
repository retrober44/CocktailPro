#ifndef _REZEPT_H_479
#define _REZEPT_H_479

/**
* Vererbt alle Funktionen und Attribute von RecipeStep.
*/
#include "RecipeStep.h"

#include <list>
#include <string>

/**
 * @class Recipe
 * @author Rober K�ten
 * @version 1.0
 * @brief Recipe 
 *
 *	
 *
 */
class Recipe {

/**
* Besteht aus einer Liste mit Attributen von RecipeStep, also Menge und Zutat und
* einem string mit einem Namen.
*
*/
    std::list<RecipeStep*> m_RecipeStep;
    std::string m_Name;

public:

/**
* @brief Standardkonstruktor erstellt ein Objekt der Klasse Recipe.
*
*/
    Recipe(void);

/**
* @brief Destruktor zerst�rt ein Objekt der Klasse Recipe.
*
*/
    ~Recipe();


/**
* @brief getNoOfRecipeSteps gibt die Gr��e der Liste m_RecipeStep zur�ck.
* @return Gr��e der Liste als integer.
*
*/
    int getNoOfRecipeSteps();



/**
* @brief getRecipeStep gibt einen Objekt von RecipeStep zur�ck.
* @param [in] i ist ein positiver integer-Wert und gibt an welches Objekt der Liste zur�ckgegeben werden soll.
* @return Objekt von RecipeStep wird zur�ckgeben.
*
* Zuerst wird �berpr�ft ob der Parameter i gr��er 0 ist, dann wird ein Iterator p erstellt der auf das i-te Element zeigt.
* Danach wird der Pointer der auf den Iterator zeigt (Adresse) zur�ckgegeben.
*
*/
    RecipeStep * getRecipeStep(unsigned int i);


/**
*@brief getName gibt den Namen zur�ck.
*@return string des Namens.
*
*/
    std::string getName(void) const;


/**
*@brief setName setzt den Namen.
*@param [in] Name Referenz des Namen als string.
*/
    void setName(const std::string& Name);

/**
*@brief appendStep dient zum Hinzuf�gen (Anh�ngen) der Attribute der RecipeStep.
*@param [in] z Zutat z als string.
*@param [in] m Menge als float.
*/
    void appendStep(std::string z, float m);


/**
*@brief browse gibt Name des Rezeptes aus und deren Zutaten.
*
*/
    void browse();

};

#endif
