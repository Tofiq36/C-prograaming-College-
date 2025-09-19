#include<stdio.h>
#include<math.h>
int main(){
    float x1, x2, y1, y2, distance;
    printf("Enter X-Coordinates (x1, x2): \n");
    scanf("%f%f", &x1, &x2);
    printf("Enter Y-Coordinates (y1, y2): \n");
    scanf("%f%f", &y1, &y2);
    float result = pow((x2 - x1), 2) + pow((y2 - y1), 2);
    distance = sqrt(result);
    printf("Distance between two points is %f", distance);
    return 0;
}