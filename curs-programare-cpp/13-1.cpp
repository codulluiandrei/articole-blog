#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;

int main() {
    using namespace boost::multiprecision;

    cpp_int num1 = "12345678901234567890";
    cpp_int num2 = "98765432109876543210";

    cpp_int S = num1 + num2;

    cout << S;
    return 0;
}
