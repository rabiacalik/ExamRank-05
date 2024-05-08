#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock 
{
    private:
        std::string _name;
        std::string _title;
        SpellBook _SpellBook;
        Warlock& operator=(Warlock const& ref);
        Warlock(Warlock const& ref);
        Warlock();

    public:
        Warlock(std::string const &name, std::string const& title);
        ~Warlock();

        std::string const& getName() const;
        std::string const& getTitle() const;

        void setTitle(std::string const& title);
        void introduce() const;

        void learnSpell(ASpell* spell);
        void forgetSpell(std::string SpellName);
        void launchSpell(std::string SpellName, ATarget const& target);
};