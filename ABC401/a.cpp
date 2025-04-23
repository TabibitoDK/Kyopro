#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    if (num > 199 && num < 300) {
        cout << "Success";
    }
    else {
        cout << "Failure";
    }
    return 0;
}

