/*
    split.hpp
    
    Declaration for split() function
*/

#ifndef INCLUDED_SPLIT_HPP
#define INCLUDED_SPLIT_HPP

#include <vector>
#include <string>

// splits a string into parts based on a delimiter
// delimiter is not included in the result
std::vector<std::string> split(const std::string& s, char delimiter);

#endif
