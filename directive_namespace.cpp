#include <iostream>
using namespace std;


// first name space
namespace first_space {
    void func() {
        cout << "Insidee first_space" << endl;
    }
}

// scond name space
namespace second_space {
    void func() {
        cout << "Inside second_space" << endl;
    }
}

using namespace first_space;
int main () {
    // This calls function from first name space
    func();

    return 0;
}