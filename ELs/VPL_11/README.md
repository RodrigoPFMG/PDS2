# Exercise List - Template Vector (C++ Templates)

📌 **Description**  
This exercise aims to practice the use of **Templates** in C++.  

You are tasked with implementing a **template class `Vetor`** that can work with any primitive C++ type. The class should provide the following functionality:

---

## Class Requirements

**Vetor<T>**  
- **Constructor**: accepts an integer `n` and creates a vector with maximum size `n`.  
- **Copy constructor**: accepts another vector and performs a copy.  
- **Destructor**: properly releases allocated memory.  
- **SetElemento(int i, T x)**: sets the element `x` at index `i`.  
- **GetElemento(int i)**: returns the element at index `i`.  
- **AdicionaElemento(T x)**: adds `x` to the last position of the vector.  
- **Imprime()**: prints all elements of the vector, separated by spaces.  

**Attributes**:  
- Maximum size of the vector  
- Current number of elements  

> You can assume that all method calls will use valid indices.

---

## 📝 Instructions
- Implement the template class in a **single file `vetor.hpp`** (no separate `.cpp` file).  
- The provided `main.cpp` will test your class.  

**Example Usage:**
```cpp
Vetor<char> a(5);  
for(char i='a'; i<='e'; i++)  
    a.AdicionaElemento(i);  

Vetor<char> b = a;  
b.SetElemento(1,b.GetElemento(4));  
b.SetElemento(2,'i');  
b.SetElemento(3,'o');  
b.SetElemento(4,'u');  

a.Imprime();  
b.Imprime();    
Expected Output:  
a b c d e  
a e i o u
```
## 🎯 Topics Practiced

- Creating template classes

- Implementing constructors, copy constructors, and destructors

- Managing dynamic memory safely

- Implementing methods to access and modify elements

- Printing and handling generic types
---

✅ Goal: By the end of this exercise, you should be comfortable with C++ templates, generic programming, and managing dynamic arrays with class templates.

