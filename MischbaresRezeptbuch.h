//@(#) MischbaresRezeptbuch.h

#ifndef MISCHBARESREZEPTBUCH_H_H
#define MISCHBARESREZEPTBUCH_H_H

#include "Recipe.h"
#include "RecipeBook.h"
#include "VorhandeneZutaten.h"

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // fuer exit() unter Linux
/**
  * @class MischbaresRezeptbuch
  *
  * @author Sen,Soner
  * @date 28.10.2018
  * @version 1.0
  *
  * @brief  MischbaresRezeptbuch Kennt die mischbaren Rezepte und kann sie ausgeben
  *
  */
class MischbaresRezeptbuch : public RecipeBook {
    
public:
/**
  * @brief Gibt alle Rezepte vor der Filterung aus
  * @param [ze] wird jetzt als ZutatenVerwalter verwendet
  */
   MischbaresRezeptbuch(VorhandeneZutaten * ze);
/**
  * @brief Gibt alle Rezepte des Rezeptbuchs vor der Filterung aus
  * 
  */
    void browse();

private:
    VorhandeneZutaten * myZutatenVerwalter;

    std::vector<Recipe *> rezepte;
/**
  * @brief verwirft Rezepte die als "nicht ok" eingestuft wurden
  * stellt den Status am Anfang auf "true", 
  * da nur eine änderung an dem Status vorgenommen werden muss, falls eine Zutat nicht vorhanden ist
  * Falls die Zutat im Zutatenverwalter gefunden wird, dann wird sie als "OK" eingestuft
  * Falls die aktuelle Zutat nicht im Zutatenverwalter gefunden wird, dann wird sie als "nicht ok" eingestuft 
  * Wenn das Rezept als "nicht ok" eingestuft wurde, wird sie am ende verworfen 
  */
    void seitenRausreissen();

    void setZutatenVerwalter(VorhandeneZutaten * ze);

};

#endif
