#include <bits/stdc++.h>
using namespace std;

void max_heapify(vector<int>& Arr, int N, int i) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;

    if (left < N && Arr[left] > Arr[largest]) {
        largest = left;
    }

    if (right < N && Arr[right] > Arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(Arr[i], Arr[largest]);
        max_heapify(Arr, N, largest);
    }
}

void buildmaxheap(vector<int>& Arr, int N) {
    for (int i = N / 2 - 1; i >= 0; i--) {
        max_heapify(Arr, N, i);  // Corrected parameter order
    }
}

int main() {
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;

    vector<int> Arr(N);  // Resizing the vector to have N elements

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> Arr[i];
    }

    buildmaxheap(Arr, N);

    cout << "Max-heap array:" << endl;
    for (int i = 0; i < N; i++) {
        cout << Arr[i] << " ";
    }
    cout << endl;

    return 0;
}
