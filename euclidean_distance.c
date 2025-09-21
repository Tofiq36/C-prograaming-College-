#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float x1, y1, x2, y2, distance;
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    float result = pow((x2 - x1), 2) + pow((y2 - y1), 2);
    distance = sqrt(result);
    printf("%.2f", distance);
    return 0;
}
