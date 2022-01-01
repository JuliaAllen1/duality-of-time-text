#include <string>
#include <iostream>
#include <unistd.h>
#include <limits>
#include <fstream>
#include "headers/saveCreate.h"
#include "headers/menu.h"

using namespace std;


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
            cerr << "ERR: Invalid option. \n\n";
            cout << "Continue from save (c)\n\nStart new game (n)";
            optCheck();
        }
    }
    return menuOptionSel;
}

int menu(){
    optCheck();
    return 0;
}