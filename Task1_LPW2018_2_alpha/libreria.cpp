/* Esta libreria es necesaria para el programa en la funcion main *
 * pero tiene errores :-S                                         *
 */

#include <iostream>
#include "libreria.h"
#include <math.h>

static unsigned int var;

void lib_func1(void)
{
    std::cout<<"Esta funcion solo cambia el valor de la variable global var"<<std::endl;
    var = 200;
}

void otros_calculos(void)
{
    /* Serie simple (1/[(x^2) + (x+1)]) para x entre 1 y 199*/
    for(int x=1; x<200; x++)
        //Agregue aqui la formula

    /* Volumen de la esfera */
      //Agregue aqui la formula

    /* Raices de la ecuacion (3*x^2) + (5*x) + 8  = 0 */
      //Agregue aqui la formula

    /* Impedancia tipica de una linea de transmision
     * Z0 = [(R+wL)/(G+wC)]^(1/2)
     * w = frecuencia angular = 2*pi*f, f = 10kHz */
        //Agregue aqui la formula

    /* Constante de fase de una fibra optica
     * B = {[((a^2)-(b^2))*c+(b^2)]^(1/2)}*betacero
     * betacero = w*(mu*epsi)^(1/2)
     * w = frecuencia angular = 2*pi*f, f = 5GHz
     * mu = 0.00000125664
     * epsi = 0.00000000000088542  */

}
