#include </home/willtirone/learn_cpp/std_lib_facilities.h> 

int main()
{
    vector<double>values; 
    double input; 
    double diff;
    while (cin >> input)
        values.push_back(input);

        cout << values.size() << "\n"
            << values.empty() << "\n"
            << values.front() << "\n"
            << values.back()  << "\n"; 

        // if (a<b)
        //     cout << "b is larger : " << b << "\n";
        //     if (diff < 1 / 100)
        //         cout << "small difference"; 
        // else if (a>b)
        //     cout << "a is larger : " << a << "\n";
        //     if (diff < 1 / 100)
        //         cout << " small difference ";
        // else if (a == b)
        //     cout << "a and b are equal"; 
        // b = a; 
        // cout << a << " " << b; 
}