# Exercise List - Banking System (ADTs and Modularization)

📌 **Description**  
The goal of this exercise is to practice the concepts of **Abstract Data Types (ADTs)** and **Modularization** in C++.  

You must implement a simple banking system that allows:  
- Creating accounts  
- Depositing money  
- Withdrawing money  
- Performing transfers (Pix)  
- Listing all registered accounts  

The implementation is divided into two main ADTs and a main program (`main.cpp`).  

---

## 🎯 Practiced Concepts
- Creating and using **ADTs in C++**  
- **Encapsulation** and attribute access only through methods  
- Manipulation of **pointers** and **static arrays**  
- Structuring code into multiple files (`.hpp` and `.cpp`)  
- Handling **formatted input and output**  

---

## 🏗️ System Structure

### ADT **BankAccount**
Represents an account with attributes:  
- `id` (integer)  
- `client` (string)  
- `balance` (float, initialized as 0)  

**Operations:**  
- Constructor (creates account with balance = 0)  
- `Deposit(value)`  
- `Withdraw(value)`  
- `Pix(destination, value)`  
- `Print()` → prints `id client balance` (balance with 2 decimal places)  

---

### ADT **Bank**
Manages up to **20 accounts** (static array of pointers to accounts).  

**Operations:**  
- Constructor (initializes array and sets number of accounts to 0)  
- `CreateAccount(id, name)` → creates new account (returns pointer or `nullptr` if duplicate)  
- `Search(id)` → searches and returns pointer to account or `nullptr`  
- `ListAccounts()` → prints all registered accounts  

---

### Main Program (`main.cpp`)
The program reads commands from standard input and executes the operations:  

- `C <id> <name>` → create account  
  - Success: `conta criada`  
  - Error: `ERRO: conta repetida`  

- `D <id> <value>` → deposit  
  - Success: `deposito efetuado`  
  - Error: `ERRO: conta inexistente`  

- `S <id> <value>` → withdraw  
  - Success: `saque efetuado`  
  - Error: `ERRO: conta inexistente`  

- `P <id> <dest> <value>` → pix (transfer)  
  - Success: `pix efetuado`  
  - Error: `ERRO: conta inexistente`  

- `I` → prints all accounts (`id client balance`)  

- `T` → terminates program execution  

---

## 📖 Example Execution
C 123 Luiz  
conta criada  
C 123 Maria  
ERRO: conta repetida  
C 999 Maria  
conta criada  
D 123 1000  
deposito efetuado  
S 555 500  
ERRO: conta inexistente  
S 123 200  
saque efetuado  
P 123 999 300  
pix efetuado  
I  
123 Luiz 500.00  
999 Maria 300.00  
T  

---

## 📂 Files to Submit
- `ContaBancaria.hpp`  
- `ContaBancaria.cpp`  
- `Banco.hpp`  
- `Banco.cpp`  
- `main.cpp`  

---

✅ **Final Goal:**  
By the end of this exercise, you will have practiced implementing **ADTs**, **pointer manipulation**, **static arrays**, and **code modularization** in C++.  

