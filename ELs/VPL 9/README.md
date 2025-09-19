# Exercise List - Geometric Figures (Classes, Inheritance, and Composition)

📌 **Description**  
This exercise aims to practice **basic class concepts**, **inheritance**, and **composition** in C++.  

You are required to implement a class hierarchy for geometric figures:  
- **Superclass:** `FiguraGeometrica` (abstract)  
  - Attribute: `centro` (an object of class `Ponto`, representing a 2D point)  
  - Method: `Desenha()` prints the coordinates of the center (can be overridden)  
  - Pure virtual method: `CalculaArea()` returns the area of the figure (float)  

- **Subclasses:** `Retangulo`, `Triangulo`, `Circulo`  
  - Each implements `Desenha()` (calls the parent method and prints the type)  
  - Each implements `CalculaArea()` to return the correct area  

Class `Ponto` should provide constructors and getters/setters for its coordinates.

---

## 🎯 Topics Practiced
- Creating classes with **attributes and methods**  
- Using **composition** (`Ponto` as a member of `FiguraGeometrica`)  
- Implementing **inheritance** and **polymorphism**  
- Using **abstract classes** and **pure virtual methods**  
- Storing objects in a **vector of base class pointers**  
- Implementing basic **command processing** loops  

---

## 📝 Instructions
- Implement the classes (`Ponto`, `FiguraGeometrica`, `Retangulo`, `Triangulo`, `Circulo`) and a main program in a single file.  
- The main program reads commands from standard input:
  - **R <C1> <C2> <L1> <L2>**: Create a rectangle with center `(C1, C2)` and sides `L1` and `L2`.  
  - **C <C1> <C2> <R>**: Create a circle with center `(C1, C2)` and radius `R`.  
  - **T <C1> <C2> <B> <A>**: Create a triangle with center `(C1, C2)`, base `B` and height `A`.  
  - **D**: "Draw" all figures by printing their center coordinates and type.  
  - **A**: Calculate and print the **total area** of all figures.  
  - **E**: End execution  

### Example

**Input:**  
R 10 10 10 20  
R 20 20 10 40  
T 0 0 20 20  
C 50 50 100  
D  
A  
E  

**Output:**  
10 10 RETANGULO  
20 20 RETANGULO  
0 0 TRIANGULO  
50 50 CIRCULO  
32215.93  

---

✅ **Goal:** By the end of this exercise, you should be able to **implement class hierarchies**, **use polymorphism**, **apply composition**, and **store and manipulate objects dynamically** in C++.
