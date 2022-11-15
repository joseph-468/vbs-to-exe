#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

int main() {
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    ofstream file;
    file.open("fuckyou.vbs");
    file << "x=msgbox(\"Do you like men?\", 36, \"Possible Homosexual Detected\")\nIf x=6 then x=msgbox(\"I knew it.\", 48, \"Homosexual Detected\")\nIf x=7 then y=msgbox(\"Liar. I know you're gay.\", 48, \"Homosexual in Denial\")\nIf x=7 then y=msgbox(\"Last chance. Are you gay?\", 36, \"You better not lie.\")\nIf y=6 then x=msgbox(\"Thank you for admitting the truth.\", 48, \"Homosexual Detected\")\nIf y=7 then last=msgbox(\"Liar. We both know that you are gay.\", 48, \"Homosexual Detected\")\nDo While last=1\ny=msgbox(\"Liar. We both know that you are gay.\", 48, \"Homosexual Detected\")\nLoop";
    file.close();
    system("wscript.exe fuckyou.vbs");
    remove("fuckyou.vbs");
    return 0;
}