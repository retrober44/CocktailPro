//@(#) CocktailZubereiter.cpp


#include "CocktailZubereiter.h"

CocktailZubereiter::CocktailZubereiter(DeviceVerwalter * dv) {
	myDeviceVerwalter = dv;
}

bool CocktailZubereiter::cocktailZubereiten(Recipe * rzpt) {
	//std::system("clear");
	std::cout << "Gruess Gott, ich bin der CocktailZubereiter!" << std::endl
		<< "Ich habe Ihre Bestellung: " << rzpt->getName() << " erhalten." << std::endl
		<< "Bitte gedulden Sie sich einen Moment, waehrend ich den Cocktail zubereite!\n" << std::endl;

	int i;

	for (i = 0; i < rzpt->getNoOfRecipeSteps(); i++) {
		RecipeStep * schritt = rzpt->getRecipeStep(i);
		std::string zutat = schritt->getZutat();
		float menge = schritt->getMenge();
		std::cout << "Rezeptschritt: " << zutat << ", " << menge << std::endl;
		myDeviceVerwalter->rezeptSchrittZubereiten(zutat, menge);
	}
	myDeviceVerwalter->entleeren(i);
	myDeviceVerwalter->putzen();
	return (true);
}


