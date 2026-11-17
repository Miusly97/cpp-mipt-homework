#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& s, char delimiter)
{
    std::vector<std::string> v;
    std::size_t j = 0; 
    for (std::size_t i = 0; i <= s.size(); i += 1)
    {
        if (s[i] == delimiter || i == s.size())
        {
            v.push_back(s.substr(j, i - j));
            j = i + 1; 
        }
    }
    
return v;
}

int main()
{
    std::string data = "apple,banana,cherry,durian";
    char delimiter = ',';
    
    std::vector<std::string> parts = split(data, delimiter);
    for (std::size_t i = 0; i < parts.size(); ++i)
        std::cout << parts.at(i) << std::endl;
}