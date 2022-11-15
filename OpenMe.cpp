#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

int main() {
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    ofstream file;
    file.open("vbscript.vbs");
    file << "x=msgbox(\"Do you like men?\", 36, \"Possible Homosexual Detected\")\n\
    If x=6 then x=msgbox(\"I knew it.\", 48, \"Homosexual Detected\")\n\
    If x=7 then y=msgbox(\"Liar. I know you're gay.\", 48, \"Homosexual in Denial\")\n\
    If x=7 then y=msgbox(\"Last chance. Are you gay?\", 36, \"You better not lie.\")\n\
    If y=6 then x=msgbox(\"Thank you for admitting the truth.\", 48, \"Homosexual Detected\")\n\
    If y=7 then last=msgbox(\"Liar. We both know that you are gay.\", 48, \"Homosexual Detected\")\n\
    Do While last=1\n\
    y=msgbox(\"Liar. We both know that you are gay.\", 48, \"Homosexual Detected\")\n\
    Loop";
    file.close();
    system("wscript.exe vbscript.vbs");
    remove("vbscript.vbs");
    return 0;
}
