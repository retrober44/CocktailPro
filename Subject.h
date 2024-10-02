//@(#) Subject.h

#ifndef SUBJECT_H_H
#define SUBJECT_H_H

#include "Observer.h"

#include <vector>
#include <iostream>

/**
 * @class Subject
 *
 * @author Sen,Soner
 * @date 28.10.2018
 * @version 1.0
 * 
 * @brief Subject arbeitet mit Observern  
 * 
 * die Klasse entfernt obsever,fügt sie den Vektor und Updatete sie
 * 
 */
class Subject {
    
public:
/**
  * @brief fügt einen Observer in den Vektor 
  *
  */
    void attach(Observer * observer);
/**
  * @brief Entfernt einen Observer aus dem Vektor
  *
  */
  void detach(Observer * observer);
/**
  *  @brief
  *
  * Ruft die Update funktion aller Observer auf
  * Es wird überprüft in welchem Vorgang sich was befindet
  * und bei bedarf wird der Inhalt einer Variabel verändert
  */
    void notify();

private:
/**
  * @brief Der Vektor speichert die Observer und nutzt sie bei Bedarf
  *
  */
    std::vector<Observer *> observers;

};

#endif
