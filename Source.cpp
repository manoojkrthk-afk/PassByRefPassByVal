#include <iostream>

using namespace std;

void multiplyby3byref(int& x) { x *= 3; };
void multiplyby3byptr(int* ptr) { *ptr *= 3; };

int main()
{
    int y = 3;
    int* p = &y;

    cout << "\n This is an example of pointers ,pass-by-reference and pass-by-pointer functions including change of variable from calling fucntion";
    cout << "\n Value of y is " << y;
    cout << "\n Address of y is " << &y;

    multiplyby3byref(y);
    cout << "\n Change variable in calling function by reference argument y " << y;

    multiplyby3byptr(p);
    cout << "\n Change variable in calling function by pointer argument y " << y;
	cin.get() ;
	return 0;
}