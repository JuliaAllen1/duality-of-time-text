#include <iostream>
#include <string>
using namespace std;
int action;
int actCheck(){
    cin >> action;
    switch(action){
    case(1):
    cout << "\nact\n";
    break;
    case(2):
    cout << "\nitem\n";
    break;
    case(3):
    cout << "\ncheck\n";
    break;
    case (4):
    cout << "\ngo\n";
    break;
    default:
    cerr << "\nERR: Bad input\n";
    actCheck();
    }
    return 0;
}
int main(){
cout << "input options and it will return what that option will become in the final (terminal) version.\n";
actCheck();
}
