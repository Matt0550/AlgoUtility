/*
AlgoUtility Demo
Developed by Matt05 Dev and Pall1n

Website: https://matt05.ml
Github: @Matt0550
*/

#include <iostream>
#include "utility/console_colors.cpp"
#include "utility/password_generator.cpp"
#include "utility/easy_separator.cpp"
#include "utility/math_utility.cpp"


using namespace std;

int main()
{
    // Colors Extension
    cout << color.RED << "Hello World!\n" << color.ENDC;
    cout << color.print(color.BRIGHT_YELLOW, "DANGER", color.RED_BG) << endl;
    cout << color.print(color.BRIGHT_GREEN, "Ciao") << endl<<endl;

    // Easy Separator
    cout << separator.CustomSeparator("-", 20) << endl<<endl;

    // Password Generator
    cout << GeneratePassword(10) << endl<<endl;

    // Math Utility
    cout << math.assoluto(-2)<<endl; // Int
    cout << math.assoluto(-25.6) << endl; // Double
    cout << math.cubo(-3.5) << endl; // Double
    cout << math.hasDivisor(10, 2) << endl; // If N has 2 divisor, return true


}