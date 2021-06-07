#include <iostream> 

//p.147

class bad_area{};

int area(int length, int width)
{
    if (length<=0 || width <= 0) throw bad_area();
    return length*width; 
}

int main()
try 
{
    int x = 1;
    int y = 2; 
    int area1 = area(x,y);
    double ratio = area1 / 2;
}
catch (bad_area)
{ 
    std::cout << 'hello'; 
}