#include <bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x)
{
    sort(arr, arr + n); // if Array is not sorted
    int ansFloor = -1, ansCeil = -1;
    int low = 0, high = n - 1;

    // Find Floor
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] <= x)
        {
            ansFloor = arr[mid];
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    low = 0, high = n - 1;
    // Find Ceil
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
            ansCeil = arr[mid];
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    return {ansFloor, ansCeil};
}
