#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    int result = 0;
    int isValid = 1;
    double similarity;
    std::string str1 = "kitten";
    std::string str2 = "sittingggg^";
        
    if (str1.size() >= str2.size() * 2)
    {
        isValid = 0;
        result = 0;
    }

    if (str2.size() >= str1.size() * 2)
    {
        isValid = 0;
        result = 0;
    }
    if (isValid == true)
    {
        int lenDiff = std::abs(static_cast<int>(str1.size()) - static_cast<int>(str2.size()));
        int minLength = std::min(str1.size(), str2.size());
        similarity = (1.0 - static_cast<double>(lenDiff) / minLength) * 60;
    }

    //std::cout << "Similarity: " << similarity << std::endl;
    return 0;
}