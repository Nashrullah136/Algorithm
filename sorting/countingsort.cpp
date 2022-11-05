#include <iostream>
#include <algorithm>
using namespace std;

void countingsort(int data[], int length, int min, int max)
{
    int *temp = new int[max - min]();
    for (size_t i = 0; i < length; i++)
    {
        int temp_data = data[i] - min;
        temp[temp_data]++;
    }
    int now = 0;
    for (size_t i = 0; i < max - min; i++)
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
