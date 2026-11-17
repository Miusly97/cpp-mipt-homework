#include <iostream>
#include<string>
std::string repeat(int a)
{   std::string b ;
    if (a > 0)
    {
        for (int i = 0; i < a; i +=1)
        {
            b += std::to_string(a);
        }
        return b;
    }
    else 
    {
        return "";
    }
}
int main()
{
	std::cout << repeat(5)  << std::endl;  // Должно напечатать 55555
	std::cout << repeat(10) << std::endl;  // Должно напечатать 10101010101010101010
	std::cout << repeat(-1) << std::endl;  // Не должно ничего печатать
}

