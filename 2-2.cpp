#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    const int N = 10;
    int arr[N];

    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Початковий масив:" << endl;
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }

        cout << "Після проходу " << i + 1 << ":" << endl;
        for (int k = 0; k < N; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    return 0;
}