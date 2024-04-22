#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class BubbleSort {
public:
    static vector<int> sort(vector<int> arr) {
        if (arr.empty()) { return arr; }
        bool isSorted = false; // Initialize isSorted to false
        while (!isSorted) {
            isSorted = true;
            for (int i = 0; i < arr.size() - 1; i++) {
                if (arr[i] > arr[i + 1]) {
                    std::swap(arr[i], arr[i + 1]);
                    isSorted = false;
                }
            }
        }
        return arr;
    }

    static void printInfo(){
        // Print Line
        for(int i = 0; i < 35; ++i) { cout << "-"; } cout << endl;

        // Print Info
        cout << "| Time to solve" << setw(20) << "O(N^2) |" << endl;
        cout << "| Space to solve" << setw(19) << "O(1) |" << endl;

        for(int i = 0; i < 35; ++i) { cout << "-"; } cout << endl;
    }
};
