#include <iostream>
#include <string>
#include <vector>
void print(const std::vector<std::string>& v)
{
    for (std::size_t i = 0; i < v.size(); ++i)
        std::cout << v[i] << " ";
    std::cout << std::endl;
}
std::vector<std::string> prefixes( const std::string& a)
{
   std::vector<std::string> vv;
   std::size_t size0 = a.size();
    for (std::size_t i = 1; i <= size0; i+=1)
    {
        vv.push_back(a.substr(0, i));
    }
    return vv;
}  

int main()
{
    std::vector<std::string> v = prefixes("Mouse");
    print(v);  // Должно напечатать M Mo Mou Mous Mouse
}