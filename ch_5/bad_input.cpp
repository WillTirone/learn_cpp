#include "../std_lib_facilities.h"

// p. 150

int main() 
try {
    double d = 0;
    cin >> d;
    return 0; // 0 indicates success 
}
catch (runtime_error& e) {
    cerr << "runtime error: " << e.what() << '\n'; 
    keep_window_open();
    return 1; // 1 indicates failure 
}