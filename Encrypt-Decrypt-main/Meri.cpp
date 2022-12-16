// Nairi19-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Shablon.h"
using namespace std;

int main(){
    char input[5];
    char output[5];
    
    strcpy_s(input, 5, "Aren");
    unsigned int len = 4;
    Shablon sh;
    sh.encrypt(input, 4, output, len);
    *(output + len) = 0;
    cout << output;
}
 
