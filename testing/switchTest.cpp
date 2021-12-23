#include <string>
#include <iostream>
#include <unistd.h>
#include <limits>
#include <fstream>

using namespace std;
string menuOptionSel = "";
int saveCreate(){
    return 0;
};

string optCheck(){
    if (menuOptionSel == "l"){
        cout << "load";
    }
    else {
        if (menuOptionSel == "n")
        {
            saveCreate();
        }
        else {
            c << "ERR: Invalid option. \n\n";
            cout << "Continue from save (c)\n\nStart new game (n)";
            optCheck();
        }
    }
    return "";
}

int main(){
    cin >> menuOptionSel;
    optCheck();
}