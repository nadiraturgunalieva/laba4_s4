#include <iostream>

template <typename T>
int findSecondMaxIndex(T* arr, int size) {
    if (size < 2) {
        std::cerr << "Array size must be at least 2" << std::endl;
        return -1;
    }

    int maxIndex = 0;
    int secondMaxIndex = -1;

    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            secondMaxIndex = maxIndex;
            maxIndex = i;
        }
        else if (secondMaxIndex == -1 || arr[i] > arr[secondMaxIndex]) {
            if (arr[i] != arr[maxIndex]) {
                secondMaxIndex = i;
            }
        }
    }

    return secondMaxIndex;
} 

int main()
{
    float arrFloat[] = { 1.5, 7.6, 2.7, 6.8, 5.9 };
    double arrDouble[] = { 2.5, 4.6, 3.7, 5.8 };
    int arrInt[] = { 1, 3, 8, 4, 2 };
    char arrChar[] = { 'i', 'l', 'y', 's', 'm' };

    std::cout << "Index of second max in float array: " << findSecondMaxIndex(arrFloat, 5) << std::endl;
    std::cout << "Index of second max in double array: " << findSecondMaxIndex(arrDouble, 4) << std::endl;
    std::cout << "Index of second max in int array: " << findSecondMaxIndex(arrInt, 5) << std::endl;
    std::cout << "Index of second max in char array: " << findSecondMaxIndex(arrChar, 5) << std::endl;

    return 0;

}
