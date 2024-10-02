//@(#) MischbaresRezeptbuch.cpp


#include "MischbaresRezeptbuch.h"
#include <iostream>
//

void MischbaresRezeptbuch::browse() {
    std::cout << "*********************************************" << std::endl;
    std::cout << "Es gibt " << this->getNumberOfRecipes() << " Cocktails" << std::endl;

    for (int i = 0; i<this->getNumberOfRecipes(); i++) {
        Recipe* r = this->getRecipe(i);
        std::cout << i + 1 << ". ";
        r->browse();
        std::cout << std::endl;
    }
    std::cout << "*********************************************" << std::endl;

}


MischbaresRezeptbuch::MischbaresRezeptbuch(VorhandeneZutaten * zv){

    // Debug *********
    std::cout << "********** Rezepte vor dem Filtern **********" << std::endl;
    this->browse();
    // ******************

    setZutatenVerwalter(zv);
    seitenRausreissen();
}

void MischbaresRezeptbuch::setZutatenVerwalter(VorhandeneZutaten * zv) {
    myZutatenVerwalter = zv;
}

void MischbaresRezeptbuch::seitenRausreissen() {
    for (int i = 0; i<this->getNumberOfRecipes(); i++) {
        bool rezeptOK;
        Recipe* r = getRecipe(i);
        rezeptOK = true;
        for (int j = 0; j < r->getNoOfRecipeSteps(); j++) {
            std::string gesuchteZutat;

            gesuchteZutat = r->getRecipeStep(j)->getZutat();
            bool ZutatOK = false;

            for (int k = 0; k < myZutatenVerwalter->getAnzahlVorhandeneZutaten(); k++) {
                if (myZutatenVerwalter->getZutat(k) == gesuchteZutat) {
                    ZutatOK = true;
                    break;
                }
            }
            if (!ZutatOK) {
                rezeptOK = false;
            }
        }
        if (!rezeptOK) {
            deleteRecipe(i);
        }
    }
}
