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
    cout << "2. Valiutos pirkimas(EUR -> pasirinkta valiuta)" << endl;
    cout << "3. Iseiti" << endl;
    cout << "Pasirinkite veiksma (1-3):";
    cin >> meniuPasirinkimas;
    if (meniuPasirinkimas == 3) {
        cout << "Aciu, kad naudojates keitykla. Viso gero!" << endl;
        return 0;
    }
    if (meniuPasirinkimas < 1 || meniuPasirinkimas > 3) {
        cout << "KLAIDA: Nera tokio pasirinkimo. Pasirinkite tarp 1-3"<< endl;
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
    if (meniuPasirinkimas == 1) {
        cout << "1.00 EUR = " << pasirinktasKursas << " " << valiutosPavadinimas << endl;
    }
    else if (meniuPasirinkimas == 2) {
        double sumaEUR;
        cout << "Iveskite EUR suma, kuria norite konvertuoti: ";
        cin >> sumaEUR;

        if (sumaEUR <= 0) {
            cout << "KLAIDA: Suma turi buti teigiama!" << endl;
            return 0;
        }
        double gautaSuma = sumaEUR * pasirinktasKursas;
        cout << "\n--- SEKMINGAS PIRKIMAS! ---" << endl;
        cout << "Pradine suma: " << sumaEUR << "EUR" << endl;
        cout << "Gauta suma: " << gautaSuma << " " << valiutosPavadinimas << endl;
    }
    return 0;
}
