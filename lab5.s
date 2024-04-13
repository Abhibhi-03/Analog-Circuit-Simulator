@ wWrite a program in assembly language that counts how many vowels and non-vowels are in "SEH500 is very cool! " (REPLACE with your name).

@ Hint: put your string into memory using the .string directive
@ use R0 to hold the address for the string or character
@ use R1 as the counter for vowel
@ use R2 as the counter for non-vowel

@ The output should be like this:
@ Vowel: 5
@ Non-vowel: 12

@ Your program should be able to handle both upper and lower case vowels

.syntax unified
.cpu cortex-m4
.thumb

.data
string: .string "FAHAD Ali Khan "

.text
.global main
.type main, %function
 