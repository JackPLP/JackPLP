#include "Spel.h"
#include "Persoon.h"

#include <iostream>

int main()
{
    Spel spel;
    spel.setScore("Bert", 15);
    std::cout << spel.getScore("Bert") << std::endl; // uikomst: 15
    Persoon *bert = spel.getPersoon("Bert");
    bert->setLeeftijd(103);
    spel.addScore("Bert", 16);
    std::cout << spel.getScore("Bert") << std::endl; // uikomst: 31
    bert = spel.getPersoon("Bert");
    std::cout << bert->getLeeftijd() << std::endl;   // uikomst: 103
    spel.setScore("Joan", 512);
    spel.setScore("Arthur", 1024);
    for ( auto pair : spel.getScores() )
    {
        std::cout << pair.first.getNaam()     << "\t"
                  << pair.first.getLeeftijd() << "\t"
                  << pair.second << std::endl;
    }
    return 0;
}
