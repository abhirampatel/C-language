#include <stdio.h>
#include <math.h>
//U.Abhiram Patel ch.en.u4cys21087

int main() {
    float x, y, h=5, k=6, r=4, distance;

    printf("Enter the x-coordinate of the point: ");
    scanf("%f", &x);

    printf("Enter the y-coordinate of the point: ");
    scanf("%f", &y);
    distance = sqrt((x - h) * (x - h) + (y - k) * (y - k));

    if (distance < r) {
        printf("The point is inside the circle.\n");
    } else if (distance > r) {
        printf("The point is outside the circle.\n");
    } else {
        printf("The point is on the circumference of the circle.\n");
    }

    return 0;
}
