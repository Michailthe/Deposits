#include <iostream>
using namespace std;
int main() {
    int  Contribution;
    int Theinterestrate, thedesiredamount, waityears = 0;
    cout << "Enter the deposit amount. " << endl;
    cin >> Contribution;
    cout << " Enter the interest rate" << endl;
    cin >> Theinterestrate;
    cout << " Enter the desired amount" << endl;
    cin >> thedesiredamount;
    while (Contribution < thedesiredamount)
    {
        Contribution += Contribution * Theinterestrate / 100;
        waityears;
    }
    cout << "We`ll have to wait " << waityears << "years" << endl;

}