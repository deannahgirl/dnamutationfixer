#include <iostream>
#include "Strand.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    Strand theStrand = Strand("abccat");
    cout << theStrand.toString();

    return 0;
}