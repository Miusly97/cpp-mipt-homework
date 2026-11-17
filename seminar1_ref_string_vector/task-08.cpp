#include <iostream>
#include <string>
#include <string>
#include <cctype>
void countLetters(const std::string& str, int& numLetters, int& numDigits)
{
    for (int i = 0; i < str.size(); i+=1)
    {
        if (isalpha(str[i]))
        {
            numLetters +=1;
        }
        if (isalpha(str[i])==0 && isdigit(str[i]))
        {
            numDigits +=1;
        }
    }
}
int main ()
{
    int numLetters = 0;
    int numDigits = 0;
    std::string str;
    std::cin >> str;
    countLetters( str, numLetters, numDigits );
    std::cout << numLetters << "," << numDigits << std::endl;


} 