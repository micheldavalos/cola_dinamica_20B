#include <iostream>
#include "cola.h"
using namespace std;

int main() {
    Cola<int> cola;

    cola.push(1);
    cola.push(2);
    cola.push(3);
    cola.push(4);

    while (!cola.empty())
    {
        cout << *cola.front() << endl;
        cola.pop();
    }
    
    
    return 0;
}