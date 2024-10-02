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
* Jede sekunde fällt ein Zutat in den Dosierer und wir durch ein "*" simuliert.
* Zu Testzwecken ist es möglich die Zeit zu beschleunigen.
* 
*/

class Timer {
public:

	/**@brief beschleunigt die Simulations-Zeit
	*param [in] turbo ein Integer für die Zeitbeschleunigung
	*/
    void set_Turbo(int turbo);

/**
* @brief setzt den Timer und gibt die Beschleunigung zurück
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
	* param [in] milliseconds ist ein long (integer) für die Dauer
	*
	* Diese Methode Simuliert den Dosiervorgang.
	* Fallen Stücke oder Flüssigkeiten pro sekunde in die Waage werden diese
	* durch ein "*" dargestellt.
	*/
    void sleep(long milliseconds);

private:

	/**
	* setzt den Timer zurück
	* 
	*/
    static bool instanceFlag;

	/**
	* speichert die Zeit
	*
	*/

    static Timer * theTimer;

	/**
	* für die Beschleunigung
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
	* speichert die letzte Zeit des ausgeführten Prozesses
	*
	*/
    std::clock_t last_time;



	/**
	* speichert die aktuelle Zeit des ausgeführten Prozesses
	*
	*/
    std::clock_t this_time;


};

#endif
