#include <iostream>
#include <stdexcept>
using namespace std;

int calcsum(int a, int b) {
    return a+b;
}
int calcdiv(int a, int b) {

    if (b == 0) {
        throw runtime_error("calcdiv: Nollalla jakaminen ei ole sallittua.");
    }
    return a/b;
}
int retsum(int a, int b) {
    return a+b;
}
float retdiv(int a, int b) {
    if (b== 0) {
        throw runtime_error("retdiv: nollalla jakaminen ei ole sallittua.");
    }
    return static_cast<float>(a) / b;
}
int main() {

    int a, b;
    cout << "anna ensimmainen luku: ";
    cin >> a;

    cout << "anna toinen luku: ";
    cin >> b;

    int summa1 = calcsum(a,  b);
    int summa2 = retsum(a, b);

    cout << "calcsum: " << summa1 << endl;
    cout << "retsum: " << summa2 << endl;

    try {
        int jako1 = calcdiv (a, b);
        cout << "calcdiv: " << jako1 << endl;
    } catch (const runtime_error& e){
        cout << "virhe calcdiv: " << e.what() << endl;
    }
    try {
        float jako2 = retdiv(a, b);
        cout << "retdiv: " << jako2 << endl;
    } catch (const runtime_error& e) {
        cout << "virhe retdiv; " << e.what() << endl;
    }



    return 0;
}
