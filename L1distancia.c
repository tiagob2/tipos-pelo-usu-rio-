#include <math.h>
#include <stdio.h>

struct ponto {
    double x;
    double y;
};

int main(void) {
    struct ponto a = {0.0, 0.0};
    struct ponto b = {3.0, 4.0};

    double dx = b.x - a.x;
    double dy = b.y - a.y;
    double distancia = sqrt(dx * dx + dy * dy);

    printf("Distancia = %.2f\n", distancia);
    return 0;
}
