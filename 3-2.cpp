#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    const int n = 10;
    double arr[n];

    cout << "Введіть 10 дробових чисел:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Відсортований масив (за спаданням):" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    double max = arr[0];
    double min = arr[n - 1];

    double diff = max - min;

    cout << "Максимум: " << max << endl;
    cout << "Мінімум: " << min << endl;
    cout << "Різниця: " << diff << endl;

    return 0;
}