#include <iostream>

using namespace std;

unsigned long long NWD (unsigned long long a, unsigned long long b) {

    unsigned long long tmp;

    while (b != 0) {

        tmp = b;
        b = a % b;
        a = tmp;
    }

    return a;
}

int main() {

    unsigned long long a, b, c, d, nww, nwd, nwd2;
    char znak;
    unsigned long long l1,m1,l2,m2;
    cin >> a >> znak >> b;
    cin >> c >> znak >> d;
    l1 = a;
    l2 = c;
    m1 = b;
    m2 = d;
    nwd = NWD(b, d);
    nww = (b / nwd) * d;

    a = (d / nwd) * a;
    c = (b / nwd) * c;

    nwd2 = NWD(a + c, nww);

    cout<<l1<<"/"<<m1<<" + "<<l2<<"/"<<m2<<" = "<<(a+c)/nwd2<<"/"<<nww/nwd2<<endl;
    return 0;
}
