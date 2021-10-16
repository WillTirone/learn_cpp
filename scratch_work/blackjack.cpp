#include <iostream>
#include <random>

// https://www.youtube.com/watch?v=2BP8NhxjrO0&list=RDCMUCQ-W1KE9EYfdxhL6S4twUNw&start_radio=1&rv=2BP8NhxjrO0&t=375

class player 
{
public: 

    int x, y;
    int speed;  
    int z; 

    void make_z()
    {
        z = x * speed;
    }
};

int main()
{
    player p1; 
    p1.x = 5;
    p1.y = 40;
    p1.speed = 10;
    p1.make_z();

    std::cout << "z value : " << p1.z << "\n";
}