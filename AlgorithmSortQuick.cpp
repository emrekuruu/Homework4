//
// Created by emre on 12/19/2021.
//

#include <iostream>
#include "AlgorithmSortQuick.h"
using namespace std;

AlgorithmSortQuick::AlgorithmSortQuick(int k) {
this->k=k;
}

int AlgorithmSortQuick::select() {
    int length;
    cin >> length;
    int* numbers = new int[length];

    for(int i = 0; i < length; i++){
        cin>>numbers[i];
    }

    if(length<=10){
        insertionSort(numbers,length);
        return numbers[k];
    }
    else{
        quickselect(numbers,0,length-1,k);
    }
}

int AlgorithmSortQuick::quickselect(int *numbers, int left, int right, int k) {
    quickSort(numbers,left,right);
    return numbers[k];
}

void AlgorithmSortQuick::swap(int *arry, int a, int b) {
    int temp = arry[a];
    arry[a] = arry[b];
    arry[b] = temp;
}

int AlgorithmSortQuick::Partition(int *a, int start, int End) {
    int pivot = a[End];
    int pIndex = start;
    for(int i = start; i < End -1 ; i++){
        if(a[i]<=pivot ){
            swap(a,i,pIndex);
            pIndex++;
        }
    }
    swap(a,pIndex,End);
    return pIndex;
}

void AlgorithmSortQuick::quickSort(int *a, int start, int end) {
    if(start<end){
        int pIndex = Partition(a,start,end);
        quickSort(a,start,pIndex-1);
        quickSort(a,pIndex+1,end);
    }
}

void AlgorithmSortQuick::insertionSort(int *numbers,int length) {
    for(int i = 1; i < length; i++){
        int value = numbers[i];
        int hole = i;
        while(hole >= 0 && numbers[hole-1]>value){
            numbers[hole]=numbers[hole-1];
            hole--;
        }
        numbers[hole]=value;
    }
}
