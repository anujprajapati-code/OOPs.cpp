#include <iostream>
using namespace std;

void swapNum(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    
    swapNum(&x, &y);
    
    cout << "After Swapping: " << x << " " << y << endl;
    
    return 0;
}
