#pragma once
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    private:
        TargetGenerator(TargetGenerator const& ref);
        TargetGenerator& operator=(TargetGenerator const& ref);
        std::map<std::string, ATarget*> _target;

    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget*);
        void forgetTargetType(std::string const& ref);
        ATarget* createTarget(std::string const& ref);
};