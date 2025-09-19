# Exercise List - HeapInt (Memory Allocation and Operator Overloading)

📌 Description  
This exercise aims to practice **memory allocation in classes** and **polymorphism**, especially **operator overloading** in C++.  

You are tasked with implementing a new data type called `HeapInt`, which behaves like an integer but stores its value in the heap.  
The class should include a pointer to an integer and handle it correctly.  

The required methods and operators are:
- Default constructor: initializes the value to 0.  
- Constructor with `int` parameter.  
- Copy constructor: receives another `HeapInt`.  
- Destructor: properly releases the memory.  
- Overload assignment `=` for assigning an `int` to a `HeapInt`.  
- Overload assignment `=` for assigning one `HeapInt` to another.  
- Overload addition `+` for summing two `HeapInt` objects.  
- Overload subtraction `-` for subtracting two `HeapInt` objects.  
- Overload equality `==` for comparing two `HeapInt` objects.  
- Overload input `>>` and output `<<` operators for reading and printing a `HeapInt`.  

You should submit `HeapInt.hpp` and `HeapInt.cpp`. The `main.cpp` file that tests your class will be provided.

---

## 📝 Instructions
- Implement the class in `HeapInt.hpp` and `HeapInt.cpp`.  
- Manage dynamic memory correctly in all constructors, assignment operators, and destructor.  
- Implement operator overloads to provide the expected behavior for arithmetic, comparison, and I/O.

---

## 🎯 Topics Practiced
- Dynamic memory allocation in classes  
- Copy constructors and destructors  
- Operator overloading for arithmetic, comparison, and I/O  
- Polymorphism in C++  

---

✅ Goal: By completing this exercise, you should be confident in **managing heap memory**, **writing copy constructors and destructors**, and **overloading operators** in C++.
