#include <iostream>
#include "bubbleSort.cpp"
#include "Visualization.cpp"

Visualization<int> v;
const BubbleSort bs;

struct SortingAlgorithms {
    static void BubbleSort(vector<int> arr){
        bs.printInfo();
        v.printVector(bs.sort(arr));
    }
};
