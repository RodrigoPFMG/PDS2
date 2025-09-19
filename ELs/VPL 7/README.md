# Exercise List - Student Management (Aluno TAD)

📌 **Description**  
This exercise aims to practice **Abstract Data Types (ADTs)** and **modular programming** in C++.  
Your task is to implement a **Student (Aluno) ADT** to store student information and a program to read student data and generate a report.  

The `Aluno` ADT should store:  
- Name (`string`)  
- Enrollment number (`int`)  
- A dynamic list of integer grades  

The ADT must provide methods to:  
- Calculate the **average grade**  
- Return the **maximum grade**  
- Access other information via methods (getters, constructor, etc.)  

---

## 🎯 Topics Practiced
- Designing and implementing ADTs in C++  
- Dynamic memory handling for variable-sized data  
- Sorting and printing objects  
- Modular program design with separate header and source files  

---

## 📝 Instructions
- Implement the `Aluno` ADT in `aluno.hpp` and `aluno.cpp`.  
- Implement the main program in `main.cpp` to read student data and print a report.  
- Input reading:
  - Name of the student (one line)  
  - Enrollment number (next line)  
  - Grades separated by spaces; use `-1` to indicate the end of the grades  
  - Use `"END"` to indicate the end of student data  
- Output:
  - For each student, print the enrollment number, name, and list of grades (first line)  
  - Then print the average (2 decimal places), maximum, and minimum grade (second line)  
  - Students must be printed in **alphabetical order by name**  

### Example

**Input:**  
Luiz  
2021153  
60 75 90 80 75 -1  
Joao  
2022098  
85 95 90 -1  
Maria  
2022051  
90 100 100 90 -1  
END  

**Output:**  
2022098 Joao 85 95 90  
90.00 95 85  
2021153 Luiz 60 75 90 80 75  
76.00 90 75  
2022051 Maria 90 100 100 90  
95.00 100 90  

---

✅ **Goal:** By the end of this exercise, you should be able to **implement and use a custom ADT**, handle **dynamic data**, and **generate sorted reports** in C++.  
