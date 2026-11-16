#include <iostream>
#include <string>

struct Book
{
    std::string title;
    int pages;
    float price;
};

bool isExpensive( const Book& b )

{
    if (b.price < 1000)
        return false;
    else
        return true;
}

int main()
{
    Book b = { "jdjdj" , 67 , 999 };
    std::cout << isExpensive(b) << std::endl;
}