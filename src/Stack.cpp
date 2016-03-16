/*
    Stack Class Source File
    Project: Stack
    Author:  Matthew Boyette
    Date:    11/16/2006
*/

#include "Stack.h"

/*
    Constructors
*/

Stack::Stack()
{
    this->Clear();
}

/*
    Operations
*/

Object^ Stack::Pop()
{
    if (this->Empty)
    {
        throw gcnew Exception("Stack is empty!");
    }

    // ...
}

void Stack::Push(Object^ o)
{
    if (this->Size >= (UInt32::MaxValue - 1))
    {
        throw gcnew Exception("Stack is full!");
    }

    // ...
}