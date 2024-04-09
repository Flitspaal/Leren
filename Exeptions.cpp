#include "Exeptions.h"

Exeptions::Exeptions(std::pair<int, int> p) : a_(p.first), b_(p.second){}

std::string Exeptions::locatie_fout()
{
    return "Locaties komen niet overeen";
}
