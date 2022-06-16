/*
AlgoUtility Extension
Developed by Matt05 Dev and Pall1n

Website: https://matt05.ml
Github: @Matt0550
*/

#include <iostream>
#include <string>

using namespace std;

class Colors {
    public:
    string ENDC = "\033[0m"; // Reset colors
    string BOLD = "\033[1m"; // Bold or bright
    string ITALIC = "\033[3m";
    string UNDERLINE = "\033[4m";

    string RED = "\033[31m";
    string GREEN = "\033[32m";
    string YELLOW = "\033[33m";
    string BLUE = "\033[34m";
    string MAGENTA = "\033[35m";
    string CYAN = "\033[36m";
    string WHITE = "\033[37m";

    string BRIGHT_RED = "\033[91m";
    string BRIGHT_GREEN = "\033[92m";
    string BRIGHT_YELLOW = "\033[93m";
    string BRIGHT_BLUE = "\033[94m";
    string BRIGHT_MAGENTA = "\033[95m";
    string BRIGHT_CYAN = "\033[96m";
    string BRIGHT_WHITE = "\033[97m";

    string RED_BG = "\033[41m";
    string GREEN_BG = "\033[42m";
    string YELLOW_BG = "\033[43m";
    string BLUE_BG = "\033[44m";
    string MAGENTA_BG = "\033[45m";
    string CYAN_BG = "\033[46m";
    string WHITE_BG = "\033[47m";

    string BRIGHT_RED_BG = "\033[101m";
    string BRIGHT_GREEN_BG = "\033[102m";
    string BRIGHT_YELLOW_BG = "\033[103m";
    string BRIGHT_BLUE_BG = "\033[104m";
    string BRIGHT_MAGENTA_BG = "\033[105m";
    string BRIGHT_CYAN_BG = "\033[106m";
    string BRIGHT_WHITE_BG = "\033[107m";

    string print(string textColor, string text, string backgroundColor = "\033[0m") {
        return backgroundColor + textColor + text + ENDC;
    }
};
Colors color;

