#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include "headers/saveCreate.h"
#include <limits>
#include <fstream>
#include <regex>
using namespace std;
//goToLine();
std::fstream& goToLine(std::fstream& file, unsigned int num){
    file.seekg(std::ios::beg);
    for(int i=0; i < num - 1; ++i){
        file.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    return file;
}
//init vars used later
string nameTemp = "";
int tempStr=0;
int tempCon=0;
int tempDex=0;
int tempInt=0;
int tempWis=0;
int tempChar=0;
bool prepCheck;

int insertVal(){
    ofstream save("save");
    save << "\n";
    save << nameTemp;
    save << "\n";
    save << tempStr;
    save << "\n";
    save << tempCon;
    save << "\n";
    save << tempDex;
    save << "\n";
    save << tempInt;
    save << "\n";
    save << tempWis;
    save << "\n";
    save << tempChar;
    save.close();
    return 0;
}


int totalCalc(){
int totalStats = tempStr + tempCon + tempDex + tempInt + tempWis + tempChar;
if(totalStats == 75){
insertVal();
}
else {
    cerr << "ERR: The entered stats do not equal 75. The process is starting over.\n\n";
    saveCreate();
}
return 0;
}

int saveCreate(){

    cout << "Good... choice.\n\nNow. Select a character name. First only.\n";
    cin >> nameTemp;
    cout << "\nExcellent name. Now.\n\nChoose this character's ability scores. They must total 75.";
    cout << "\nStrength. Self explanatory.\n";
    cin >> tempStr;
    cout << "Dexterity. The ability to move swiftly and fluidly.\n";
    cin >> tempDex;
    cout << "Constitution. Endurance and the capability to withstand force.\n";
    cin >> tempCon;
    cout << "Intelligence. Problem solving, critical thinking.\n";
    cin >> tempInt;
    cout << "Wisdom. Intuitive knowledge, ability to 'read' a person.\n";
    cin >> tempWis;
    cout << "And lastly, charisma. How charismatic is this character?\n";
    cin >> tempChar;
    totalCalc();
    return tempStr;
    return tempCon;
    return tempDex;
    return tempWis;
    return tempInt;
    return tempChar;
}

