//@(#) Timer.h

#ifndef TIMER_H_H
#define TIMER_H_H

#include <ctime>
#include <iostream>

/**
* @class Timer 
*
* @brief Timer kontrolliert die Dosierung der Zutaten
*
* Jede sekunde f�llt ein Zutat in den Dosierer und wir durch ein "*" simuliert.
* Zu Testzwecken ist es m�glich die Zeit zu beschleunigen.
* 
*/

class Timer {
public:

	/**@brief beschleunigt die Simulations-Zeit
	*param [in] turbo ein Integer f�r die Zeitbeschleunigung
	*/
    void set_Turbo(int turbo);

/**
* @brief setzt den Timer und gibt die Beschleunigung zur�ck
*
*/
    static Timer * getInstance();

    /**
     * 	~Timer( )
     *     {
     *         instanceFlag = false;
     *     };
     */

	/**@brief simuliert den Dosiervorgang
	* param [in] milliseconds ist ein long (integer) f�r die Dauer
	*
	* Diese Methode Simuliert den Dosiervorgang.
	* Fallen St�cke oder Fl�ssigkeiten pro sekunde in die Waage werden diese
	* durch ein "*" dargestellt.
	*/
    void sleep(long milliseconds);

private:

	/**
	* setzt den Timer zur�ck
	* 
	*/
    static bool instanceFlag;

	/**
	* speichert die Zeit
	*
	*/

    static Timer * theTimer;

	/**
	* f�r die Beschleunigung
	*/

    int booster;

	/**@brief Konstruktor um ein Timer Objekt anzulegen.
	* 
	* Erstellt ein Timer Objekt.
	*
	* Initialisiert Variablen mit default Werten.
	*
	*/

    Timer() : booster(1), time_counter(0), last_time(0), this_time(0) {
    };

	/**
	* Zeitrechner
	* 
	*/

    double time_counter;

	/**
	* speichert die letzte Zeit des ausgef�hrten Prozesses
	*
	*/
    std::clock_t last_time;



	/**
	* speichert die aktuelle Zeit des ausgef�hrten Prozesses
	*
	*/
    std::clock_t this_time;


};

#endif
