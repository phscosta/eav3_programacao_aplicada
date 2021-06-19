#include <iostream>
#include <math.h>

using namespace std;

struct tTriangulos
{
    float l1, l2, l3, perimetro, area, hipotenusa;

    //Calcula o Perímetro do Triangulo
    float get_perimetro (float l1, float l2, float l3)
    {
        float p_triangulo = l1 + l2 + l3;
        return this -> perimetro = p_triangulo;
    }

    //Calcula a Área do Triangulo
    float get_area (float l1, float l2, float l3)
    {
        float s_perimetro, a_triangulo;

        //Calculo da área feito a partir da Fórmula de Heron
        s_perimetro = (get_perimetro(l1, l2, l3))/2;

        a_triangulo = sqrt(s_perimetro*(s_perimetro - l1) * (s_perimetro - l2) * (s_perimetro - l3));

        return this -> area = a_triangulo;
    }

    //Calcula a Hipotenusa do Triangulo
    float get_hipotenusa (float l1, float l2, float l3)
    {
        float h_triangulo;

        if (l1 > l2 && l1 > l3)
        {
            h_triangulo = sqrt(pow(l2, 2) + pow(l3, 2));
        }
        else
        {
            if (l2 > l1 && l2 > l3)
            {
                h_triangulo = sqrt(pow(l1, 2) + pow(l3, 2));
            }
            else
            {
                if (l3 > l1 && l3 > l2) {
                    h_triangulo = sqrt(pow(l1, 2) + pow(l2, 2));
                }
            }
        }

        return this -> hipotenusa = h_triangulo;
    }
};