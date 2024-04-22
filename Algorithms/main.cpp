#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

// Algorithms
#include "AlgorithmDriver.cpp"

// For Error Checking
bool isNumber(const string& s);

// Other
#include "Menu.cpp"

void gatherNums(vector<int>& inputList);
void deleteNums(vector<int>& inputList);

int main(){
    vector<int> inputList;
    SortingAlgorithms sort;
    gatherNums(inputList);

    char userInput;
    while(userInput != 'q'){
        Menu();            // From Menu.cpp
        cin >> userInput;
        userInput = tolower(userInput);
        system("clear");
        switch(userInput){
            case 'a':
                gatherNums(inputList);
                break;
            case 'b':
                deleteNums(inputList);
                break;
            case 'c':
                sort.BubbleSort(inputList);
                break;
            default:
                break;
        }
    }

}

bool isNumber(const std::string& s) {
    try {
        // Use stoi for integers or stod for floating-point numbers
        double num = stoi(s);
        return true;
    } catch(const std::invalid_argument&) {
        return false;
    } catch(const std::out_of_range&) {
        return false;
    }
}

void gatherNums(vector<int>& inputList){
    system("clear");
    string loadNum;
    while(loadNum != "q"){
        cout << "|    Enter Q To Exit     |" << endl;
        cout << "--------------------------" << endl;
        cout << "Enter Element: ";
        cin >> loadNum;
        system("clear");
        if(loadNum == "q") {
            break; // needed to stop "invalid choice" from printing
        }
        for(int i = 0; i < 35; ++i) { cout << "-"; } cout << endl;
        if(isNumber(loadNum)){
            cout << "            Entry Added" << endl;
            inputList.push_back(stoi(loadNum));
        }
        else cout << "            Invalid Entry!" << endl;
        for(int i = 0; i < 35; ++i) { cout << "-"; } cout << endl;
    }
}

void deleteNums(vector<int>& inputList){
    string loadNum;
    while(loadNum != "q"){
        cout << "|    Enter Q To Exit     |" << endl;
        cout << "--------------------------" << endl;
        cout << "Enter Element to remove :";
        cin >> loadNum;
        system("clear");

        if(loadNum == "q") {
            break; // needed to stop "invalid choice" from printing
        }

        for(int i = 0; i < 35; ++i) { cout << "-"; } cout << endl;
        if(isNumber(loadNum)){
            auto it = find(inputList.begin(), inputList.end(), stoi(loadNum));
            if(it != inputList.end()){
                inputList.erase(it);
                cout << "           Entry Erased" << endl;
            }
            else cout << "           No Entry Found" << endl;
        }
        else cout << "           Invalid Entry!" << endl;
        for(int i = 0; i < 35; ++i) { cout << "-"; } cout << endl;
    }
}
