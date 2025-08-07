#include <iostream>
#include <fstream>
using namespace std ;

int main() {
    ifstream inFile("input.txt"); 
    ofstream outFile("output.txt"); 


    if (!inFile.is_open()) {
        cout << "Failed to open files!" << endl;
        return 1;
    }

    if ( !outFile.is_open()) {
        cout << "Failed to open files!" << endl;
        inFile.close();
        return 1;
    }

    char ch;
    while (inFile.get(ch)) {
        outFile.put(ch);
    }

    inFile.close();
    outFile.close();

cout << "File copied successfully!" << endl;
    return 0;
}