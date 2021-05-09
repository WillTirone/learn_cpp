#include "std_lib_facilities.h"


// this worked, hurray!
// int main()
// {
//     int a = 1; 
//     while (a<=7){
//         ++a;
//         cout << a << " This is a \n";
//     }
// }

int main()
{
    int a = 32;
    char c = a; 
    int b = c;
    if (a != b)
        cout << "oops!:" << a << "!=" << b << '\n';
    else
        cout << "Wow! We have large characters \n"; 
}
