#include <iostream>
#include <iomanip>
using namespace std;

template<typename T>
class Visualization {
public:
    void printVector(vector<T> vec){
        cout << endl;
        for(auto& e: vec) cout << e << " ";
        cout << endl;
        cout << endl;
    }
};
