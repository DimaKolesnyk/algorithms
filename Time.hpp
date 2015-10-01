//
// Created by dima on 30.09.15.
//

#ifndef ALGORITHMS_TIME_H
#define ALGORITHMS_TIME_H

#include <ctime>
#include "iostream"

class Time {
private:
    unsigned int t;
public:
    Time() { t = clock(); }
    ~Time() { std::cout << "Time: " << (clock() - t) << std::endl;}
};


#endif //ALGORITHMS_TIME_H
