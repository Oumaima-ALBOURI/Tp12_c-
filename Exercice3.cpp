
#include <iostream>
#include <stdexcept>
using namespace std;

class Tableau {
private:
    int* data;
    int taille;

public:
    // Constructeur
    Tableau(int t) {
        taille = t;
        data = new int[taille];

        // Initialisation des elements
        for (int i = 0; i < taille; i++) {
            data[i] = 0;
        }
    }

    // Surcharge de l'operateur []
    int& operator[](int indice) {

        if (indice < 0 || indice >= taille) {
            throw out_of_range("Indice invalide !");
        }

        return data[indice];
    }

    // Destructeur
    ~Tableau() {
        delete[] data;
    }

    // Afficher le tableau
    void afficher() const {
        for (int i = 0; i < taille; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    try {
        // Creation d'un tableau de 5 elements
        Tableau tab(5);

        // Remplissage du tableau
        for (int i = 0; i < 5; i++) {
            cout << "Donner l'element " << i << " : ";
            cin >> tab[i];
        }

        // Affichage
        cout << "\nContenu du tableau : ";
        tab.afficher();

        // Acces a un element
        cout << "\nElement a l'indice 2 : " << tab[2] << endl;

        // Test d'un indice invalide
        cout << "Element a l'indice 10 : " << tab[10] << endl;
    }
    catch (const out_of_range& e) {
        cout << "Erreur : " << e.what() << endl;
    }

    return 0;
}
