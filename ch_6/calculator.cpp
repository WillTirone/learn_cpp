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

class Token_stream
{
    public: 
        Token_stream(); 
        Token get(); 
        void putback(Token t);
    private: 
        bool full;  
        Token buffer;
}; 

Token_stream::Token_stream()
    :full(false), buffer(0)
    {
    }

void Token_stream::putback(Token t)
{
    if (full) error("putback() into a full buffer"); 
    buffer = t;
    full = true;
}

Token Token_stream::get()
    {
        if (full){
            // remove token 
            full=false;
            return buffer;
        }       
    }

    char ch;
    cin >> ch;

    switch(ch){
    case ';': // for print 
    case 'q': //for quit
    //pick up here on p. 211
    }

Token_stream ts; // provides get() and putback()
double primary(){ /* . . . */ }
double term(){ /* . . . */ }

double expression() 
{
    Token_stream ts;
    double left = term(); //not implemented yet, more of a placeholder 
    Token t = ts.get(); // get things from token stream, also not implemented
    ts.putback(t);

    switch (t.kind){
        case '+':
            return left + term();
            break;
        case '-': 
            return left - term(); 
            break;
        default: 
            return left;
    }
}


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