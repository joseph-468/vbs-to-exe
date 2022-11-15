import os


def main():
    # Open vbs file and convert it to C++ file
    result = ""
    file = open("vbsScript.vbs", "r")
    data = file.readlines()
    for i in data:
        for j in range(len(i)-1):
            result += i[j]
            if i[j+1] == "\"":
                result += "\\"
        result += i[-1]
    result = result.replace("\n", "\\n\\\n")
    result = "\"" + result + "\""
    file.close()
    os.system("g++ OpenMe.cpp -o OpenMe -static-libgcc -static-libstdc++")


if __name__ == "__main__":
    main()
