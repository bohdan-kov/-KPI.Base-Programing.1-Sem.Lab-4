#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Input number: ";
    cin >> n;


    if (n < 0) {
        cout << "A negative number!" << endl << "Please enter a positive number.";
    }
    else {
        int x0 = 1;
        double result = 0.5 * (x0 + (n / x0));
        double old_result = 0;
        double k = pow(10, -4);

        while (abs(result - old_result) > k) {
            old_result = result;
            result = 0.5 * (result + (n / result));
            cout << result << endl;
        }
    }
}