// COMSC-210 | Lab 16 | Huiluan Yie

#include <iostream>
#include <iomanip>
using namespace std;

const int W = 10;

class Color {
    int red;
    int green;
    int blue;

    public:
    // constructors
    Color() // default constructor
    {
        red = 0;
        green = 0;
        blue = 0;
    }  
    Color(int r) // partial constructor
    {
        red = r;
        green = 0;
        blue = 0;
    }
    Color(int r, int g, int b)  // full parameter constructor
    {
        red = r;
        green = g;
        blue = b;
    }        


    // setter
    void set_red(int r)    { red = r; }
    void set_green(int g)  { green = g; }
    void set_blue(int b)   { blue = b; }

    // getter
    int get_red()   { return red; }
    int get_green() { return green; }
    int get_blue()  { return blue; }

    // other methods
    void print() {
        cout << setw(W) << "Red: " << red << endl;
        cout << setw(W) << "Green: " << green << endl;
        cout << setw(W) << "Blue: " << blue << endl;
    }
};

int main() {
    // declarations
    Color c1;
    cout << "\nThe 1st color:\n";
    c1.print();

    

    return 0;
}