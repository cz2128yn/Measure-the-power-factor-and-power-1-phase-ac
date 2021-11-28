#include <iostream>

using namespace std;

int main()
{
    for (int i=0; i<1000; i++)
{
    double a1, a2, a3, r;
    double cos_phi, power;

	cout << "Measure the power factor and power using three ammeter method (use [.] for decimals)" << endl;
    cout << "Enter A1: ";
    cin >> a1;
    cout << "Enter A2: ";
    cin >> a2;
    cout << "Enter A3: ";
    cin >> a3;
    cout << "Enter R: ";
    cin >> r;

    double variabel1 = a3*a3 - a1*a1 - a2*a2;
    double variabel2 = 2 * a1 * a2;
    cos_phi = variabel1 / variabel2;
    power = a2*r*a1*_phi;

    cout << "Power Factor is " << cos_phi << endl;
    cout << "Power is " << power << endl;
	cout << ""<< endl;
}
    return 0;
}
