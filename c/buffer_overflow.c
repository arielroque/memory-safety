#include <stdio.h>

int main(){

    int array[4] = {1,2,3,4};
    int* pointer = &array[4];

    printf ("Position 1 have: %i \n",array[0]);
    printf ("Position 2 have: %i \n",array[1]);
    printf ("Position 3 have: %i \n",array[2]);
    printf ("Position 4 have: %i \n",array[3]);

    *pointer = 2000;
    
    //Acessing a position that do not exist in our array 
    printf ("Position 5 have: %i \n",array[4]); 

}