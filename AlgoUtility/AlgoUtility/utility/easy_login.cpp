#include <iostream>
using namespace std;

// Created by Matt0550
class EasyLogin {
public:
    string Username, Password;

    void AskLogin() {
        cout << "Username: ";
        cin >> Username;

        cout << "Password: ";
        cin >> Password;
    }

    bool CheckLogin(string check1, string check2, string verifyCheck1, string verifyCheck2) {
        if (check1 == verifyCheck1 && check2 == verifyCheck2) {
            return true;
        }
        else {
            return false;
        }
    }
};
EasyLogin login;
