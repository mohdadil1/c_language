/* Topic: Functions - static (lexical) scoping
   C uses STATIC scoping: a free variable is looked up where the function
   is WRITTEN, not where it is CALLED. So g() always uses the global x.
   (Under dynamic scoping g() would print 20, the caller's x.)          */
#include <stdio.h>

int x = 10;

void g(void)
{
    printf("g() sees x = %d\n", x);     /* global x: 10 */
}

void f(void)
{
    int x = 20;                          /* local to f, invisible to g */
    printf("f() has local x = %d\n", x);
    g();
}

int main()
{
    f();
    return 0;
}
