//@(#) CocktailPro.cpp


#include "CocktailPro.h"
#include <string>

CocktailPro::CocktailPro(int argc, char * * param) {
    theZutatenVerwalter = new VorhandeneZutaten;

    theMischbaresRezeptbuch = new MischbaresRezeptbuch(theZutatenVerwalter);
    theDeviceVerwalter = new DeviceVerwalter(theZutatenVerwalter);
    theCocktailZubereiter = new CocktailZubereiter(theDeviceVerwalter);
    theZutatenVerwalter = new VorhandeneZutaten;

    Timer * theTimer = Timer::getInstance();
    if (argc == 2) {// this has to be changed later
        if (std::string(param[1]) == "-D") {
            theTimer->set_Turbo(1000);
            this->demo();
            exit(0);
        } else { // Parameter => Turbo an
            theTimer->set_Turbo(10);
        }
    }
    // Mischen
    while (true) {
        int CocktailNo = chooseCocktail();
        int max = theMischbaresRezeptbuch->getNumberOfRecipes();
        if (CocktailNo > 0 && CocktailNo <= max) {
            Recipe * rezeptptr = theMischbaresRezeptbuch->getRecipe(CocktailNo - 1);
            std::cout << rezeptptr->getName() << std::endl;
            theCocktailZubereiter->cocktailZubereiten(rezeptptr);
        } else {
            std::cout << "Falsche Cocktailnummer!" << std::endl;
        }
    }
}

void CocktailPro::demo() {
    int CocktailNo = 1;
    int max = theMischbaresRezeptbuch->getNumberOfRecipes();
    if (CocktailNo > 0 && CocktailNo <= max) {
        Recipe * rezeptptr = theMischbaresRezeptbuch->getRecipe(CocktailNo - 1);
        std::cout << rezeptptr->getName() << std::endl;
        theCocktailZubereiter->cocktailZubereiten(rezeptptr);
    } else {
        std::cout << "Falsche Cocktailnummer!" << std::endl;
    }
}


int CocktailPro::chooseCocktail() {
    while (true) {
        std::cout << "********** Mischbare Rezepte **********" << std::endl;
        theMischbaresRezeptbuch->browse();
        std::cout << "Was haetten Sie denn gern? (-1 zum Verlassen)" << std::endl;

        std::string eingabe = "";

        //cin.ignore();       
        std::cin >> eingabe;

        int zahl = atoi(eingabe.c_str());
        int max = theMischbaresRezeptbuch->getNumberOfRecipes();

        if (zahl == -1) {
            exit(0);
        }

        if (zahl > 0 && zahl <= max) {
            return zahl;
        } else {
            //std::system("clear");
            std::cout << "MEEEP! Too many fingers on keyboard error!" << std::endl;
            std::cout << "Ihre Eingabe: " << eingabe << " war nicht zwischen 1 und " << max << "!" << std::endl;
        }
    }
}
