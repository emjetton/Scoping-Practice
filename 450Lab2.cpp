#include <iostream>
using namespace std;

int main() {
    int num = 1;
    
for (int i = 0; i < 5; i++) 
{
    int num = num+i;
    
}
cout << num; //the original num is printed out, so the variable in the for statement is not visible
return 0;
}



