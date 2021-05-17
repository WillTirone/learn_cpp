#include <iostream>

int main()
{
    int a = 0; 
    int b = 0; 
    std::cout << "Please enter two integers \n";
    std::cin >> a >> b; 

    if (a<b) 
        std::cout << " a is less than b \n"; 

    else
        std::cout << " b is less than a \n";
}   