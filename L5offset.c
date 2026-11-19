#include <stddef.h>
#include <stdio.h>

struct Ruim { char a; int b; char c; };
struct Bom  { int b; char a; char c; };

int main(void) {
    printf("Ruim (%zu bytes): a=%zu, b=%zu, c=%zu\n",
           sizeof(struct Ruim),
           offsetof(struct Ruim, a),
           offsetof(struct Ruim, b),
           offsetof(struct Ruim, c));

    printf("Bom  (%zu bytes): b=%zu, a=%zu, c=%zu\n",
           sizeof(struct Bom),
           offsetof(struct Bom, b),
           offsetof(struct Bom, a),
           offsetof(struct Bom, c));

    return 0;
}
