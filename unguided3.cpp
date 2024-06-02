#include <iostream>

using namespace std;

int sequentialSearchCount(const int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    const int size = 10;
    int data[size] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int target = 4;

    int count = sequentialSearchCount(data, size, target);

    cout << "Banyaknya angka 4 dalam data adalah: " << count << endl;

    return 0;
}
