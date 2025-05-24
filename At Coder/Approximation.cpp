#include <iostream>
#include <math.h>
using namespace std;

int Approximation(int A, int B)
{
    return (A * 2 + B) / (2 * B);
}

int main()
{
    int A, B;
    cin >> A >> B;
    int result = Approximation(A, B);
    cout << result;
}

/*
Also,but will fail some test case
int Approximation(int A, int B)
{
    float x = (float)A / B;
    int rnd = round(x);
    return rnd == 0 ? 1 : rnd;
}

int main()
{
    int A, B;
    cin >> A >> B;
    int result = Approximation(A, B);
    cout << result;
}
*/