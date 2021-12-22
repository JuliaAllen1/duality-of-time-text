#include <fstream>
#include <iostream>
#include <string>
#include "saveLoader.h"
#include <limits>
using namespace std;

std::fstream& goToLine(std::fstream& file, unsigned int num){
    file.seekg(std::ios::beg);
    for(int i=0; i < num - 1; ++i){
        file.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    return file;
}

string charClass = "";
string charName = "";
int str = 0;
int dex = 0;
int con = 0;
int intel = 0;
int wis = 0;
int cha = 0;
int saveLoader(){
    fstream save("save");
    goToLine(save, 1);
    save >> charClass;
    goToLine(save, 2);
    save >> charName;
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
    return 0;
}
