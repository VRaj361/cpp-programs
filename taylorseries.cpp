/*
    Author:--Vraj Patel
    Objective:--taylor series
    DOC:--
*/
#include <iostream>
#include <math.h>
using namespace std;
float rad(float deg)
{
    float r;
    float pi = 3.14;
    r = (pi * deg) / 180;
    return r;
}
int fact(int j)
{
    int fac = 1;
    for (int i = 1; i <= j; i++)
    {
        fac = i * fac;
    }
    return fac;
}

float si(float r)
{
    float a, b, c, ans = 0;
    int j = 1, m = 2;
    for (int i = 0; i < 4; i++)
    {
        float sum = 1;

        int rem;
        rem = m % 2;
        if (rem == 0)
        {
            for (int k = 1; k <= j; k++)
            {

                sum = sum * r;
            }
    
            j += 2;
            c = fact((2 * i) + 1);
            
            ans = ans + ((1) * (sum)) / c;

        }
        else
        {
            for (int k = 1; k <= j; k++)
            {
                sum = sum * r;
            }
            
            j += 2;
            c = fact((2 * i) + 1);
            ans = ans + ((-1) * (sum)) / c;
        }
        m++;
    }
    return ans;
}

int main()
{
    float n, ans;
    cout << "enter the degree value::" << endl;
    cin >> n;
    n = rad(n);
    ans = si(n);
    cout << "Answer is ::" << ans;
    return 0;
}