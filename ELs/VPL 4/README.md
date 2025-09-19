# Exercise List - Makefile (Project Compilation)

📌 **Description**  
This exercise aims to practice the use of **Makefiles** for compiling and organizing a C++ project.  
The goal is to create a `Makefile` that compiles the **Bank** and **BankAccount** system (from VPL3) with a structured directory hierarchy.  

The project is organized as follows:  
. Projeto  
├── Makefile  
├── obj/  
│ └── [object files .o]  
├── include/  
│ └── Banco.hpp  
│ └── ContaBancaria.hpp  
└── src/  
└── Banco.cpp  
└── ContaBancaria.cpp  
└── main.cpp  

---

## 🎯 Topics Practiced
- Creating and structuring **Makefiles**  
- Compiling multiple `.cpp` files into `.o` files  
- Using **include directories** during compilation  
- Linking object files into a single executable  
- Organizing builds with `src/`, `include/`, and `obj/` folders  

---

## 📝 Instructions
- Each `.cpp` file (`Banco.cpp`, `ContaBancaria.cpp`, `main.cpp`) must be compiled **individually** into `.o` files inside the `obj/` directory.  
- The compiled `.o` files must then be linked into an executable named **`vpl_execution`**, stored in the project root.  
- Ensure correct formatting in the `Makefile` (tabs instead of spaces).  
- File and folder names must match exactly (case-sensitive).  

---

✅ **Goal:** By the end of this exercise, you should be able to **organize and automate project compilation** using a Makefile, while keeping object files and executables in their proper directories.  
