#include <iostream>
#include <algorithm>
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
