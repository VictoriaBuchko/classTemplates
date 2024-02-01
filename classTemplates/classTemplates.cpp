#include <iostream>
using namespace std;

template<typename T>
class Swapper
{
public:
    void Swap(T& first, T& second);
};

template<typename T>
void Swapper<T>::Swap(T& first, T& second) {
    T temp;
    temp = first;
    first = second;
    second = temp;
}

int main()
{
    int a = 5;
    int b = 10;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    Swapper<int> swapper;
    swapper.Swap(a, b);

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}


