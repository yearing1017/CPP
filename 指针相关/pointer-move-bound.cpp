#include <iostream>
using namespace std;

#define PRINT_ARRAY(array, n) \
for (int idx = 0; idx < (n); idx++) \
    cout << "array[" << idx << "] = " << (array)[idx] << endl;

int main()
{
    int numbers[4] = {0, 1, 2, 3};
    PRINT_ARRAY(numbers, 4)

    int * p = numbers + 1; // point to the element with value 1
    p++; // point to the element with value 2

    cout << "numbers = " << numbers << endl;
    cout << "p = " << p << endl;

    *p = 20; //change 2 to 20
    *(p-1) = 10; //change 1 to 10
    p[1] = 30; //change 3 to 30

    PRINT_ARRAY(numbers, 4)

    return 0;
}

int bound()
{
    int a;
    int num = 0;
    int * p = &num;

    p[-1] = 2; //out of bound
    p[0] = 3; //okay
    *(p+1) = 4; //out of bound

    cout << "num = " << num << endl;
    
    return 0;
}