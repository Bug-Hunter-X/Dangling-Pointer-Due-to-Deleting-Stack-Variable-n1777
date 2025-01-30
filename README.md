# Dangling Pointer Bug in C++

This repository demonstrates a common error in C++: attempting to delete a pointer to a stack-allocated variable.  This leads to undefined behavior and potential crashes. The `bug.cpp` file contains the erroneous code, while `bugSolution.cpp` provides the correct approach.

**Problem:**
In `bug.cpp`, `delete ptr` attempts to deallocate memory that was not allocated using `new`. Stack variables are automatically managed by the compiler and should not be explicitly deleted. This action results in a dangling pointer, making the program unstable and prone to errors.

**Solution:**
`bugSolution.cpp` shows the proper way to handle memory allocation and deallocation when dynamic memory is necessary. Using `new` and `delete` correctly prevents memory leaks and undefined behavior.