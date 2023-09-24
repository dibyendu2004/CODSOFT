#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the text file: ";
    cin >> filename;

    ifstream inputFile(filename);

    if (!inputFile) {
        cout << "Error: Could not open file " << filename << endl;
        return 1;
    }

    string word;
    int wordCount = 0;

    while (inputFile >> word) {
        // Count each word
        wordCount++;
    }

    inputFile.close();

    cout << "Total word count in the file: " << wordCount << endl;

    return 0;
}
