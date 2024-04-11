#include <iostream>
#include <sstream>
#include <iomanip>
// Takes in rgb values
std::string rgb_to_hex(int r, int g, int b)
{
    // ensures values are in range of 0 - 255
    r = std::max(0, std::min(255, r));
    g = std::max(0, std::min(255, g));
    b = std::max(0, std::min(255, b));
    
    std::stringstream ss;
    // converts to hexadecimal 
    ss << std::uppercase << std::hex << std::setfill('0')
       << std::setw(2) << r << std::setw(2) << g << std::setw(2) << b;

    return ss.str();
}

//Test with std::string hexColor = rgb_to_hex(255, 127, 0); // returns "FF7F00"
