#include "LongLong.h"
#include <iostream>
int main()
{
	LongLong A, B;
    cout << "\nValue1 = " << endl;
    cin >> A;
    cout << A;

    cout << "\nValue2 = " << endl;
    cin >> B;
    cout << B;

    cout << "\nA-B = " << endl;
    cout << A-B;

    cout << "A++" << endl; cout << A++ << endl;
    cout << "A--" << endl; cout << A-- << endl;
    cout << "++A" << endl; cout << ++A << endl;
    cout << "--A" << endl; cout << --A << endl;
    if (A == B) { cout << "A==B" << endl; }
    if (A != B) { cout << "A!=B" << endl; }
	return 0;
}