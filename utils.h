#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <algorithm>

inline std::string toLower(const std::string& str) {
    std::string lowerStr = str;
    std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

#endif