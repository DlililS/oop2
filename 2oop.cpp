#include <iostream>
using namespace std;
float znach(int firstNumber, int secondNumber, char zn);
void funk() {

    int n1 = 0, n2 = 0;
    char zn = '+';

    cout
        << "Enter first number, operation and second number." << endl;
    cin >> n1 >> zn >> n2;

    cout << znach(n1, n2, zn) << endl;


}
int main() {
    void(*ykaz)();
    ykaz = funk;
    ykaz();
}

float znach(int n1, int n2, char zn) {

    switch (zn) {

    case '+':
        return n1 + n2;

    case '-':
        return n1 - n2;

    case '*':
        return n1 * n2;

    case '/':
        if (n2 != 0) {
            return n1 / n2;
        }
        else {
            cout << "It is impossible to divide by ";
        }

    }

    return 0;

}