#include <iostream>
#include <string.h>
#include "Student.h"

using namespace std;

int main()
{
    Student s1(20216238, 20, "Pham Bao Thanh", "Thai Binh");
    Student s2;
    s1.Input();
    s2.Input();
    s1.Display();
    s2.Display();
    return 0;
}