//@(#) Mixer.h

#ifndef MIXER_H_H
#define MIXER_H_H

#include <iostream>

#include "InternalDevice.h"

/**
 * @class Mixer
 *
 * @brief Mixer mischt die Zutaten unter der vorgegebenen Zeit
 *
 *
 */

class Mixer : public InternalDevice {
public:
    Mixer();

	/**@brief aktiviert den Timer
	 * @param [in] time für die Mischzeit
	 *
	 * Diese Methode zaehlt die Zeit runter und zeigt den
	 * Fortschritt an.
	 */
    void doIt(float time);

private:

};

#endif
