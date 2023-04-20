# Introduction

Thihai Calculator is a command-line program written in C that calculates thihai for any given taal. Thihai is a rhythmic pattern used in Indian classical music and dance, specifically in Hindustani classical music. It is a composition of three equal parts, usually played at the end of a rhythmic cycle, creating a sense of closure and resolution. Thihai Calculator allows users to input the number of beats in a taal and the desired number of cycles, and then it calculates the thihai pattern accordingly.

## Objective

The main objective of this project is to create a program that calculates thihai patterns for any taal and cycle count, providing an easy and quick way for musicians and students of Indian classical music to determine the thihai for their compositions or practice sessions.

## Features

Accepts user input for the number of beats in a taal and the desired number of cycles.
Calculates the closest multiple of three for the given beats.
Determines the number of beats per pala and the division between palas.
Displays the calculated thihai pattern with clear instructions on how to interpret the results.
Implementation

The program is written in C and uses standard input/output functions to interact with the user. It consists of a main function and three additional functions to perform specific calculations:

**closestDivByThree(int taal)**: This function returns the closest multiple of three for the given beats in a taal.

**calculateDivision(double part, int beats)**: This function calculates the division between palas based on the closest multiple of three and the total beats.

**print_thihai_line(char *label, double value)**: This function prints a formatted line of the thihai pattern's output.

The program prompts the user to enter the number of beats in a taal and the desired number of cycles. It then calculates the thihai pattern and displays the results in an easy-to-understand format.

## Conclusion

Thihai Calculator is a useful tool for musicians, dancers, and students of Indian classical music to quickly calculate thihai patterns for any taal and cycle count. The program simplifies the process of determining the thihai pattern by performing the calculations and providing clear instructions on how to interpret the results. This project can be further enhanced by adding more features, such as support for different types of thihais or incorporating a graphical user interface.
