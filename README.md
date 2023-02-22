# Noter

## Basics
- Int prints only the integer of a decimal number i.e. rounding down.

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
## Use of Arrow operator '->'
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
## Integer array
Example:
``` c
#include <stdio.h>

int main(void ) {
int arr[] = {1,2,3,4,5,6,7};
for (int i = 1; i < 6; ++i)
{
printf("%d,", arr[i]);
}
return 0;
}
```
- The ouput will in this example be the array [2,3,4,5,6]. It skips the first element.
## Switch-statement
- Example:
``` c
#include <stdio.h>

int main(void) {
    char c;
    scanf("%c", &c);
    printf("%c", c);
    switch (c) {
        case 'a':
            printf("1");
            break;
        case 'b':
            printf("1");
            break;
        default:
            printf("!");
    }
    printf("\n");
    return 0;
}
```
Here the statemnt is finished with the 'default' statemnt that is used if none of the other cases match.
## '=' or '=='
In C the = operator is used to assign a value to a variable, where == is used to compare two numbers.
An example of this use:
```c
int main(void ) {
    int x;
    scanf("%d", &x);
    if(x == 0) {
        printf("user put 0\n");
    }
    else
    {
        printf("User did not put 0\n");
    }
 return 0;
} 
````
IT
``` c
int main(void ) {
    int number;
    int guess= 0;
    srand((unsigned) time(0));
    number = 1 + (number % 20); 
    do{
        printf("Input your guess\n");
        scanf("%d", &guess);
    } while(guess == number); 
    printf("You won!\n");
    return 0;
}
```
## Output of array
```c
int main(void ) {
    int ai[] = {1, 1};
    if((ai[1] = 0))
        printf("%d", ai[0]);
    else
        printf("%d,", ai[1]);
 return 0;
}
```
The output of this program will be '0'. This is because the expression (ai[1] = 0) assigns the value 0 to the second element of the array.
## Free Malloc
- Malloc is freed after use. E.g. before return statement.
## Printing a triangle
```c
- This will print 
0
1     *
2    **
3   ***
4  ****
5 *****
#include <stdio.h>

int main(void ) {
    int i;
    int j;
    for (i = 0; i < 6; ++i) {
        printf("%d", i);
        for (j = 6; j > 0; --j) {
            if(j > i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
```
## Use of return NULL;
- Example


```c
#include <stdio.h>

typedef struct {
    int key;
    char name[10];
} data_t;

data_t* find_min(data_t* arr, int length) {
    if (length <= 0) {
        return NULL;  // If length is less than or equal to 0, return a null pointer
    }

    data_t *r = &arr[0];  // Initialize r to point to the first element of the array
    for (int i = 1; i < length; ++i) {
        if (arr[i].key < r->key) {  // If the key of the current element is less than r's key
            r = &arr[i];  // Set r to point to the current element
        }
    }
    return r;  // Return the pointer to the element with the minimum key
}
```