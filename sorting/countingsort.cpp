#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
using namespace std;

void countingsort(int data[], int length, int min, int max)
{
    int range = max - min + 1;
    int *temp = new int[range]();
    for (size_t i = 0; i < length; i++)
    {
        int temp_data = data[i] - min;
        temp[temp_data]++;
    }
    int now = 0;
    for (size_t i = 0; i < range; i++)
    {
        for (size_t j = 0; j < temp[i]; j++)
        {
            data[now] = i + min;
            now++;
        }
    }
}

void countingsort(int data[], int length){
    int maxi = data[0];
    int mini = data[0];
    for (size_t i = 0; i < length; i++)
    {
        maxi = max(maxi, data[i]);
        mini = min(mini, data[i]);
    }
    countingsort(data, length, mini, maxi);
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
    countingsort(data, length);
    assert(is_sorted(begin(data), end(data)));
    return 0;
}
