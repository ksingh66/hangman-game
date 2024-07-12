![Hangman🙃](https://github.com/user-attachments/assets/28888dad-27c7-450b-b48b-43abcfecc276)
![GitHub last commit (branch)](https://img.shields.io/github/last-commit/ksingh66/hangman-game/main)
# Note
Type in "make" in the terminal whilst in the directory with all all the files and it will compile the program into a binary. Run this binary with *"./hangman **secret-phrase**"*. This "secret phrase" will be the word that is to be guessed during your game.
# Outline 
We use a hangman-helpers function in order to assist with the main algorithm. Some key functions will be to check if a secret phrase is valid and to see if a letter exists in the secret phrase.
![carbon-7](https://github.com/user-attachments/assets/671c841e-5bfd-4d21-93ab-c79461bd561f)
![carbon-8](https://github.com/user-attachments/assets/a7468640-a5f1-43c3-b65f-f0e38c7c365e)
We store these in a header file that is then used in our main hangman function.
# Main
We don’t need to keep track the order in which guesses are made but once they are, If the guess is not in the secret phrase it needs to be laid out. We can loop through the string to find letters and sort them. Important to note that characters have integer ascii representations.
# Use Example
![carbon-9](https://github.com/user-attachments/assets/68444f4e-8d50-469d-942d-9cff6ff13604)
![carbon-10](https://github.com/user-attachments/assets/507f7c09-808e-4255-98c1-9fd2fb9e4cd1)
## Thank you for your time
