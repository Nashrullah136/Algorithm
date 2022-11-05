#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
using namespace std;

void selectionsort(int data[], int length)
{
    int min;
    for (size_t i = 0; i < length; i++)
    {
        min = i;
        for (size_t j = i; j < length; j++)
        {
            if (data[min] > data[j])
            {
                min = j;
            }
        }
        swap(data[i], data[min]);
    }
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
    selectionsort(data, length);
    assert(is_sorted(begin(data), end(data)));
    return 0;
}