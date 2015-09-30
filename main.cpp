#include <iostream>
#include "algo.hpp"


int main() {

    //Example data
    std::vector <double> data = {2.345, 22, 0.4, -4, 34.2, 0.00442};

    //Run insertion Sort algorithms
    //algo::insertionSort(data);

    algo::margeSort(data);

    //View result
    algo::viewData(data);


    return 0;
}
