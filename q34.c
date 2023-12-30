#include <stdio.h>

int main(){
    int d;
    printf("ENter the year: ");
    scanf("%d",&d);
    int t=(d-1)%7;
    if((d-1)%4==0){
        t=t+1;
    }
    switch(t){
        case 0:
            printf("Monday");
            break;
        case 1:
            printf("Tuesday");
            break;
        case 2:
            printf("wednesday");
            break;
        case 3:
            printf("Thrusday");
            break;
        case 4:
            printf("Friday");
            break;
        case 5:
            printf("saturday");
            break;
        case 6:
            printf("sunday");
    }
}