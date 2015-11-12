//
//  hello-1.c
//
//
//  Created by Karan Aditya on 11/8/15.
//
//

#include "hello.h"
#include <stdio.h>
#include <cs50.h>

int main(void){

    printf("Your name please: ");
    string s = GetString();
    printf("Hello, %s\n", s);
}
