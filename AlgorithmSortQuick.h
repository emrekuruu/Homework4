

#ifndef HOMEWORK4_ALGORITHMSORTQUICK_H
#define HOMEWORK4_ALGORITHMSORTQUICK_H


class AlgorithmSortQuick {


public:
    int k;
    AlgorithmSortQuick(int k);
    int select();
    int quickselect(int* numbers, int left, int right, int k);
    void quickSort(int* numbers, int left, int right);
    int Partition(int* numbers, int left, int right);
    void swap(int arry[], int a ,int b);
    void insertionSort(int* numbers,int length);
};


#endif //HOMEWORK4_ALGORITHMSORTQUICK_H
