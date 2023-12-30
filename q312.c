#include <stdio.h>
int main(){
    float x, y;

    printf("Enter the x-coordinate of the point: ");
    scanf("%f", &x);

    printf("Enter the y-coordinate of the point: ");
    scanf("%f", &y);

    if (x == 0 && y == 0) {
        printf("The point is at the origin.");
    } else if (x == 0 && y != 0) {
        printf("The point lies on the y-axis.");
    } else if (y == 0 && x != 0) {
        printf("The point lies on the x-axis.");
    } else {
        printf("The point is neither on x-axis nor y-axis.\n");
    }

    return 0;
}
