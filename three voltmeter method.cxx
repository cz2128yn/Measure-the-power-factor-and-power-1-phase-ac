#include <iostream>

using namespace std;

int main()
{
    for (int i=0; i<1000; i++)
{
    double v1, v2, v3, r;
    double cos_phi, power;

	cout << "Measure the power factor and power using three voltmeter method (use [.] for decimals)" << endl;
    cout << "Enter V1: ";
    cin >> v1;
    cout << "Enter V2: ";
    cin >> v2;
    cout << "Enter V3: ";
    cin >> v3;
    cout << "Enter R: ";
    cin >> r;

    double variabel1 = v3*v3 - v1*v1 - v2*v2;
    double variabel2 = 2 * v1 * v2;
    cos_phi = variabel1 / variabel2;
    power = variabel1 / (2 * r);

    cout << "Power Factor is " << cos_phi << endl;
    cout << "Power is " << power << endl;
    cout << ""<< endl;
}
    return 0;
}
