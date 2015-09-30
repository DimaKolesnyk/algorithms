#pragma once

#include "struct.hpp"
#include <functional>
#include <boost/optional/optional.hpp>

namespace algo
{

    template <typename T>
    bool standartOperator(T a, T b) {

        if (a > b ) { return true; }
        else { return false; }
    }

    template <typename T>
    void insertionSort( std::vector < T > &data, std::function<bool(T, T)> oper = standartOperator<T>)
    {
        T key;
        int j;

        for (int i = 1; i < data.size(); ++i) {
            key = data[i];
            j = i - 1;

            while ( j >= 0 && oper(data[j], key)  ) {
                data[j+1] = data[j];
                j = j - 1;
            }
            data[j+1] = key;
        }
    }

    inline int floor( double a) { return (int)a; }

    template <typename T>
    void marge(std::vector<T> B, std::vector<T> C, std::vector <T> &data) {

        unsigned int i = 0;
        unsigned int j = 0;
        unsigned int k = 0;
        while (i < B.size() && j < C.size() ) {
            if (B[i] <= C[j]) {
                data[k] = B[i];
                i+=1;
            } else {
                data[k] = C[j];
                j+=1;
            }
            k+=1;
        }


        unsigned int vr = k;
        if (i == B.size()) {

            for (int l = j; l < C.size(); ++l) {
                data[vr] = C[l];
                vr+=1;
            }
        } else {
            for (int l = i; l < B.size(); ++l) {
                data[vr] = B[l];
                vr+=1;
            }
        }

    }


    template <typename T>
    void margeSort(std::vector <T> &data, std::function<bool(T, T)> oper = standartOperator<T> ) {

        if (data.size() > 1) {
            typename std::vector<T>::const_iterator first = data.begin();
            typename std::vector<T>::const_iterator last = data.end();
            typename std::vector<T>::const_iterator center = data.begin() + floor(data.size()/2);

            std::vector<T> B(first, center);
            std::vector<T> C(center, last);

            margeSort(B, oper);
            margeSort(C, oper);
            marge(B, C, data);
        }
    }


    template <typename T>
    void viewData(std::vector<T> &data) {

        std::cout << "[ ";
        for (T &x : data) std::cout << x << "; ";
        std::cout << "]";
    }
}
