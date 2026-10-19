#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    const double KURSAS_GBP = 0.8729;
    const double KURSAS_USD = 1.793;
    const double KURSAS_INR = 104.6918;

    int meniuPasirinkimas = 0;
    cout << "\n=== VALIUTOS KEITYKLA ===" << endl;
    cout << "1. Valiutos kurso palyginimas su euru" << endl;
    cout << "2. Iseiti" << endl;
    cout << "Pasirinkite veiksma (1-2):";
    cin >> meniuPasirinkimas;
    if (meniuPasirinkimas == 2) {
        cout << "Aciu, kad naudojates keitykla. Viso gero!" << endl;
        return 0;
    }
    if (meniuPasirinkimas < 1 || meniuPasirinkimas > 2) {
        cout << "KLAIDA: Nera tokio pasirinkimo. Pasirinkite tarp 1-2"<< endl;
        return 0;
    }

    int valiutosPasirinkimas;
    cout << "\n Pasirinkite valiuta" << endl;
    cout << "1 - GBP (Didziosios Britanijos svaras)" << endl;
    cout << "2 - USD (JAV doleris)" << endl;
    cout << "3- INR (Indijos rupija)" << endl;
    cout << "Jusu pasirinkimas: ";
    cin >> valiutosPasirinkimas;

    double pasirinktasKursas = 0;
    string valiutosPavadinimas = "";

    switch (valiutosPasirinkimas) {
        case 1:
            pasirinktasKursas = KURSAS_GBP;
            valiutosPavadinimas = "GBP";
            break;
        case 2:
            pasirinktasKursas = KURSAS_USD;
            valiutosPavadinimas = "USD";
            break;
        case 3:
            pasirinktasKursas = KURSAS_INR;
            valiutosPavadinimas = "INR";
            break;
        default:
            cout << "Klaida: Tokio valiutos pasirinkimo nera!" << endl;
            return 0;
    }
    cout << fixed << setprecision(2);
    cout << "1.00 EUR = " << pasirinktasKursas << " " << valiutosPavadinimas << endl;

    return 0;
}
