#ifndef _REZEPTSCHRITT_H_472
#define _REZEPTSCHRITT_H_472

#include <list>
#include <string>

/**
* @class RecipeStep
* @author Rober Köten
* @version 1.0
* @brief RecipeStep dient zum Setzen und Zurückgeben von Menge und Zutat
*
* RecipeStep besteht aus 2 Attributen Zutat und Menge.
* Diese können jeweils gesetzt werden und zurückgegeben werden.
*
*/

class RecipeStep {

/**
* Enthält 2 Attribute.
* Zutat als string und Menge als float.
*/
    std::string m_Zutat;
    float m_Menge;

public:

/**
* @brief Standardkonstruktor erstellt ein Objekt der Klasse RecipeStep.
*
*/
    RecipeStep(void);

/**
* @brief Destruktor zerstört ein Objekt der Klasse RecipeStep.
*
*/
    ~RecipeStep();

/**
* @brief getZutat gibt die Zutat zurück.
* @return Zutat als string.
*/
    std::string getZutat(void) const;

/**
* @brief getMenge gibt die Menge zurück.
* @return Menge als float.
*/
    float getMenge(void) const;

/**
* @brief setZutat setzt die Zutat.
* @param [in] m_Zut Zutat als string.
*/
    void setZutat(std::string m_Zut);


/**
* @brief setMenge setzt die Menge.
* @param [in] m_Meng Menge als float.
*/ 

    void setMenge(float m_Meng);
};
#endif
