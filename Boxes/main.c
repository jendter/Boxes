//
//  main.c
//  Boxes
//
//  Created by Josh Endter on 6/9/15.
//  Copyright (c) 2015 Josh Endter. All rights reserved.
//

#include <stdio.h>

// Declare structs
typedef struct {
    float length;
    float width;
    float height;
} Box;

// Declare functions
float getBoxVolume(Box box);
Box setBox(float length, float width, float height);
float compareBoxVolume(Box box1, Box box2);


int main(int argc, const char * argv[]) {
    
    Box biggerBox = setBox(3.0, 7.0, 5.0);
    Box smallerBox = setBox(1.0, 3.0, 2.2);
    
    float biggerBoxVolume = getBoxVolume(biggerBox);
    float smallerBoxVolume = getBoxVolume(smallerBox);
    
    printf("The volume of \n Box 1 is %f\n Box 2 is %f \n\n", biggerBoxVolume, smallerBoxVolume);
    
    float comparisonVolume = compareBoxVolume(biggerBox,smallerBox);
    
    printf("Box 1 is %f times larger than Box 2", comparisonVolume);
    
    return 0;
}

float getBoxVolume(Box box) {
    float volume;
    
    // If the box exists
    if (box.length && box.width && box.height) {
        volume = box.length * box.width * box.height;
    } else {
        volume = 0.0;
    }

    return volume;
}

Box setBox(float length, float width, float height) {
    Box newBox;
    
    if (length && width && height) {
        newBox.length = length;
        newBox.width = width;
        newBox.height = height;
    } else {
        newBox.length = 0.0;
        newBox.width = 0.0;
        newBox.height = 0.0;
    }
    
    return newBox;
    
}

float compareBoxVolume(Box box1, Box box2) {
    return ( getBoxVolume(box1) / getBoxVolume(box2) );
}

