#include <iostream>
#include <algorithm>
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
            }
            else
            {
                break;
            }
        }
    }
}
