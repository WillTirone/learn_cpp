#include "../std_lib_facilities.h"

class Token{
public: 
    char kind;
    double value; 
    Token(char ch) // make a Token from a character 
        :kind(ch), value(0){}
    Token(char ch, double val) // make a Token from a char and a double 
        :kind(ch), value(val){} 
}; 


int main()
{
    cout << "Please enter an expression (we can handle +,-,*, and /): "; 
    int lval = 1;
    int rval; 
    char op; 
    cin >> lval; // left value 
    if (!cin)error("no first operand"); 

    while (cin>>op){ // read operator 
        cin>>rval; // read right hand value repeatedly
        if(!cin)error("no second operand"); 
        switch(op){
            case '+':  
                lval += rval;
                break;
            case '-':
                lval -= rval; 
                break;
            case '*':
                lval *= rval;
                break;
            case '/': 
                lval /= rval;
                break;
            default: 
                cout << "Result : " << lval << '\n';
                keep_window_open(); 
                return 0;
        }
    }
    error("bad expression");
}