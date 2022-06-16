/*
AlgoUtility Extension
Developed by Matt05 Dev and Pall1n

Website: https://matt05.ml
Github: @Matt0550
*/

#include <string>
#include <time.h>
#include <iostream>

using namespace std;

string numbers = "123456789";
string specials = "!@#$%^&*";
string capitals = "ABCDEFGHIJKLMNPQRSTUVWXYZ";
string lowers = "abcdefghijklmnpqrstuvwxyz";

string GeneratePassword(int length) {
    string altogether = numbers + specials + capitals + lowers;
    string password = "";

    srand(time(NULL));
    password += capitals[rand() % capitals.length()];
    for (int i = 0; i < length; ++i) {
        password += altogether[rand() % altogether.length()];
    }
    return password;
}