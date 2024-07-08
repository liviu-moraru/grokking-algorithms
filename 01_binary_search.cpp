#include <iostream>


int binarySearch(int data_array[], int element, int len)
{
    int low = 0;
    int high = len;
    while (low < high)
    {
        int mid = (low + high) / 2;
        int guess = data_array[mid];

        if (guess == element)
        {
            return mid;
        }
        else if (guess < element ) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        } 

        
    }

    return -1;
}


int main()
{
    int data_array[] = {2, 10, 23, 44, 100, 121};
    int length = sizeof(data_array) / sizeof(int);

    int index;
    index = binarySearch(data_array, 3, length);
    std::cout << "Element found at " << index << " the index" ;
    return 0;
}
