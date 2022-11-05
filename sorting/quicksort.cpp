#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <algorithm>
using namespace std;

int partition(int data[], int start, int end){
    int pivot = start + (end-start)/2;
    int data_pivot = data[pivot];
    swap(data[pivot], data[end-1]);
    int left = start;
    int right = end - 2;
    do{
        while(data[left] < data_pivot){
            left++;
        }
        while(data[right] >= data_pivot){
            right--;
        }
        if(left < right){
            swap(data[left], data[right]);
        }
    } while(left < right);
    swap(data[end-1], data[left]);
    return left;
}

void quicksort(int data[], int start, int end){
    if(end - start <= 1){
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

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int length = 35;
    int data[35];
    for (size_t i = 0; i < length; i++)
    {
        data[i] = rand() % length;
    }
    quicksort(data, length);
    assert(is_sorted(begin(data), end(data)));
    return 0;
}