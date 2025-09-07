#include <stdio.h>

typedef enum {easy=1,hard=2,difficult=3,extreme=4,impossible=5} adventure;
int main() {
    
    adventure stages = impossible;

    printf("%d", stages);
    return 0;
}