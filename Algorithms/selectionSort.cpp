#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class SelectionSort {
public:
    static vector<int> sort(vector<int> arr) {
        // TODO: Implement Selection Sort
        return vector<int>();
    }

    static void printInfo(){
        // Print Line
        for(int i = 0; i < 35; ++i) { cout << "-"; } cout << endl;

        // Print Info
        cout << "| Time to solve" << setw(20) << "O() |" << endl;
        cout << "| Space to solve" << setw(19) << "O() |" << endl;

        for(int i = 0; i < 35; ++i) { cout << "-"; } cout << endl;
    }
};
