#include <stdio.h>

typedef enum  {Red= 1,Yellow= 2,Green=3}trafficLights;

int main() {
    
    trafficLights colors = Green;

    printf("%d", colors);

    return 0;
}