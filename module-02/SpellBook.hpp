#pragma once
#include "ASpell.hpp"
#include <map>

class SpellBook
{
    private : 
        SpellBook(SpellBook const & ref);
        SpellBook & operator=(SpellBook const & ref);
        std::map<std::string, ASpell*> _SpellBook;

    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell* spell);
        void forgetSpell(std::string const& ref);
        ASpell* createSpell(std::string const& ref);
};