/*Write a program to encrypt the content of text file and decrypt again.*/
#include <iostream>
#include <fstream>
#include <bitset>
using namespace std;

void encryptDecryptFile(string inputFileName,string outputFileName, int key) {
    ifstream in(inputFileName, ios::binary);
    ofstream out(outputFileName, ios::binary);

    if (!in || !out) {
        cerr << "Error opening files!" << endl;
        return;
    }

    char ch;
    while (in.get(ch)) {
        bitset<8> binaryChar(ch); // Convert the character to its binary representation
        binaryChar ^= key; // XOR operation with the key
        out << static_cast<char>(binaryChar.to_ulong()); // Convert back to char and write to file
    }

    cout << "Operation success" << endl;

    in.close();
    out.close();
}

int main() {
    int key;
    cout << "Enter the key: ";
    cin >> key;

    encryptDecryptFile("D:\\software testing\\task9\\decrementfile.txt", "D:\\software testing\\task9\\increementfile.txt", key);

    return 0;
}

