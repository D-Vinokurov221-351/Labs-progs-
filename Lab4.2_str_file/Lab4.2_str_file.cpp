#include <iostream>
#include <cstring>
#include <string> 
#include <fstream> 
#include <bitset>

using std::string;
using std::cout;
using std::cin;

string file_format(const string file_path_full) {   // выводит расширение
    int number;
    string abc;
    number = file_path_full.find_first_of('.');
    abc = file_path_full.substr(number, file_path_full.size()-number);
    return abc;
}

string file_name(const string file_path_full) { //  выводит название
    int number, number1;
    string abc;
    number = file_path_full.find_last_of('.');
    number1 = file_path_full.find_last_of("\\");
    int a = file_path_full.size() - number1 - 1 - (file_path_full.size() - number);
    abc = file_path_full.substr(number1+1, a);
    return abc;
}

string file_path(const string file_path_full) { // выводит расположение
    int number;
    string abc;
    number = file_path_full.find_last_of("\\");
    abc = file_path_full.substr(0, number);
    return abc;
}

char file_disk(const string file_path_full) {   // выводит название диска
    return file_path_full[0];
}

string file_rename(string file_path_full) { // переименовывает файл
    string new_name;
    cin >> new_name;
    file_path_full = file_path_full.substr(0, file_path_full.find_last_of("\\")+1) + new_name + ".cpp";
    return file_path_full;
}

bool file_copy(const string file_path_full) // копирует файл
{
    int number;
    std::fstream fs;
    std::fstream out;
    string temp;
    number = file_path_full.find_first_of('.');
    fs.open(file_path_full, std::fstream::in);
    out.open(file_path_full.substr(0, number) + "_copy" + file_path_full.substr(number, file_path_full.size() - number),std::fstream::out);
    while (!fs.eof()) {
        fs >> temp;
        out << temp << '\n';
    }
    return 1;
}

int main()
{
    string file_path_name;
    int a = 0;
    int choise;
    while (a == 0) {
        std::cout << "What do you want?" "\n" << "1. Int\n2. test 1\n3. test 2\n4. test 3\n5. test 4\n6. test 5\n7. test 6\n8. Escape\n";
        cin >> choise;
        switch (choise)
        {
        case 1:
            cout << "Input file_path_name"; 
	    cin >> file_path_name;
            break;
        case 2:
            cout << file_format(file_path_name) << '\n';
            break;
        case 3:
            cout << file_name(file_path_name) << "\n";
            break;
        case 4:
            cout << file_path(file_path_name) << "\n";
            break;
        case 5:
            cout << file_disk(file_path_name) << "\n";
            break;
        case 6:
            cout << file_rename(file_path_name) << "\n";
            break;
        case 7:
            file_copy(file_path_name);
            break;
        default:
            break;
        }
    }
}
