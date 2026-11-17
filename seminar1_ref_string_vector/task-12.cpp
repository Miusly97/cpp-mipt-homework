#include <iostream>
#include <string>
#include <vector>
 std::string concatenate(std::vector<std::string>& v )
{
    std::string b;
    std::size_t size0 = v.size();
    for (std::size_t i = 0; i < size0; i+=1)
    {
        b += v[i];
    }
    return b;
}

int main()
{
	std::vector<std::string> v {"Cat", "Dog", "Mouse", "Tiger", "Elk"};
	std::cout << concatenate(v) << std::endl; // Должно напечатать CatDogMouseTigerElk
}