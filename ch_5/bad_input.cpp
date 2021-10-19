#include "../std_lib_facilities.h"

// p. 150

int main() 
try {
    // some program 
    a =; 
    return 0;  
}
catch (exception& e){
    cerr << "error: " << e.what() << "\n"; 
    keep_window_open();
    return 1;  // indicates failure
}
catch (...){ // will catch any error not caught by exception
    cerr << "unknown exception \n";
    keep_window_open();
    return 2; // failure 
}
