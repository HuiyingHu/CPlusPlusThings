#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;


union myun
{
    struct { int x; int y; int z;}u;
    long long k;
}a;


int main(int argc, char const * argv[])
{
    a.u.x = 4;
    a.u.y = 5;
    a.u.z = 6;
    a.k =(long long)0;
    printf("%d %d %d %llu\n", a.u.x, a.u.y, a.u.z, a.k);

    return 0;
}
