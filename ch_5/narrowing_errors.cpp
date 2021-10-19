#include "../std_lib_facilities.h"

int main()
{
    int x = 2.9; 
    char c = 1066;

    int x1 = narrow_cast<int>(2.9); 
    int x2 = narrow_cast<int>(2.0);

    cout << x << "\n"; 
}