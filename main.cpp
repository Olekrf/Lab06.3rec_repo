#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void Input(int* a, const int size, int i);
void Print(int* a, const int size, int i);

template <typename T>
void Input(T* a, const int size, int i);

template <typename T>
void Print(T* a, const int size, int i);

int main()
{
    const int n = 5;
    int a[n];
    Input(a, n, 0);
    cout << "Input(a, n) =";
    Print(a, n, 0);
    cout << endl;

    Input<int>(a, n, 0);
    cout << "Input<int>(a, n) =";
    Print<int>(a, n, 0);
    cout << endl;

    double b[n];
    Input<double>(b, n, 0);
    cout << "Input<double>(b, n) =";
    Print<double>(b, n, 0);
    cout << endl;

    string c[n];
    Input<string>(c, n, 0);
    cout << "Input<string>(c, n) =";
    Print<string>(c, n, 0);
    cout << endl;

    return 0;
}

void Input(int* a, const int size, int i)
{
    cout << "a[" << i << "] = ";
    cin >> a[i];
    if (i < size - 1)
        Input(a, size, i + 1);
}

void Print(int* a, const int size, int i)
{
    cout << setw(4) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
}

template <typename T>
void Input(T* a, const int size, int i)
{
    cout << "a[" << i << "] = ";
    cin >> a[i];
    if (i < size - 1)
        Input<T>(a, size, i + 1);
}

template <typename T>
void Print(T* a, const int size, int i)
{
    cout << setw(4) << a[i];
    if (i < size - 1)
        Print<T>(a, size, i + 1);
}
