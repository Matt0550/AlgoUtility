# AlgoUtility
A useful C ++ library made by me

## Docs

#### Example

```c++
#include <iostream>
#include "utility/console_colors.cpp"
#include "utility/password_generator.cpp"
#include "utility/easy_login.cpp"
#include "utility/easy_separator.cpp"


using namespace std;

int main()
{
    cout << color.RED << "Hello World!\n" << color.ENDC;
    cout << printColor(color.BRIGHT_YELLOW, "DANGER", color.RED_BG) << endl;
    cout << printColor(color.BRIGHT_GREEN, "Ciao") << endl;
    cout << separator.CustomSeparator("-", 20) << endl;
    cout << GeneratePassword(10) << endl;
    cout << separator.CustomSeparator("-", 20) << endl;

    cout << separator.CustomSeparatorWithText("=", "Eseguire il login",20);

    while(true){
        login.AskLogin(); // Ask to user username and password


        if (login.CheckLogin(login.Username, login.Password, "matt05", "test")) {
            cout << printColor(color.BRIGHT_GREEN, "Login eseguito");
            return 0;
        }
        else {
            cout << printColor(color.BRIGHT_RED, "Username o password errati ");
        }
    }
}
```
