# Exercise List - Exception Handling (C++)

📌 Description  
This exercise aims to practice **exception handling** in C++. The focus is on understanding how to create custom exceptions and handle errors properly.

You are tasked with implementing a custom exception class `NegativeResultException` that inherits from `std::exception`. Requirements:  
- Attribute `valor` (int), initialized via the constructor.  
- Override the `what()` method to return `"Erro: Resultado Negativo."`.

Your program should also:  
- Create a `vector<int>` initialized with `{-20, -10, 0, 10, 20}`.  
- Enter a `try` block to:  
  - Read an integer input `idx`.  
  - Access the element at position `idx` using `vector::at()`.  
  - If the element is negative, throw a `NegativeResultException` with the element’s value.  
  - Otherwise, print the element.  
- Catch exceptions:  
  - For `NegativeResultException`, print the `what()` message on one line, followed by the value that caused the exception on the next line.  
  - For other exceptions, print only the `what()` message.

> **Note:** Consider what happens if you access the vector using `[]` instead of `at()`.

Perform multiple tests and observe the outputs. Verify that exceptions are being handled correctly.  

---

## 🎯 Topics Practiced
- Creating and using **custom exception classes**  
- Throwing and catching exceptions  
- Using `try-catch` blocks for error handling  
- Accessing `std::vector` safely with `at()` vs `[]`  

---

## 📝 Instructions
- Implement the `NegativeResultException` class.  
- Write a main program that reads an index and accesses the vector element.  
- Use `try-catch` blocks to handle exceptions and print the required messages.  
- Observe program output and verify correct exception handling.  

---

✅ Goal: By completing this exercise, you should gain experience in **exception creation**, **throwing**, **catching**, and **safe vector access** in C++.
