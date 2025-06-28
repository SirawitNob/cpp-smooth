#include <iostream>
#include <vector>

void insertion_sort(std::vector<int>& v) {
    size_t n = v.size();
    for (size_t i = 1; i < n; i++) {
        int x = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > x) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = x;
        for (int x : v) {
            std::cout << x << " ";
        }
        std::cout << '\n';
    }
}

void display(std::vector<int>& arr) {
    for (int x : arr) {
        std::cout << x << " ";
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> myVec = {8, 91, 23, 77, 4, 68, 30, 52, 14, 86, 39, 61, 2, 95, 48, 70, 19, 83, 57, 25};
    insertion_sort(myVec);
    display(myVec);
    return 0;
}