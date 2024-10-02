//@(#) Waage.h

#ifndef WAAGE_H_H
#define WAAGE_H_H

/**
* Vererbt alle Funktionen und Attribute von der Klasse Subject
*/
#include "Subject.h"

/**
 * @class Waage
 * @author Rober K�ten
 * @version 1.0
 * @brief Waage managt (�ndert) die Gewichte der Waage-Klasse
 *
 *  Waage hat 2 Gewichte als integer. Sie kann beide interger-Werte zur�ckgeben.
 *	Sowie den Tara-Wert setzen und zur�ckgeben.
 *	Sie kann ebenfalls mit einem �bergebenem Parameter das Gewicht �ndern.
 *
 */
class Waage : public Subject {

public:
    
    
    /**
     * @brief Leerer Konstruktor
     */
    Waage();
    

    

/**
 * @brief changeWeight �ndert weight oder deltaweight
 * @param [in] v ist ein interger-Wert zum �ndern des Gewichts.
 *
 * Addiert v auf weight dazu. Wenn weight unter 0 ist, wird weight auf 0 gesetzt und 
 * v auf deltaweight addiert. 
 *
 */
    void changeWeight(int v);


/**
* @brief tara setzt und gibt den tara-Wert zur�ck
* @return gibt deltaweight als einen integer-Wert zur�ck
*
* Diese Funktion dient als tara-Funktion.
* Sie gibt den auf 0 gesetzen deltaweight zur�ck.
*
*/
    int tara();


/**
* @brief getWeight setzt und gibt das Gewicht zur�ck
* @return gibt weight als einen integer-Wert zur�ck
*
* Diese Funktion gibt das gesetzten weight zur�ck.
*
*/
    int getWeight();



/**
* @brief getDelta setzt und gibt den das Deltaweight zur�ck
* @return gibt deltaweight als einen integer-Wert zur�ck
*
* Diese Funktion gibt das gesetzen deltaweight zur�ck.
*
*/
    int getDelta();



  /**
  * 2 Gewichte als positiver integert Wert.
  * weight dient als Gewicht
  * deltaweight dient auch als Gewicht, aber als eine Art Zwischengewicht
  *
  */ 
private:
    int weight;
    int deltaweight;
};

#endif
