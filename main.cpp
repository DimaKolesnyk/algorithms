#include <iostream>
#include "algo.hpp"



int main() {

    std::vector <double> data = {2.345, 22, 22, 0.4, -4, 34.2, 0.00442};

//    algo::insertionSort(data);
//    algo::margeSort(data);


{
    Time t;
    algo::bubbleSort(data);
}


    algo::viewData(data);


    return 0;
}
