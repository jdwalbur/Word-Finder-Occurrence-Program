#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

string getUserChoice(string prompt, vector<string> validInputs);
string getUserChoice(string prompt);

int main() {
// Ask the user for the phrase that they are looking for
    string lookingFor = getUserChoice("Enter the phrase you are looking for: ");

    ofstream inputfile;
    inputfile.open("inputfile.txt");

// Write "Looking for:" with the user given phrase to the first line of the inputfile 
    inputfile << "Looking for: " << lookingFor << "\n";

// Ask the user if they want to enter in a text file or type out a string
    string inputType = getUserChoice("Would you like enter a string or read from a file (s/f): ", vector<string> {"s","f"});

    if(inputType == "s"){
        // Get the string from the user and copy it over to the inputfile
        string stringInput = getUserChoice("Enter the your string: ");
        inputfile << stringInput;
        inputfile.close();
    } else {
        // Get the filename from the user and copy the contents to the inputfile
        string filename = getUserChoice("Enter the filename, must be text file: ");
        ifstream userfile;
        userfile.open(filename);

        string line;
        if(userfile.is_open()){
            while(getline(userfile,line)){
                inputfile << line << "\n";
            }
        }

        userfile.close();
        inputfile.close();

    }

    // Call WordFinder.py from the system
    system("python3 WordFinder.py");

    return 0;
}

//Prompt the user and get their input while checking if the input is valid
string getUserChoice(string prompt, vector<string> validInputs) {
    cout << prompt;
    string answer;
    getline(cin, answer);
    while(true){
        for(string validInput : validInputs){
            if(answer == validInput){
                return answer;
            }
        }
        cout << "Invalid Input. Please reread instructions above." << endl;
        cout << "Choice: ";
        getline(cin, answer);
    }
}

//Prompt the user and get the input
string getUserChoice(string prompt) {
    cout << prompt;
    string answer;
    getline(cin, answer);
    return answer;
}