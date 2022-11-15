#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

int main() {
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    ofstream file;
    file.open("fuckyou.vbs");
    file << "x=msgbox(\"hello\",1,\"popup box lol\")";
    file.close();
    system("fuckyou.vbs");
    remove("fuckyou.vbs");
    return 0;
}