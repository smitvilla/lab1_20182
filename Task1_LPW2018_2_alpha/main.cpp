#include <iostream>
#include "libreria.h"
#include <math.h>

using namespace std;

extern unsigned int var;

void calcParabolico(void);
void print_results(void);


int main()
{
    unsigned short int 3des = -5;
    lib_func1();
    var = 100;

    var += 3des;

    //Calculando los parametros en la Tierra con g = 9.8 m/s*s
    calcParabolico();
    print_results();

    //Calculando los parametros en la Luna con g = 1.62 m/s*s
    calcParabolico();
    print_results();


    return 0;
}

void calcParabolico(void)
{
    const float g = 9.8;
    char vx0, vy0, x, y, vx, vy;

    vx0 = v0 * cos(ALPHA);
    vy0 = v0 * sin(ALPHA);

    vx = vx0;
    vy = vy0-g*t;

    x = vx*t;
    y = y0+vy0*t-(g*pow(t,2)/2);
}

void print_results(void)
{
    std::cout<<"Los resultados del calculo parabolico son: "<<std::endl;
    std::cout<<"Velocidad en x: "<<vx<<", ";
    std::cout<<"Velocidad en y: "<<vy<<", ";
    std::cout<<"Posicion en x: "<<x<<", ";
    std::cout<<"Posicion en y: "<<y<<std::endl;
}



