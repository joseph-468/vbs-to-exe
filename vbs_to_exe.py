import os


def main():
    # Make vbs file C++ friendly
    result = []
    file = open("Config/vbsFile.vbs", "r")
    data = file.readlines()
    file.close()
    for i in data:
        temp = "\""
        for j in range(len(i)-1):
            if i[j] != "\n":
                temp += i[j]
                if i[j+1] == "\"":
                    temp += "\\"
        if i[-1] != "\n":
            temp += i[-1]
        temp += "\""
        result.append(temp)
    result = "    outputFile << " + " << endl << ".join(result) + ";"

    # Make C++ program
    file = open("Config/cppTemplate.txt", "r")
    data = file.readlines()
    file.close()
    first_half = data[:15]
    first_half.append(result + "\n")
    second_half = data[16:]
    data = first_half + second_half
    data = "".join(data)
    file = open("Config/cppScript.cpp", "w+")
    file.write(data)
    file.close()

    # Compile C++ program
    file_name = input("Enter the file name for the executable: ")
    if file_name == "":
        file_name = "cppScript"
    if os.system(f"g++ Config/cppScript.cpp -o {file_name} -static-libgcc -static-libstdc++") == 0:
        os.system("cls")
        print("Program compiled successfully.")
    else:
        pass
    os.system("PAUSE")


if __name__ == "__main__":
    main()
