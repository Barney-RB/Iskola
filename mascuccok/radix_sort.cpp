#include <iostream>
#include <vector>

using namespace std;

// Segédfüggvények deklarációja
void countingSort(vector<int>& arr, int exp);
int getMax(const vector<int>& arr);
void radixSort(vector<int>& arr);

// Radix sort implementáció
void radixSort(vector<int>& arr) {
    int maxNum = getMax(arr);

    // Különböző számjegyek alapján történő rendezés
    for (int exp = 1; maxNum / exp > 0; exp *= 10) {
        countingSort(arr, exp);
    }
}

// Counting sort implementáció egy adott számjegy alapján
void countingSort(vector<int>& arr, int exp) {
    const int n = arr.size();
    vector<int> output(n);
    vector<int> count(10, 0);

    // Számoljuk meg az előfordulásokat az adott számjegy alapján
    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    // Kiszámoljuk a prefix összegeket
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Építjük az output listát
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Frissítjük az eredeti tömböt az új sorrenddel
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// A tömb legnagyobb elemének meghatározása
int getMax(const vector<int>& arr) {
    int maxNum = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }
    return maxNum;
}

// Főprogram
int main() {
    vector<int> inputArray = {170, 45, 75, 90, 802, 24, 2, 66};

    cout << "Eredeti tomb: ";
    for (int num : inputArray) {
        cout << num << " ";
    }

    radixSort(inputArray);

    cout << "\nRendezett tomb: ";
    for (int num : inputArray) {
        cout << num << " ";
    }

    return 0;
}