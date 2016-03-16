/*
    Stack Class Header File
    Project: Stack
    Author:  Matthew Boyette
    Date:    11/16/2006
*/

#pragma once

#include "Node.h"
#include "Queue.h"

using namespace System;

public ref class Stack : public Queue
{

    public:

        /*
            Constructors
        */

        Stack();

        /*
            Operations
        */

        Object^ Pop();
        void    Push(Object^ o);
};