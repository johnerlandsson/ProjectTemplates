#include <iostream>
#include <cstdlib>
#include "TestClassExe.h"
#include "LibClass.h"

using namespace std;

int main(int argc, char **argv) {
    TestClassExe tc;
    tc.pubmeth();

    LibClass lc;
    lc.pubmeth();

    cout << "Hello world" << endl;

    return EXIT_SUCCESS;
}
