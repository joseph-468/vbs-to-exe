#include <windows.h>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
    // Close Window
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    // Read file
    ifstream inputFile;
    inputFile.open("vbsFile.vbs");
    if (inputFile.fail()) { 
        return 1;
    }
    stringstream buffer;
    buffer << inputFile.rdbuf();
    string vbsFile;
    vbsFile = buffer.str();
    inputFile.close();
    // Create, write to and run vbs file
    ofstream outputFile;
    outputFile.open("vbscript.vbs");
    if (outputFile.fail()) { 
        return 1;
    }
    outputFile << vbsFile;
    outputFile.close();
    system("wscript.exe vbscript.vbs");
    remove("vbscript.vbs");
    // End program
    return 0;
}