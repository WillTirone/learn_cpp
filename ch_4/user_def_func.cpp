#include <iostream> 

int square(int x)
{ 
    return x*x;
}

int main()
{
    int a = square(2); 

    std::cout<< a <<'\n';
    std::cout<<square(10)<<'\n';
}