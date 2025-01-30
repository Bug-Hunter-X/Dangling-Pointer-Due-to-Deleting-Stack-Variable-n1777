#include <iostream>

int main() {
  int* ptr = new int; // Allocate memory dynamically
  *ptr = 10;          // Assign a value
  std::cout << *ptr << std::endl; // Access the value
  delete ptr;       // Deallocate the memory
  ptr = nullptr;     // Set the pointer to null to prevent dangling pointer
  return 0;
} 