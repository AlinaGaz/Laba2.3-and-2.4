
#include <decl.h>
using namespace std;
void func3(int a) {
    int static m = 0;
    cout << a + m << endl;
    m = a;
}