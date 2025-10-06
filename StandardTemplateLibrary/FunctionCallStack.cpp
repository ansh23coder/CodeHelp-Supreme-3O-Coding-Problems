// https://www.geeksforgeeks.org/batch/skill-up-cpp/track/su-cpp-day9/article/MTM4NDY1OQ%3D%3D

#include <iostream>
using namespace std;

void D() {
    float d = 40.5f;
    cout << "In function D\n";
}

void C() {
    double c = 30.5;
    cout << "In function C\n";
}

void B() {
    int b = 20;
    C();
    cout << "In function B\n";
}

void A() {
    int a = 10;
    B();
    cout << "In function A\n";
}

int main() {
    A();
    D();
    return 0;
}