// Jovanni Sanchez & Damon Wu
// October 15, 2024
// Lab 6

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main ( ) 
{
    char inputSymbol;
    char outputSymbol;
    ifstream inputFile;
    ofstream outputFile;
    string inputMessage;
    int inputNum1, inputNum2;

    /* inputSymbol will be assigned to the character extracted from
    "inputData.txt". outputSymbol will be assigned to inputSymbol plus 1,
    resulting in outputSymbol printing as a symbol and not the ASCII code.
    inputFile and outputFile will be used to read and write files. inputNum1
    and inputNum2 will be assigned to the two numbers extracted to from inputFile. */

    inputFile.open("inputData.txt"); // Open the input file
    outputFile.open("outputData.txt"); // Open an output file for later

    inputFile >> inputNum1 >> inputNum2; // Read file for 2 numbers
    outputFile << "Sum of " << inputNum1 << " and " 
    << inputNum2 << " is " << inputNum1 + inputNum2 << "."; 
    // Print those 2 numbers in a new file

    inputFile >> inputSymbol; // Read file for a character
    outputSymbol = inputSymbol + 1; // Assign a new character to the extracted char + 1
    outputFile << "\nThe ASCII character that follows " << inputSymbol
    << " is " << outputSymbol; // Print out the original and following symbol

    inputFile >> inputMessage; // Read file for a string
    outputFile << "\n" << inputMessage; // Print the input message in the output file

    return 0;
}
