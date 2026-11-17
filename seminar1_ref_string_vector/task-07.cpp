#include <iostream>
#include <string>
void addBrackets(std::string& a)
{
    a.insert (0 , "[");
    a += "]";
}
int main()
{
	std::string a = "Cat";
	addBrackets(a);
	std::cout << a << std::endl;  
	
	addBrackets(a);
	std::cout << a << std::endl;  
}