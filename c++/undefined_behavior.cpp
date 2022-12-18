#include <iostream>
using namespace std;


int main(){
    int array[4] = {1,2,3,4};

    cout << "Position 1 have:" << array[0] << endl;
    cout << "Position 2 have:" << array[1] << endl;
    cout << "Position 3 have:" << array[2] << endl;
    cout << "Position 4 have:" << array[3] << endl;
    
    //Acessing a position that do not exist in our array 
    cout << "Position 5 have:" << array[4] << endl; 

    return 0;
}
