#include <stdio.h>
#include "average.h"


int main() {
    double arr[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};

    double result = average(7, arr);
    
    /* increased the average to be 1-7 and added a joke to the return */
	
    printf("On an odd note, this is my GPA\n");
    printf("The average of the numbers of 1-7 is: %.4f\n", result);
    return 0;    
}
