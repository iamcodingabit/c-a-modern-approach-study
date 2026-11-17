#include<stdio.h>
#define INCHES_PER_POUND 166

int main(void){
    int height, length, width;
    

    printf("Enter the height of box: ");
    scanf("%d", &height);
    printf("Enter the length of box: ");
    scanf("%d", &length);
    printf("Enter the width of box: ");
    scanf("%d", &width);
    int volume = height * length * width;
    int weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Dimensions: %dx%dx%d\n", height, length, width);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %.d\n", weight);
    return 0;
}