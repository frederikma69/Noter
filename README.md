# Noter

## Basics
- Int prints only the integer of a decimal number i.e. rounding down

## Example of recursive function
``` C
int f(int x, int y) {
  
  if (x <= 0 || y <= 0) {
    return 0;
} else if (x % y == 0 && x > 0 && y > 0) {
    return x + f(x - 1, y);
} else {
    return f(x - 1, y);
}
}
```
## Strings
Using a char you need to terminate with '\0'.
- Example:
``` C
char s[] = {'h', 'e', 'l', 'l', 'o', '\0'};
```
## Const
A const needs to be initialized e.g. const double x = 3.14;
## Forward-declaration
A forward declaration is providing the compiler with information before it is being defined
- Example:
```C
int foo(double x, double y);
```
## Using pointers
- Example that prints 10:
``` c
void func(int* out, int x)
{
    *out = x;
}

int main(void)
{
    int x;
    func(&x, 10);
    printf("%d", x);
    return 0;
}
```
## Use of Arrowpointer '->'
-Example:
``` c
#include <stdio.h>

typedef struct {
    int a;
    double b;
    char c;
} s_t;

void bar(s_t* x)
{
    x->a = 3;
    x->b = 1.2345;
    x->c = 'z';
    
    printf("%d, %lf, %c\n", x->a, x->b, x->c);
}

int main(void)
{
    s_t x;
    bar(&x);
    return 0;
}
```
