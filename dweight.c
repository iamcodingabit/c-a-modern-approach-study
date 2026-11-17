#include<stdio.h>

int main(void){
    int height = 8;
    int length = 12;
    int width = 10;
    int volume = height * length * width;
    float weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", height, length, width);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %.2f\n", weight);
    return 0;
}