#include "../std_lib_facilities.h"

int f(int a)
{
    int q = 0;
    if (a>0) 
    {
        q = q + a;
        cout << q << "\n"; 
    }
return 0;
}

int complicated_function(int a, int b, int c)
// 0 < a < b < c 
{
    if (!(0<a && a<b && b<c))
        error("bad arguments for function");
    int z; 
    z = a + b + c;
    return z;
}

int main() 
{
    vector<double> temps; 

    double temp = 0;
    double sum = 0;
    double high_temp = -1000;
    double low_temp = 1000;
    int no_of_temps = 0; 

    while (cin>>temp)
    {
        ++no_of_temps; 
        sum += temp;
        if(temp>high_temp) high_temp = temp; 
        if(temp<low_temp) low_temp = temp; 
    }

    cout << "high : " << high_temp << endl;
    cout << "low : " << low_temp << endl;
    cout << "average : " << sum / no_of_temps << endl;
    cout << "z " << complicated_function(1,2,3) << endl;

    // random nonsense 

    cout << f(100) << "\n"; 

}