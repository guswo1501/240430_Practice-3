#include <iostream>
#include <string>

int main()
{
    std::string s = "Codingon";
    std::cout << s << std::endl;

    
    s.replace(0, 1, "c");
    std::cout << s << std::endl;

    std::cout << s.substr(2, 4) << std::endl;

     s.replace(1, 6, "oooooo");
    std::cout << s << std::endl;

    s.erase(2, 5);
    std::cout << s << std::endl;
    
}


