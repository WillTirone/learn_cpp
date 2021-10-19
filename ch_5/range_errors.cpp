#include <iostream>
#include "/home/willtirone/learn_cpp/std_lib_facilities.h"

int main()
try {
    vector <int> v; //a vector of ints
    int i; 
    while (std::cin>>i) v.push_back(i); //get values
    for (int i=0;i<=v.size(); ++i)
        std::cout<<"v[" << i << "]==" << v[i] << endl;
} 
catch (out_of_range) {
    cerr << "Oops! Range error \n";
    return 1;
} catch (...) {
    cerr << "Exception : something went wrong \n"; 
    return 2; 
}
