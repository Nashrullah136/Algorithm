#include <iostream>
#include <algorithm>
using namespace std;

void merge(int data[], int start, int mid, int end)
{
    int left = start;
    int right = mid;
    int now = 0;
    int temp[end - start];
    while (left < mid && right < end)
    {
        if (data[left] < data[right])
        {
            temp[now] = data[left];
            left++;
        }
        else
        {
            temp[now] = data[right];
            right++;
        }
        now++;
    }
    while (left < mid)
    {
        temp[now] = data[left];
        now++;
        left++;
    }
    while (right < end)
    {
        temp[now] = data[right];
        now++;
        right++;
    }
    now = 0;
    while (start < end)
    {
        data[start] = temp[now];
        start++;
        now++;
    }
}

void mergesort(int data[], int start, int end)
{
    if (end - start <= 1)
    {
        return;
    }
    else
    {
        int mid = (end - start) / 2;
        mergesort(data, start, mid);
        mergesort(data, mid, end);
        merge(data, start, mid, end);
    }
}

void mergesort(int data[], int length)
{
    mergesort(data, 0, length);
}
