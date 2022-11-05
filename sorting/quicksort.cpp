#include <iostream>
#include <algorithm>
using namespace std;

int partition(int data[], int start, int end){
    int pivot = (start-end)/2;
    int data_pivot = data[pivot];
    swap(data[pivot], data[end-1]);
    int pos = start;
    for (size_t i = start; i < end; i++){
        if(data[i] < data_pivot){
            swap(data[i], data[pos]);
            pos++;
        }
    }
    swap(data[end-1], data[pos]);
    return pos;
}

void quicksort(int data[], int start, int end){
    if(start - end <= 1){
        return;
    }
    else{
        int pivot = partition(data, start, end);
        quicksort(data, start, pivot);
        quicksort(data, pivot+1, end);
    }
}

void quicksort(int data[], int length)
{
    quicksort(data, 0, length);
}
