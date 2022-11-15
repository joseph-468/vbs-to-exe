import os


def main():
    # Compile C++ program
    file_name = input("Enter the file name for the executable: ")
    if os.system(f"g++ cppScript.cpp -o {file_name} -static-libgcc -static-libstdc++") == 0:
        os.system("cls")
        print("Program compiled successfully.")
    else:
        pass
    os.system("PAUSE")


if __name__ == "__main__":
    main()
