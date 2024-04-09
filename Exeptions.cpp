#include "Exeptions.h"

Exeptions::Exeptions(std::pair<int, int> p) : a_(p.first), b_(p.second){}

std::string Exeptions::locatie_fout()
{
    // Convert integers a_ and b_ to strings
    std::string a_str = std::to_string(a_);
    std::string b_str = std::to_string(b_);

    // Concatenate the strings
    return "Locaties komen niet overeen, een van de twee coordinaten is boven 10 of onder de 0. A: " + a_str + " of B: " + b_str;
}
