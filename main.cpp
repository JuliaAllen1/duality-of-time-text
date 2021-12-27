#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include "intro.h"
#include "saveLoader.h"
#include <limits>
#include <fstream>
#include <regex>
#include "saveCreate.h"
#include "menu.h"
using namespace std;

//saveLoading stuff

string nameAndClass(){
    fstream save("save");
    goToLine(save, 2);
    save >> charName;
    save.close();
    return charName;
    
}
int loadAbilScore(){
    fstream save("save");
    goToLine(save, 3);
    save >> str;
    goToLine(save, 4);
    save >> dex;
    goToLine(save, 5);
    save >> con;
    goToLine(save, 6);
    save >> intel;
    goToLine(save, 7);
    save >> wis;
    goToLine(save, 8);
    save >> cha;
    save.close();
    return str;
    return dex;
    return con;
    return intel;
    return wis;
    return cha;
}

int main(){
dualityIntro();
cout << "Continue from save (c)\n\nStart new game (n)\n\n";
cin >> menuOptionSel;
optCheck(); 
}