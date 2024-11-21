#include <iostream>
using namespace std;

void printMultiplesOfTen(int current, int n) {
    if (current > n) {
        return;
    }
    cout << current << " ";
    printMultiplesOfTen(current + 10, n);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    printMultiplesOfTen(10, number);
    cout << endl;

    return 0;
}
