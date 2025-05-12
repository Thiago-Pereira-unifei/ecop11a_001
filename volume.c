#include "volume.h"
#include <math.h>

#define M_PI 3.14159265358979323846

// Implementação das funções para cálculo de volumes
float cubo(float aresta) {
    return aresta * aresta * aresta;
}

float paralelepipedo(float largura, float profundidade, float altura) {
    return largura * profundidade * altura;
}

float esfera(float raio) {
    return (4.0f / 3.0f) * M_PI * raio * raio * raio;
}

float cilindro(float raio, float altura) {
    return M_PI * raio * raio * altura;
}

float piramide(float largura, float profundidade, float altura) {
    return (largura * profundidade * altura) / 3.0f;
}
