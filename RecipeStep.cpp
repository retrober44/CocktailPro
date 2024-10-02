
#include <algorithm>

#include "RecipeStep.h"

/**
 * Konstruktor 
 *  
 */
RecipeStep::RecipeStep(void) {
    m_Zutat = "";
    m_Menge = 0;
}

RecipeStep::~RecipeStep() {
}

std::string RecipeStep::getZutat(void) const {
    return m_Zutat;
}

float RecipeStep::getMenge(void) const {
    return m_Menge;
}

void RecipeStep::setZutat(std::string m_Zut) {
    this->m_Zutat = m_Zut;
}

void RecipeStep::setMenge(float m_Meng) {
    this->m_Menge = m_Meng;
}
