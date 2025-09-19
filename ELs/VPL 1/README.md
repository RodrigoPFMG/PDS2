# Exercise List - Wordle (Strings and Streams)

📌 **Description**  
This exercise aims to practice the use of **Strings** and **Streams** in C++.  
The task consists of implementing a simplified version of the game **Wordle**, where the player has up to **5 attempts** to guess a 5-letter word.  

The program compares each attempt with the target word and gives feedback using the following rules:  
- Uppercase letter → correct letter in the correct position.  
- Lowercase letter → correct letter in the wrong position.  
- `*` → letter not present in the target word.  
- Letters not present must also be printed between parentheses, accumulated across all attempts (no repetitions).  

The game ends either when the player guesses the correct word (**"GANHOU!"**) or after 5 attempts without success (**"PERDEU!" followed by the correct word**).  

---

## 🎯 Topics Practiced
- Reading input from files (`palavras.txt`)  
- Using `std::string` and its functions (especially `find`)  
- Handling text input and output with streams  
- String comparison and manipulation  
- Accumulating and printing unique "incorrect letters"  

---

## 📝 Instructions
- Read the dictionary of words from the file **`palavras.txt`**.  
  - First line: integer `n`, the number of words in the file.  
  - Next `n` lines: 5-letter words (uppercase, no repeated characters).  
- Read an integer from standard input (1 ≤ k ≤ n), which selects the target word.  
- Repeatedly read words of 5 letters from standard input and print the result according to the rules.  
- After 5 attempts, if the word is not guessed, print **`PERDEU!`** followed by the correct word.  

---

## 📚 References
- [C++ Reference - string::find](https://cplusplus.com/reference/string/string/find/)    

---

✅ **Goal:** By the end of this exercise, you should be more comfortable with **string manipulation**, **file input/output**, and **stream usage** in C++.  
