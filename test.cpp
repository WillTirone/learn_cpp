// on p. 64 

// basic start 
#include "std_lib_facilities.h"

int main()
{
    int number_of_steps = 39; // int for integers 
    double flying_time = 3.523412341234; // double for floating point numbers 
    char decimal_point = '.'; // individual characters 
    string name = "Annemarie"; // string for character strings
    bool tap_on = true; // for logical variables
    cout << "finished running\n\n"; 

    cout <<"Please enter your first name and age\n";
    string first_name; // string var 
    int age; //integer var 
    cin >> first_name; //read a string 
    cin >> age; //read integer 
    cout << "Hello," << first_name << " (age " << age << ")\n"; 
}