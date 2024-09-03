#include <iostream>

using namespace std;


template <typename T>
void fillarr(T arr[], int size, T min, T max);
template <typename T>
void showarr(T arr[], int size);
template <typename T>
void bubblesort(T arr[], int size, bool function);
template <typename T>
void insertionsort(T array[], int size, bool function);
template <typename T>
void swap(T* a, T* b);
template <typename T>
void selectionsort(T array[], int size, bool function);
template <typename T>
void search(T arr[], int size, T num);


template <typename T>
void fillarr(T arr[], int size, T min, T max) {
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % (min + max) - min;
    }
}
template <typename T>
void showarr(T arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}
template <typename T>
void bubblesort(T arr[], int n, bool ascending) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }
        if (!swapped) break;
    }
}
void showArr(const int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
template <typename T>

void insertionsort(T arr[], int size, bool function) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        if (function) {
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
        else {
            while (j >= 0 && arr[j] < key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
}



template <typename T>
void swap(T* a, T* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
template <typename T>
void selectionsort(T array[], int size, bool function) {
    if (function) {
        for (int step = 0; step < size - 1; step++) {
            T min_idx = step;
            for (int i = step + 1; i < size; i++) {
                if (array[i] < array[min_idx])
                    min_idx = i;
            }
            swap(&array[min_idx], &array[step]);
        }
    }
    else {
        for (int step = 0; step < size - 1; step++) {
            T max_idx = step;
            for (int i = step + 1; i < size; i++) {
                if (array[i] > array[max_idx])
                    max_idx = i;
            }
            swap(&array[max_idx], &array[step]);
        }
    }

}

template <typename T>
void search(T arr[], int size, T num) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            cout << i;
            break;
        }
    }
}

int main()
{
    cout << "\ntask 1,2" << endl;
    int myarr1[10] = {};
    fillarr(myarr1, 10, 0, 20);
    showarr(myarr1, 10);

    cout << "\ntask 3" << endl;
    bubblesort(myarr1, 10, false);
    showarr(myarr1, 10);
    cout << endl;

    selectionsort(myarr1, 10, true);
    showarr(myarr1, 10);
    cout << endl;

    insertionsort(myarr1, 10, false);
    showarr(myarr1, 10);
    cout << endl;

    cout << "\ntask4" << endl;
    int myarr4[10] = { 1,2,3,4,5,6,7,8,9,10 };
    float myarr4f[10] = { 1.1,2.2,3.2,4.3,5.6,6.7,7.4,8.1,9.4,10.6 };
    double myarr4d[10] = { 1.1,2.2,3.2,4.3,5.6,6.7,7.4,8.1,9.4,10.6 };
    search(myarr4, 10, 10);
    cout << endl;
    search(myarr4f, 10, 3.2f);
    cout << endl;
    search(myarr4d, 10, 2.2);

    cout << "\ntask5" << endl;



}

