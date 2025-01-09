# Undefined Behavior When Modifying Vector via Raw Pointer After Resizing

This repository demonstrates a common error in C++ when using `std::vector` and raw pointers. Modifying elements through a raw pointer after resizing the vector can lead to undefined behavior and crashes.  The code example shows the problem and a possible solution using iterators.

## Bug Description

The `bug.cpp` file shows code that attempts to modify the first element of a vector using a raw pointer after resizing the vector. The `std::vector`'s internal memory may be reallocated after the `push_back` call, invalidating the pointer.