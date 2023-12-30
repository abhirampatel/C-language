#include <stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("Enter the x-coordinate-x1:");
    scanf("%d",&x1);
    printf("Enter the x-coordinate-y1:");
    scanf("%d",&y1);
    printf("Enter the x-coordinate-x2:");
    scanf("%d",&x2);
    printf("Enter the x-coordinate-y2:");
    scanf("%d",&y2);
    printf("Enter the x-coordinate-x3:");
    scanf("%d",&x3);
    printf("Enter the x-coordinate-y3:");
    scanf("%d",&y3);
    float slope1=(y2-y1)/(x2-x1);
    float slope2=(y3-y2)/(x3-x2);
    if(slope2==slope1){
        printf("points lies on straight line");
    }else{
        printf("not");
    }
    
}