#include<vector>
#include<iostream>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(std::vector<int>& arr) {
    size_t length = arr.size();
    for (size_t i = 0; i < length; i++) {
        bool is_swap = false;
        for (size_t j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                is_swap = true;
            }
        }
        if (is_swap == false) {
            break;
        }
    }
}

void display(std::vector<int>& arr) {
    for (int x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {42, 88, 12, 99, 5, 63, 27, 71, 34, 9, 81, 55, 20, 76, 49};
    bubble_sort(numbers);
    display(numbers);
    return 0;
}