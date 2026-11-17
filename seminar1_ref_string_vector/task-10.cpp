#include <iostream>
#include <string>

bool isDomainName( const std::string& a )
{
    return a.starts_with("www.") && a.ends_with(".com");
}
int main()
{
	std::cout << isDomainName("www.google.com") << std::endl;         // Напечатает 1
	std::cout << isDomainName("abc") << std::endl;                    // Напечатает 0
	std::cout << isDomainName("hello.com") << std::endl;              // Напечатает 0
}