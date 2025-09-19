# Exercise List - Pokemon Championship (OOP, Inheritance, and Polymorphism)

📌 **Description**  
This exercise aims to practice **Object-Oriented Programming (OOP)** concepts, **inheritance**, and **polymorphism** in C++.  

You are tasked to implement a system to manage a **Pokemon battle championship**, with the following components:

---

## Classes

**Pokemon (abstract)**  
- Attributes: `name`, `attack_type`, `attack_power`, `energy` (default 100)  
- Methods:
  - `falar_nome()`: prints the Pokemon's name  
  - `falar_tipo_ataque()`: prints the attack type  
  - `imprimir_status()`: prints name and current energy  
  - `imprimir_informacoes()`: prints all Pokemon details  
  - `virtual double calcular_dano() = 0`: pure virtual method to calculate damage  
  - `atacar(Pokemon* other)`: attacks another Pokemon  
  - `receber_dano(double damage)`: applies damage to energy  

**PokemonEletrico** (inherits from Pokemon)  
- Additional attribute: `potencia_raio`  
- Overrides `falar_tipo_ataque()` (prints "Bzzzz!")  
- Overrides `calcular_dano()` using `ataque_eletrico() = attack_power * potencia_raio`  

**PokemonAquatico** (inherits from Pokemon)  
- Additional attribute: `litros_jato`  
- Overrides `falar_tipo_ataque()` (prints "Splash!")  
- Overrides `calcular_dano()` using `ataque_aquatico() = attack_power + litros_jato`  

**PokemonExplosivo** (inherits from Pokemon)  
- Additional attribute: `temperatura_explosao`  
- Overrides `falar_tipo_ataque()` (prints "Boom!")  
- Overrides `calcular_dano()` using `ataque_explosivo() = attack_power / temperatura_explosao`  

**Treinador**  
- Attributes: `name`, `vector<Pokemon*> pokemons`  
- Methods to register specific Pokemon types and access them by index  
- `imprimir_informacoes()`: prints the trainer info and all registered Pokemons  

**Campeonato**  
- Attribute: `vector<Treinador*> treinadores`  
- Methods to register trainers and their Pokemons  
- `executar_batalha(int idt1, int idpk1, int idt2, int idpk2)`: executes a Pokemon battle and prints details  

---

## 🎯 Topics Practiced
- Creating **classes** with attributes and methods  
- Using **inheritance** and **polymorphism**  
- Implementing **abstract classes** and **pure virtual methods**  
- Handling **dynamic memory** with pointers  
- Building a **vector of objects** and manipulating them  
- Implementing **command-driven input/output**  

---

## 📝 Instructions
- Implement the classes and a `main.cpp` to handle commands:  
  - `t nome` → register a trainer  
  - `i idt` → print trainer information  
  - `e idt nome tipo_ataque forca_ataque potencia_raio` → add PokemonEletrico  
  - `q idt nome tipo_ataque forca_ataque litros_jato` → add PokemonAquatico  
  - `x idt nome tipo_ataque forca_ataque temperatura_explosao` → add PokemonExplosivo  
  - `h idt1 idpk1 idt2 idpk2` → execute a battle between specified Pokemons  
  - `b` → call the provided `avaliacao_basica()` function for additional evaluation  

### Example

**Input:**  
t Treinador0  
i 0  
e 0 Pikachu Relampago 5 2  
i 0  
t Treinador1  
q 1 Squirtle Tsunami 5 3  
i 1  
h 0 0 1 0  
h 1 0 0 0  
i 0  
i 1  

**Output:**  
Nome: Treinador0  
Nenhum Pokemon cadastrado!  
Nome: Treinador0  
Pokemon: Pikachu  
Tipo ataque: Relampago  
Dano: 10  
Energia: 100  
Nome: Treinador1  
Pokemon: Squirtle  
Tipo ataque: Tsunami  
Dano: 8  
Energia: 100  
Batalha  

Treinador0 (Pikachu) vs. Treinador1 (Squirtle)  
Pikachu!  
Relampago!  
Bzzzz!  
Dano: 10  
Squirtle!  
Energia: 90  
#########  

Batalha  
Treinador1 (Squirtle) vs. Treinador0 (Pikachu)  
Squirtle!  
Tsunami!  
Splash!  
Dano: 8  
Pikachu!  
Energia: 92  
#########  
Nome: Treinador0  
Pokemon: Pikachu  
Tipo ataque: Relampago  
Dano: 10  
Energia: 92  
Nome: Treinador1  
Pokemon: Squirtle  
Tipo ataque: Tsunami  
Dano: 8  
Energia: 90  

---

## 📚 References
- [C++ STL Reference](https://www.cplusplus.com/reference/stl/)  
- [C++ Classes Tutorial](https://www.cplusplus.com/doc/tutorial/classes/)  
- [C++ Inheritance Tutorial](https://www.cplusplus.com/doc/tutorial/inheritance/)  
- [C++ iomanip/setprecision](https://cplusplus.com/reference/iomanip/setprecision/)  

---

✅ **Goal:** By the end of this exercise, you should be able to **implement class hierarchies with inheritance**, **use polymorphism**, **handle dynamic memory**, and **manage command-driven input/output** in C++.
