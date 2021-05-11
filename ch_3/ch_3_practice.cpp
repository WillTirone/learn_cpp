#include "std_lib_facilities.h"

// p. 83

int main()
{
    cout << "Enter the name of who you want to write to:\n " ;
    string first_name;
    cin >> first_name;
    cout << " Dear " << first_name << ", How are you? I miss you \n";
    cout << "Enter name of a friend you miss..?"; 
    string friend_name; 
    cin >> friend_name; 
    cout << "Have you seen " << friend_name << "? \n";

    char friend_sex = 0;
    cin >> friend_sex; 
    if (friend_sex = 'm')
        cout << "If you see " << friend_name << " please ask him to call me \n";
    else 
        cout << "If you see " << friend_name << " please ask her to call me \n";

    int age; 
    cout << "Enter the age of the recipient"; 
    cin >> age; 
    if (age <=100 & age >=0)
        cout << "I hear you just had a birthday and you are " << age; 
    else if (age <= 0)
        cout << "You can't have a negative age!";
    else 
        cout << "That's pretty old!"; 
}