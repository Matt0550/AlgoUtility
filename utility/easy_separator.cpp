/*
AlgoUtility Extension
Developed by Matt05 Dev and Pall1n

Website: https://matt05.ml
Github: @Matt0550
*/

#include <iostream>

using namespace std;

class EasySeparator {
public:
    string CustomSeparator(string symbol, int lenght) {
        string sym = symbol;
        for (int i = 1; i < lenght; i++) {
            symbol = symbol + sym;

        }
        return symbol;
    }

    string CustomSeparatorWithText(string symbol, string text, int lenght = 10) {
        string center, text1, text2, text3, lati, sym;
        int lenght2;

        sym = symbol;

        int tex = text.length();

        for (int i = 1; i < tex+2 + lenght; i++) {
            symbol = symbol + sym;
        }

        text1 = symbol + "\n";
        lenght2 = lenght/2-0;

        for (int i = 0; i < lenght2; i++) {
            lati = lati + sym;
        }

        text3 = symbol + "\n" + lati + " " + text + " " + lati + "\n" + symbol + "\n";
        return text3;
    }
};

EasySeparator separator; // initializate class

