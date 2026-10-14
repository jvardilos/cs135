#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        int mini = i;
        int minv = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < minv)
            {
                minv = arr[j];
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    for (int i = 0; i < size; i++)
    {
        int item = arr[i];
        if (i != item)
        {
            return i;
        }
    }

    // Fallback: if 1 to size-1 are all there, the missing number is size
    return size;
}

int main()
{
    int v[] = {9, 3, 1, 5, 7, 2, 6, 4};

    int num = findMissingNumber(v, 8);

    cout << "finality is a beautiful thing " << num << endl;

    return 0;
}