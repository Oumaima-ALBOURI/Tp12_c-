
#include <iostream>
using namespace std;

class Date {
private:
    int jour;
    int mois;
    int annee;

public:
    // Constructeur
    Date(int j, int m, int a) {
        jour = j;
        mois = m;
        annee = a;
    }

    // Surcharge de l'operateur ==
    bool operator==(const Date& d) const {
        return (jour == d.jour &&
                mois == d.mois &&
                annee == d.annee);
    }

    // Surcharge de l'operateur !=
    bool operator!=(const Date& d) const {
        return !(*this == d);
    }

    // Methode afficher
    void afficher() const {
        cout << jour << "/" << mois << "/" << annee << endl;
    }
};

int main() {

    Date d1(15, 6, 2025);
    Date d2(15, 6, 2025);
    Date d3(20, 7, 2025);

    cout << "Date 1 : ";
    d1.afficher();

    cout << "Date 2 : ";
    d2.afficher();

    cout << "Date 3 : ";
    d3.afficher();

    // Comparaison avec ==
    if (d1 == d2) {
        cout << "d1 et d2 sont identiques." << endl;
    }
    else {
        cout << "d1 et d2 sont differentes." << endl;
    }

    // Comparaison avec !=
    if (d1 != d3) {
        cout << "d1 et d3 sont differentes." << endl;
    }
    else {
        cout << "d1 et d3 sont identiques." << endl;
    }

    return 0;
}
