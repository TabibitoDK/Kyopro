#include <iostream>
#include <string>

using namespace std;

int main() {   
    int N;
    int error = 0;
    cin >> N;
    bool login = 0;    
    for (int i=0; i<N; i++) {
        string inp;
        cin >> inp;
        if (inp == "private" && login == 0) {
            error++;
        }
        else if (inp == "login") {
            login = 1;
        }
        else if (inp == "logout") {
            login = 0;
        }
    }
    cout << error;
    
    return 0;
}
