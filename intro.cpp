#include <iostream> 
#include <stdio.h>
#include "intro.h"
#include <unistd.h>
#include <string>
using namespace std;

string pressAny = "a";
int dualityIntro(){
    //copyright notice
    cout << "© 2022 Julia Allen, All Rights Reserved.\nCo-written by Adam Bree\nWritten and developed by Julia Allen\n";
    //press any
    cout << "\nPress any key, then enter, to continue...\n\n";
    cin >> pressAny;
    cout << "Welcome to the magical world of...\n";
    sleep(1);
    cout << "Duality\n";
    cout << "of\n";
    cout << "Time\n";
    return 0;

}