#include <iostream>
using namespace std;




void doSomething(int &num)
{
    num = num + 10;
    cout << " " << num << endl;
}
int main() {
    int x = 1;
    // int y = 3;

    // switch (x) {
    //     case 1:
    //         cout << "x is 1." << endl;
    //         switch (y) {
    //             case 1:
    //                 cout << "y is 1." << endl;
    //                 break;
    //             default:
    //                 cout << "y is not 1." << endl;
    //         }
    //         break;
    //     default:
    //         cout << "x is not 1." << endl;
    // }

    // Pass by Reference
    doSomething(x);
    cout << x;
    return 0;
}
