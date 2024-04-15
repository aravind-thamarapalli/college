#include <iostream>
using namespace std;

int main() {
    double num, den, res;

    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> den;

    try {
        if (den == 0)
            throw 0;
        res = num / den;
        cout << num << " / " << den << " = " << res << endl;
    } catch (int exception) {
        cout << "Error: Cannot divide by " << exception << endl;
    }

    return 0;
}
