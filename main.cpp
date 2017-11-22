
/** \ Ray Cahill
 *
 * \ Lab 1
 * \ 25/10/1990
 * \ Computer Programming
 *
 */
/** Preprocessor directives */
#include <iostream>

using namespace std;

// Main function
int main()
{
    // Variable declaration
    double celsius, fahrenheit;
    // Enter a value for temperature
    cout << "Enter temperature in degrees celsius: " << endl;
    cin >> celsius;
    // How to calculate fahrenheit
    fahrenheit = ((9.0/5.0)* celsius) + 32;
    // The result in temp
    cout << " Temp in Fahrenheit: "<< fahrenheit << endl;

    return 0;
}
