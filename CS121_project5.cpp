
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


using namespace std;

int main() {
    ifstream file("data.csv");

    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string line;
    while (getline(file, line)) { 
        stringstream ss(line);
        string temp;
        int num1, num2;
        string word;

        getline(ss, temp, ',');
        stringstream(temp) >> num1;

        getline(ss, temp, ',');
        stringstream(temp) >> num2;

        getline(ss, word, ',');

        int sum = num1 + num2;

        for (int i = 0; i < sum; ++i) {
            cout << word << " ";
        }
        cout << endl;
    }

    file.close();
    return 0;
}

