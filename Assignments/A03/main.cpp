/**
* Angel Badillo
* CMPS 4883 Programming Techniques
* 08/30/22
*/
#include <iostream>

#define newl "\n"

using namespace std;

int main() {
    long B = 0, A = 0;
    
    while (cin >> A >> B) {
        
        cout << (abs(A-B)) << newl;
    }
    return 0;
}
