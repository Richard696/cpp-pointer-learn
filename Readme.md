# About

This repo contain the codes to understand how the pointer works.
This code is writing in Unix-like environment, hence for Windows
user, you can create a blank C++ project in Visual Studio then
copy the code and un accordingly. Or install WSL, choose Ubuntu
platform and install g++.

**Requirement for Linux user**

1. Make sure your machine had install g++ compiler else run `sudo apt install g++`

## Pointer

- A pointer is a variable that stores an address location/store the address of another data
- Pointer notation is faster when working with arrays
- They provide functions access to large blocks of data
- They can allocate memory dynamically
- When a pointer is **not initialize**, it is set to **NULL**
- This set the pointers to all zeroes
- It is always a good idea to initialize the pointer

To use the pointer, a pointer variable need to be declared.
Then use `&` operator to get the address of the variable.

```c
int a;
int * ptr;
ptr = &a;
```

## Pointers to Arrays

When an array is initialized, the array automatically will have
an address for the first element in the array. Hence, this value
can be assigned to the pointer, in which if normal primitive data type,
the pointer has to refer to the address of the variable.

I.E.

```c
// the pointer is pointing to the address of the variable
int sum;
int* sumPtr;
sumPtr = &sum


// the pointer is pointing to the array directly wihtout the need of address referencing operator -> &
int average[10];
int* averagePtr;
averagePtr = average
```

## Dereferencing Pointers

A pointer can access the value of the address indirectly, hence we
can use a pointer to return the value of the pointer. The implementation
of this concept can be found in ch02_01. In this case, we are using the pointer
to return the value of the pointer variable.

## Pointing to a Pointer

Pointer can point to another pointer. To do so,

## Dynamic Memory Allocation

- Defines data requirements at runtime, rather than defining
  a predefined amount of memory
- Makes program flexible to request only needed memory
- Dynamic memory is identified by its address
- Pointers hold the address for this type of memory
- Release the memory when is no needed
- But it can cause memory leaks if there is error in the code
- Watch out for memory fragmentation

## Passing Pointers as Argument

- This is also known as pass by reference

## Stack and Heap

### Stack

- Variables created at compile time are stored in the stack.
- The stack has a fixed zise dertermined by the computer.
- When the variable is not longer used, the stack is released
- Function arguments are stored pn the stack
- return location is also stored on stack

### Heap

- Memory that is not used by the OS or programs is called heap
- It will be used for dynamic variable allocation
- The `new` keyword operator is used for dynamic memory allocation
- This return the address of the space stored in the pointer
- The complement is the `delete` operator.
