//
// Aladin Sidahmed U08614258 
// aladin.sidahmed@gmail.com
// C/C++ Programming II 
// Section 145010 Ray Mitchell 
// 21 FEB 2020
// C2A6E2_SortValues.cpp
// Operating System: Windows 7 
// Visual Studio Community 2019 Version 16.3.2 
//
// Implements SortValues: Sorts the array in first in descending 
// order using the bubble sort algorithm. 
// Return: a pointer to the first element of the sorted array
//

float *SortValues(float *first, size_t elements)
{
    // Last keeps track of the bubble
    float *last = first + elements - 1; 
    bool didSwap = false;
    do
    {
        float *current = first;
        didSwap = false;
        while (current < last)
        {
            //crntPtr is a pointer to the value that would be compared
            //before current becomes the value of the next item in the 
            //array
            float *crntPtr = current++;
            if (*crntPtr < *current)
            {
                float temp = *crntPtr;
                *crntPtr = *current;
                *current = temp;
                didSwap = true;
            }
        }
        --last;
    } while (didSwap);
    return first;
}
