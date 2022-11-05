#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
using namespace std;

void insertionsort(int data[], int length)
{
    int pos;
    for (size_t i = 0; i < length; i++)
    {
        pos = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (data[pos] < data[j])
            {
                swap(data[pos], data[j]);
                pos--;
            }
            else
            {
                break;
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
    insertionsort(data, length);
    assert(is_sorted(begin(data), end(data)));
    return 0;
}
