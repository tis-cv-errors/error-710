#include <stdlib.h>
#include <assert.h>

int my_func(int x) {
    
    assert(x > 0);
    
    return -x;
    
}

int foo(void) {
    while (1) {
    }
}

int test1(void)
{
    int x = 0, y = 0;
    
    y = my_func(x);
    
    return 0;
}

int test2(void)
{
    while (1) {}
    //foo();
    
    return 0;
}

int test3(void)
{
    exit(1);
    
    return 0;
}
