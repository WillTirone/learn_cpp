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

    // random nonsense 

    cout << f(100) << "\n"; 

}