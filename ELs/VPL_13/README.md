# Exercise List - Smart Pointers (Memory Management in C++)

📌 Description  
This exercise aims to practice **Smart Pointers** in C++. The focus is on understanding memory ownership and lifecycle rather than the complexity of implementation.  

You are tasked with implementing a class `Teste` with a single integer attribute. The requirements are:  
- Default constructor: initializes the attribute to 0 and prints `"Construtor <value>"`.  
- Parameterized constructor: receives an integer and initializes the attribute with this value, printing `"Construtor <value>"`.  
- Destructor: prints `"Destrutor <value>"`.  

Your `main` function should read an integer `n` and behave differently depending on whether `n` is even or odd:  

**If `n` is even:**  
- Loop `c` from 1 to `n`.  
- Inside the loop, create a **traditional pointer** to a `Teste` object and allocate memory with the value `c`.  
- Also, create a `unique_ptr<Teste>` initialized with the value `c`.  

**If `n` is odd:**  
- Create a `shared_ptr<Teste>` initialized with value 0.  
- Loop `c` from 1 to `n`.  
  - Inside the loop, create another `shared_ptr<Teste>` and assign it the existing shared pointer.  
  - Modify the object's attribute through the shared pointer to `c`.  
- After the loop, print the number of `shared_ptr` instances currently pointing to the same object (`use_count()`).

Perform multiple tests and observe the program output. Pay attention to object creation and destruction. Are there any memory leaks?  

---

## 🎯 Topics Practiced
- Unique and shared pointers (`unique_ptr` and `shared_ptr`)  
- Memory management and automatic cleanup in C++  
- Object lifecycle and destructors  
- Understanding ownership and reference counting  

---

## 📝 Instructions
- Implement the class `Teste` with proper constructors and destructor.  
- Use `unique_ptr` and `shared_ptr` appropriately based on the problem description.  
- Observe the output to understand how smart pointers manage memory compared to traditional pointers.  

---

✅ Goal: By completing this exercise, you should better understand **smart pointer usage**, **automatic memory management**, and **how object lifetimes are handled in C++**.
