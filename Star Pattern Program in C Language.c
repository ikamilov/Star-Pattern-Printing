/* The Output:

Please Enter The Height Of The Pattern You Want: 
5
* 
* * * 
* * * * * 
* * * 
* 
Do you want to make a another pattern < Y or N >
y
Please Enter The Height Of The Pattern You Want: 
9
* 
* * * 
* * * * * 
* * * * * * * 
* * * * * * * * * 
* * * * * * * 
* * * * * 
* * * 
* 
Do you want to make a another pattern < Y or N >
y
Please Enter The Height Of The Pattern You Want: 
7
* 
* * * 
* * * * * 
* * * * * * * 
* * * * * 
* * * 
* 
Do you want to make a another pattern < Y or N >
y
Please Enter The Height Of The Pattern You Want: 
6
* 
* * * 
* * * * * 
* * * * * 
* * * 
* 
Do you want to make a another pattern < Y or N >
n
Good bye!!!

*/

//
//  main.c
//  Author: Islam Kamilov
//
//  Created by Islam Kamilov on 3/31/15.
//  Copyright (c) 2015 Islam Kamilov. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Functions
void printPattern(int height);


int main() {
    //Local Functions
    int height;
    char ans;
    //insert code here
    
    do {
    printf("Please Enter The Height Of The Pattern You Want: \n");
    scanf("%d", &height);
        printPattern(height);
    printf("Do you want to make a another pattern < Y or N >\n");
    scanf(" %c", &ans);
        
    }while (ans == 'Y' || ans == 'y');
    
    if (ans == 'N' || ans == 'n') {
        printf("Good bye!!!\n");
    }
    
    return 0;
    
}//Main Menu Code



void printPattern(int height) {
    //printPattern Function
    
    for (int row = 0; row<=height; row++) {
        
        for (int col = 0; col<row; col++) {
            if (row%2 != 0) {
                printf("* ");
            }
            
        }
            if (row%2 != 0) {
                printf("\n");
        }
    }
    for (int row = height-1; row >= 0; row--) {
        for (int col = 0; col<row; col++) {
            if (row%2 != 0) {
                printf("* ");
            }
        }
            if (row%2 != 0) {
                printf("\n");
        }
    }
    
}//Patern Printing Function







