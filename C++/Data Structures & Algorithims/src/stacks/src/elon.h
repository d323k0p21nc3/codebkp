#ifndef ELON_H_INCLUDED
#define ELON_H_INCLUDED

#include <iostream>

using namespace std;

void create_stack();
void push_into_stack();
void pop_from_stack();
void _print(int* top, int _stack[]);
void _search(int* keyPtr, int* stack_size, int _stack[], int* posPtr, bool* exists);

#endif // ELON_H_INCLUDED
