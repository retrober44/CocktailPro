//@(#) Dosierer.cpp


#include "Dosierer.h"

Dosierer::Dosierer(float g, int ze, std::string inh, Waage * wg) : InternalDevice() {
    this->grammProZeit = g;
    this->zeiteinheit = ze;
    this->inhalt = inh;
    this->myWaage = wg;
    this->myWaage->attach(this);
}

void Dosierer::update() {
    if (!this->doinIt) return;
    if (myWaage->getDelta() >= gwicht) {
        doinIt = false;
    }

}

void Dosierer::doIt(float gramm) {
    this->gwicht = gramm;
    myWaage->tara();
    doinIt = true;
    std::cout << inhalt << " Ventil wurde geoeffnet" << std::endl;
    while (doinIt) {
        myTimer->sleep(zeiteinheit);
        myWaage->changeWeight(grammProZeit);
        //myWaage->changeWeight(0);
    }
    std::cout << inhalt << " Ventil wurde geschlossen" << std::endl;
    std::cout << "Es wurden " << myWaage->getDelta() << "g " << inhalt << " abgefuellt" << std::endl;
    std::cout << std::endl;
}

int Dosierer::getStueckProZeit() {
    return this->grammProZeit;
}
