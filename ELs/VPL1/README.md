# Practical Assignment - Wordle Game (C++)

📌 **Description**  
This project implements a simplified version of the popular game **Wordle**, using **Strings** and **Streams** in C++.  
The objective is to guess a secret five-letter word within **five attempts**.  

🎮 **Game Rules**  
- If a letter is correct **and** in the right position → print the uppercase letter.  
- If a letter is correct but in the **wrong position** → print the lowercase letter.  
- If a letter is not present in the word → print `*`.  
- At the end of each attempt, also print all incorrect letters (from all attempts) in parentheses, without repetition.  
- The game ends when:  
  - The player guesses the word → print **"GANHOU!"**.  
  - The player runs out of 5 attempts → print **"PERDEU!"** followed by the correct word.  

📝 **Input format**  
1. A file `palavras.txt` containing:  
   - First line: an integer **n** → number of words (1 ≤ n).  
   - Next **n** lines: one five-letter word per line (uppercase, no repeated letters).  
2. From standard input:  
   - An integer from 1 to n → index of the secret word (the "key").  
   - Up to five five-letter guesses (uppercase, no repeated letters).  

🖥️ **Output format**  
- After each guess:  
  - The transformed word with correct/incorrect markers.  
  - The list of invalid letters in parentheses.  
- End of game:  
  - **"GANHOU!"** if guessed.  
  - **"PERDEU!" <word>** if all attempts are used without success.  

⚠️ **Restrictions**  
- Must use **C++ Strings and Streams**.  
- Functions like `char*`, `printf`, and `scanf` are not allowed.  
