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

## Dereferencing Pointers

## Pointing to a Pointer

Pointer can point to another pointer. To do so,
