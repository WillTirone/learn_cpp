#include <iostream>
#include <random>
#include <string>
#include <vector>

using namespace std; 

// https://www.youtube.com/watch?v=2BP8NhxjrO0&list=RDCMUCQ-W1KE9EYfdxhL6S4twUNw&start_radio=1&rv=2BP8NhxjrO0&t=375

class player 
{
public: 

    // need to figure out how to mix char and int for 
    // face cards and integer values 
    
    string card;
    int z;
    vector<int> num_cards = {2,3,4,5,6,7,8,9,10}; 
    vector<char> face_cards = {'J', 'Q', 'K', 'A'}; 

    void deal_card()
    {
        z = rand() % 10; 
    }
};

int main()
{
    player p1; 
    p1.deal_card();

    cout << "z value: " << p1.z << "\n";
    cout << "first num: " << p1.num_cards[0] << "\n";
    cout << "random face: " << p1.face_cards[p1.z] << "\n";
}