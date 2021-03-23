#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

 void calculoEsfera(float pi, float diametro, float *raio, float *area, float *volume){
    *raio=(diametro/2);
    *area= (4*pi*(*raio) * (*raio));
    *volume =((1.333333 * pi) * (*raio * *raio * *raio));
 }
