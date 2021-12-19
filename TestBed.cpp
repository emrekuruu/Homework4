#include "TestBed.h"
#include "AlgorithmSortQuick.h"
#include <ctime>
#include <iostream>
using namespace std;

void TestBed::execute(){
    // Time stamp before the computations
    clock_t start = clock();
    cout << "Result: " << this->alg->select() << endl;
    // Time stamp after the computations
    clock_t end = clock();
    double cpu_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    cout << "Duration(sec): " << cpu_time << endl;
}

TestBed::TestBed(){
    this->alg;
}

TestBed::~TestBed(){


}

void TestBed::setAlgorithm(int k,int type){
    if (type == 4) {
        this->alg = new AlgorithmSortQuick(k);
    }
}
