#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    const double KURSAS_GBP = 0.8729;
    const double KURSAS_USD = 1.793;
    const double KURSAS_INR = 104.6918;

    int meniuPasirinkimas = 0;

    while (meniuPasirinkimas != 4) {
        cout << "\n=== VALIUTOS KEITYKLA ===" << endl;
        cout << "1. Valiutos kurso palyginimas su euru" << endl;
        cout << "2. Valiutos pirkimas(EUR -> pasirinkta valiuta)" << endl;
        cout << "3. Valiutos pardavimas (pasirinkta valiuta -> EUR)" << endl;
        cout << "4. Iseiti" << endl;
        cout << "Pasirinkite veiksma (1-4):";
        cin >> meniuPasirinkimas;
        if (meniuPasirinkimas == 4) {
            cout << "Aciu, kad naudojates keitykla. Viso gero!" << endl;
            break;
        }
        if (meniuPasirinkimas < 1 || meniuPasirinkimas > 4) {
            cout << "KLAIDA: Nera tokio pasirinkimo. Pasirinkite tarp 1-4"<< endl;
            continue;
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
                continue;
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
                continue;
            }
            double gautaSuma = sumaEUR * pasirinktasKursas;
            cout << "\n--- SEKMINGAI NUPIRKTA! ---" << endl;
            cout << "Pradine suma: " << sumaEUR << "EUR" << endl;
            cout << "Gauta suma: " << gautaSuma << " " << valiutosPavadinimas << endl;
        }
        else if (meniuPasirinkimas == 3) {
            double sumaValiuta;
            cout << "Iveskite " << valiutosPavadinimas << "Suma, kuria norite parduoti: ";
            cin >> sumaValiuta;

            if (sumaValiuta <= 0) {
                cout << "KLAIDA: Suma turi buti teigiama!" << endl;
                continue;
            }
            double gautiEurai = sumaValiuta / pasirinktasKursas;
            cout << "\n--- SEKMINGAI PARDUOTA! ---" << endl;
            cout << "Pradine suma: " << sumaValiuta << " " << valiutosPavadinimas << endl;
            cout << "Gauta suma: " << gautiEurai << "EUR" << endl;
        }
    }
    return 0;
}
