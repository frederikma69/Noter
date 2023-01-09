# Noter



## Pointers

- Declaring a pointer:
```
1 int* x;
2 //Here, we have declared a pointer "x" of type int.
3
4 //You can also declare pointers in the two following ways.
5
6 int *x1;
7 int* x2 ;
8 //Let’s take another example of declaring pointers:
9
10 int* x1, x2;
11 //Here , we have declared a pointer x1 and a "normal" variable x2.
```
- Assigning addresses to Pointers

```
1 int* ptrX, c;
2 c = 5;
3 ptrX = &c;
4 //Here, 5 is assigned to the variable 'c'. And, the address of c is assigned to the pointer.
```
- Changing Value Pointed by Pointers

```
1 int* ptrX, c;
2 c = 5;
3 ptrX = &c;
4 c = 1;
5 printf("%d", c); // Output : 1
6 printf("%d", *ptrX); // Ouptut : 1
7 //We have assigned the address of c to the ptrX pointer.
8
9 //Then, we changed the value of c to 1. Since ptrX and the address of c is the same, *ptrX gives us 1.
```

- Printing a variable and it’s memory address:
```
1 #include <stdio.h>
2 int main()
3 {
4   int x = 5;
5   printf("x = %d\n", x);
6
7 // Notice the use of & before x
8   printf("Address of x: %p", &x);
9   return 0;
10 }
```
```
Output:
x = 5
Address of x: 2686778 //This of course changes
```
## Arrays & pointers:

- Print addresses of array elements:
```
1 #include <stdio.h>
2 int main(){
3   int x [4];
4   int i;
5
6   for (i = 0; i < 4; ++9){
7    printf("&x[%d] = %p\n = %p\n " , i , &x [ i ] ) ;
8   }
9
10   printf("Address of array X: %p", x);
11
12   return 0;
13 }
```
```
Outputs: &x[0] = 1450734448
&x[1] = 1450734452
&x[2] = 1450734456
&x[3] = 1450734460
Address of array x: 1450734448
```
There is a difference of 4 bytes between two array elements. That is because the size of int is 4 bytes. The address of &x[0] and x is the same. This is
because the variable name x points to the first element of the array.
```
1 //Here, we have decalred an array 'x' of 6 elements. To access elements of the array
  elements of the array, we have used pointers.
2 #include <stdio.h>
3 int main()
4 {
5   int i, x[6], sum = 0;
6
7   printf("Enter 6 numbers: ");
8
9   for(i = 0; i < 6; ++i) {
10  //Equivalent to scanf("%d", &x [i]);
11  scanf("%d", x+i);
12
13   //Equivalent to sum += x[i]
14   sum +=*(x+i);
15  }
16
17  printf("Sum = %d", sum);
18
19  return 0;
20 }
```
```
Output: Enter 6 numbers: 2
3
4
4
12
4
Sum = 29
```
```
1 //&x[2] (the address of the third element) is assigned to the ptr pointer.
 Hence, 3 was dispayed when we printed the *ptr.
2 //printing *(ptr+1) gives us the fourth element. Printing *(ptr-1) gives us the second element.
3 #include <stdio.h>
4 int main() {
5
6  int x[5] = {1, 2, 3, 4, 5};
7  int* ptr;
8
9  //ptr is assigned the address of the third element
10  ptr = &x[2]; 
11
12  printf("*ptr = %d \n", *ptr); // 3
13  printf("*(ptr+1) = %d \n", *(ptr+1)); // 4
14  printf("*(ptr-1) = %d", *(ptr-1));  // 2
15
16  return 0;
17 }
```
```
*ptr = 3 
*(ptr+1) = 4 
*(ptr-1) = 2
```


## Structs:

- Pointers to structs:
```
1 #include <stdio.h>
2 struct person
3 {
4    int age;
5    float weight;
6 };
7
8 int main()
9  {
10    struct person *personPtr, person1;
11    personPtr = &person1;   
12
13    printf("Enter age: ");
14    scanf("%d", &personPtr->age);
15
16    printf("Enter weight: ");
17    scanf("%f", &personPtr->weight);
18
19    printf("Displaying:\n");
20    printf("Age: %d\n", personPtr->age);
21    printf("weight: %f", personPtr->weight);
22
23    return 0;
24 }
```
The address of person1 is stored in the personPtr pointer using personPtr
= &person1;.
Now, you can access the members of person1 using the personPtr
pointer.
personPtr->age is equivalent to *personPtr.age personPtr->weight is
equivalent to *personPtr.weight

- Dynamically allocating structs:
```
1 #include <stdio.h>
2 #include <stdlib.h>
3 struct person {
4    int age;
5    float weight;
6    char name[30];
7 };
8
9 int main()
10 {
11   struct person *ptr;
12   // allocating memory for 50 numbers of struct person
13   ptr = (struct person*) malloc(50 * sizeof(struct person));
14 }

```
This allocates 50 slots for the variable ptr



### Memory Allocation 

- malloc
The name "malloc" stands for memory allocation. The malloc() function reserves a block of memory of the specified number of bytes. And, it returns a pointer of the type 'void' which can be casted into pointers of any form.

//This allocates 400 bytes of memory. Because the size of a float is 4 bytes.
The pointer ptr holds the address of the first byte in the allocated memory.

ptr = (float*) malloc(100 * sizeof(float));
//Results in a NULL pointer if the memory cannot be allocated.

- calloc
The name "calloc" stands for contiguous allocation.

The malloc() function allocates memory and leaves the memory uninitialized,
whereas the calloc() function allocates memory and initializes all
bits to zero.
//allocates contiguous space in memory for 25 elements of type float.
ptr = (float*) calloc(25, sizeof(float)); 

- realloc
If the dynamically allocated memory is insufficient or more than required,
you can change the size of previously allocated memory using the realloc()
function.
 ptr = (int*) malloc(10 * sizeof(int));

ptr = realloc(ptr, 20 * sizeof(int));
Here, ptr is reallocated with a new size 20.

### Bogen
Linked list 737  - Side 795 (Appendix B)

Library functions explained (for example fgetc()) - Side 795 

Precedence and Associativity of operators - Side: 813 

Operators and their names  - Side 814 

ASCII table (Ligner ikke et normalt table) - For at finde ASCII værdien (i decimal formen):
Left digit + right digit , så hvis left digit er 6 og right digit er 5
så er det decimal værdien 65, hvilket er ASCII værdien
Side 819 (Appendix D)

Keywords (break, int, struct atc.) - Side 821 

