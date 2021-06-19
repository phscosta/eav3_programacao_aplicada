#include <iostream>
#include "prop_triangulos.cpp"

using namespace std;

//Questão 4

int main ()
{
    tTriangulos new_triangulo;

    cout << "Defina o tamanho dos lados do Triangulo (em cm)" << endl;
    cout << "Informe o lado 1: ";
    cin >> new_triangulo.l1;
    cout << "Informe o lado 2: ";
    cin >> new_triangulo.l2;
    cout << "Informe o lado 3: ";
    cin >> new_triangulo.l3;

    cout << endl << "O perimetro do Triangulo e: " << new_triangulo.get_perimetro(new_triangulo.l1, new_triangulo.l2, new_triangulo.l3) << endl;
    cout << "A area do Triangulo e: " << new_triangulo.get_area(new_triangulo.l1, new_triangulo.l2, new_triangulo.l3) << endl;
    cout << "A hipotenusa do Triangulo e: " << new_triangulo.get_hipotenusa(new_triangulo.l1, new_triangulo.l2, new_triangulo.l3) << endl;

    return 0;
}