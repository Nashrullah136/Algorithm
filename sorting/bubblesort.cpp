#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
using namespace std;

void bubblesort(int data[], int length)
{
    for (size_t i = 0; i < length; i++)
    {
        for (size_t j = 0; j < length - 1; j++)
        {
            if (data[j] > data[j + 1])
            {
                swap(data[j], data[j + 1]);
            }
        }
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
    bubblesort(data, length);
    assert(is_sorted(begin(data), end(data)));
    return 0;
}