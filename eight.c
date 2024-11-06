//Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
#include<stdio.h>
int main(){
    int x, y; 
    printf("Enter the X coordinate: "); 
    scanf("%d", &x); 
    printf("\nEnter the Y coordinate: ");; 
    scanf("%d", &y); 
    if(x > 0 && y > 0){
        printf("1st Quadrant\n"); 
    } 
    else if(x < 0 && y > 0){
        printf("2nd Quadrant\n"); 
    }
    else if(x < 0 && y < 0){
        printf("3rd Quadrant\n"); 
    }
    else if(x > 0 && y < 0){
        printf("Fourth Quadrant\n"); 
    }
    else{
        printf("The point points to origin\n"); 
    }
    return 0; 
}