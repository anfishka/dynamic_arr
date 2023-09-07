#include <iostream>
#include <time.h>



void bubble_sort(int arr[], int size) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] < arr[i + 1]) {
                int tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                swapped = true;
            }

        }
    }

}


int main() {




    int size = 0;
    std::cout << "Enter just integer value! Your size of arr -> ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Invalid size! Enter just positive integer.\n";
        return 1;
    }

    int* arr_ptr = new int[size];

    int* iter = arr_ptr;
    int i = 0;
    while (i < size) {
        int value;
        std::cout << "Enter an integer value: ";
        std::cin >> value;

        if (value >= 0) {
            *iter = value;
            std::cout << iter << "\t" << *iter << "\n";
            iter++;
            i++;
        }
        else {
            std::cout << "Invalid input.Enter integer.\n";
        }
}

    std::cout << "\nYour arr -> \n";

    for (int* iter = arr_ptr; iter != arr_ptr + size; iter++) {

        std::cout << (iter) << "\t" << *(iter) << "\n";

    }
    bubble_sort(arr_ptr, size);

    std::cout << "Sorted array -> ";

    for (int i = 0; i < size; i++) {
        std::cout << arr_ptr[i] << " ";
    }


    delete[] arr_ptr;
    return 0;
}
