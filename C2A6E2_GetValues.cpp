//
// Aladin Sidahmed U08614258 
// aladin.sidahmed@gmail.com
// C/C++ Programming II 
// Section 145010 Ray Mitchell 
// 21 FEB 2020
// C2A6E2_GetValues.cpp
// Operating System: Windows 7 
// Visual Studio Community 2019 Version 16.3.2 
//
// Implements GetValues: Synopsis:
// Prompts the user to input elements whitespace 
// separated floating point values, which it then reads
// with cin and stores into the successive elements of 
// the array in first starting with element 0.
// Return: a pointer to the first element of the array
//

#include <iostream>
using namespace std;

float *GetValues(float *first, size_t elements)
{
    //use the ptr to iterate through memory while preserving the first pointer
    float *ptr = first;
    cout << "Enter " << elements << " floating points:\n";
    for (int arrayIndex = 0; arrayIndex < (int)elements; arrayIndex++, ptr++)
    {
        cin >> *ptr;
    }
    return first;
}
