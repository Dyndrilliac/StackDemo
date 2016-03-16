/*
    Main Header File
    Project: QueueDemo
    Author:  Matthew Boyette
    Date:    11/16/2006
*/

#include "main.h"

int main(array<System::String ^> ^args)
{
    Stack^ q = gcnew Stack;

    q->Push("String");
    q->Push(34.6);

    for (UInt32 i = 0; i < q->Size; i++)
    {
        Console::WriteLine("Value: {0}", q->Pop());
    }

    Console::WriteLine("Press any key to continue...");
    Console::ReadKey(false);

    return EXIT_SUCCESS;
}