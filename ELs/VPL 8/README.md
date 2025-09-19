# Exercise List - Object Management (Classes and List Container)

📌 **Description**  
This exercise aims to practice **basic class and object concepts** in C++, as well as the use of the **`list` container**.  

You are required to create a class of your choice. Each object of this class has:  
- An **`id`** attribute (integer), which can be assigned in two ways:
  - **Automatically:** incremental starting from 1 for the first object.  
  - **Manually:** provided as a parameter (only negative ids are allowed).  
- A **counter** tracking the number of existing objects. This counter is incremented in the constructor and decremented in the destructor.  

The class must provide methods to:  
- Return the **id** of an object  
- Return the **current number of objects**  
- Return the **memory address** of the object  

---

## 🎯 Topics Practiced
- Creating and using C++ classes and objects  
- Constructor and destructor behavior  
- Managing a static class-level counter  
- Using the `list` container  
- Memory address inspection (`&` operator)  
- Handling user commands and dynamic object creation/deletion  

---

## 📝 Instructions
- Implement the class (attributes private, methods public) and a main program in a single file.  
- The main program reads commands from standard input:
  - **A:** Add a new object with automatic id at the end of the list. Print id and memory address.  
  - **C <id>:** Add a new object with provided id at the beginning of the list. Print id and memory address, or `"ERRO"` if the id is invalid.  
  - **R:** Remove and delete the first object in the list. Print id and memory address, or `"ERRO"` if the list is empty.  
  - **N:** Print the current number of objects.  
  - **P <i>:** Print the id and memory address of the i-th element. Print `"ERRO"` if the index is invalid.  
  - **L:** Print all objects in the list (id and memory address) one per line.  
  - **E:** End execution  

### Example

**Input:**  
A  
C -10  
C 5  
A  
L  
R  
A  
R  
A  
N  
P 5  
P 3  
L  
E  

**Output:**  
1 0x5627ff3f02c0  
-10 0x5627ff3f0710  
ERRO  
2 0x5627ff3f0750  
-10 0x5627ff3f0710  
1 0x5627ff3f02c0  
2 0x5627ff3f0750  
-10 0x5627ff3f0710  
3 0x5627ff3f0710  
1 0x5627ff3f02c0  
4 0x5627ff3f02c0  
3  
ERRO  
4 0x5627ff3f02c0  
2 0x5627ff3f0750  
3 0x5627ff3f0710  
4 0x5627ff3f02c0  
*Note: Memory addresses may vary per execution.*

---

✅ **Goal:** By the end of this exercise, you should be able to **implement classes with private attributes**, **track the number of objects dynamically**, and **manipulate a list of objects** in C++.
