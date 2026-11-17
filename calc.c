#include<stdio.h>

int main(void){
    int height, length, width, volume;
    float profit, loss;
    
    height = 8;
    length = 12;
    width = 10;
    profit = 2150.48f;
    volume = height * length * width;

    printf("height: %d\nlength: %d\nwidth: %d\n", height, length, width);
    printf("volumne (height*length*width): %d\n", volume);
    printf("profit: %.2f\n", profit);
    return 0;
}