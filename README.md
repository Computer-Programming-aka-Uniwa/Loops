<p align="center">
  <img src="https://www.especial.gr/wp-content/uploads/2019/03/panepisthmio-dut-attikhs.png" alt="UNIWA" width="150"/>
</p>

<p align="center">
  <strong>UNIVERSITY OF WEST ATTICA</strong><br>
  SCHOOL OF ENGINEERING<br>
  DEPARTMENT OF COMPUTER ENGINEERING AND INFORMATICS
</p>

---

<p align="center">
  <strong>Computer Programming</strong>
</p>

<h1 align="center">
  Loops
</h1>

<p align="center">
  <strong>Vasileios Evangelos Athanasiou</strong><br>
  Student ID: 19390005
</p>

<p align="center">
  <a href="https://github.com/Ath21" target="_blank">GitHub</a> ·
  <a href="https://www.linkedin.com/in/vasilis-athanasiou-7036b53a4/" target="_blank">LinkedIn</a>
</p>

<hr/>

<p align="center">
  <strong>Supervision</strong>
</p>

<p align="center">
  Supervisor: Nikolaos Vassilas, Professor<br>
</p>

<p align="center">
  <a href="https://ice.uniwa.gr/en/emd_person/nikolaos-vassilas/" target="_blank">UNIWA Profile</a>
</p>


<p align="center">
  Co-supervisor: Georgios Meletiou, Laboratory Teaching Staff<br>
</p>

<p align="center">
  <a href="https://ice.uniwa.gr/en/emd_person/georgios-meletiou/" target="_blank">UNIWA Profile</a>
</p>

</hr>

<p align="center">
  Athens, December 2021
</p>

---

# Project Overview

This project explores the fundamental concepts of iterative structures (loops) in the C programming language. It provides a comprehensive theoretical background followed by practical implementations through various source code examples.

---

## Table of Contents


| Section | Folder / File | Description |
|------:|---------------|-------------|
| 1 | `assign/` | Assignment material |
| 1.1 | `assign/project4.png` | Assignment description / problem statement (English) |
| 1.2 | `assign/εργασία4.png` | Assignment description / problem statement (Greek) |
| 2 | `docs/` | Theoretical documentation |
| 2.1 | `docs/Loops.pdf` | Loops and iteration in C (English) |
| 2.2 | `docs/Βρόχοι.pdf` | Loops and iteration in C (Greek) |
| 3 | `src/` | Source code implementations |
| 3.1 | `src/MathsWithIntegersInLoopA.c` | Integer operations using `for`/`while` loops (example A) |
| 3.2 | `src/MathsWithIntegersInLoopB.c` | Integer operations using `for`/`while` loops (example B) |
| 3.3 | `src/SinTaylor.c` | Computing sine using Taylor series in loops |
| 3.4 | `src/Stars.c` | Loop exercises: printing patterns (stars) |
| 4 | `README.md` | Repository overview and instructions |

---


## Theoretical Background

### Iterative Structures

Iterative structures are instructions that **execute a body of code repeatedly** based on a specific condition.  
- The loop continues **while the condition is true (non-zero)**  
- Terminates when the condition becomes **false (zero)**

**Supported Loops in C:**

- **`while`**: Executes a body of instructions as long as the condition evaluates to true.  
- **`do-while`**: Executes the loop body **at least once**, then checks the condition.  
- **`for`**: Commonly used for a predetermined number of iterations, accepts **initialization, condition, and modification**.

### Control Commands

- **`break`**: Immediately exits the loop and continues execution after the loop.  
- **`continue`**: Skips the current iteration and moves to the next loop cycle.

---

## Source Code Implementations

### 1. MathsWithIntegersInLoopA.c
Performs **mathematical operations** on a user-defined number of integers.

**Functionality:**
- Calculates the **square of odd numbers**  
- Counts the **number of even numbers**  
- Computes the **average of positive numbers**  
- Computes the **product of negative numbers**

**Key Logic:**  
Uses a `while` loop that iterates until the counter `i` reaches the user-specified limit `N`.

---

### 2. Stars.c
Visualizes **geometric shapes** using asterisks (`*`) based on user input for the number of lines.

**Functionality:**
- Plots **four distinct asterisk-based figures**  
  - Figure 1: Right-angled triangle  
  - Figure 4: Square perimeter with diagonal markings

**Key Logic:**  
Uses **nested `for` loops** to handle row and column positions for characters.

---

### 3. SinTaylor.c
Calculates the **sine of an angle** using the **Taylor series** and compares it with the standard library `sin()` function.

**Functionality:**
- Converts user-inputted **degrees to radians**  
- Iteratively computes Taylor series terms until the **difference between successive terms < 10⁻⁶**

**Key Logic:**  
- Uses a `do-while` loop to sum series terms  
- Alternates addition and subtraction using a **sign toggle variable**


---

# Installation & Setup Guide

This repository contains **introductory laboratory material** for the  
**Computer Programming** course at the **University of West Attica (UNIWA)**.

---

## Prerequisites

### Required Software

- **C Compiler**
  - Recommended:
    - **GCC** (Linux / macOS / Windows via MinGW or WSL)

- **Text Editor or IDE**
  - Visual Studio Code `(Recommended)`
  - Code::Blocks
  - Dev-C++
  - CLion
  - Any plain text editor

### Supported Operating Systems
- Windows
- Linux `(Recommended)`
- macOS

---

## Installation

### 1. Clone the Repository

Clone the repository to your local machine:

```bash
git clone https://github.com/Computer-Programming-aka-Uniwa/Control.git
```

#### Alternative (Without Git)

- Open the repository URL in your browser
- Click Code → Download ZIP
- Extract the ZIP file to a local directory

## Compiling & Running the Programs
### 2. Navigate to Source Directory
```bash
cd Loops/src
```

### 3. Compile the Programs
```bash
gcc MathsWithIntegersInLoopA.c -o MathsWithIntegersInLoopA
gcc MathsWithIntegersInLoopB.c -o MathsWithIntegersInLoopB
gcc Stars.c -o Stars
gcc SinTaylor.c -o SinTaylor -lm
```
> `-lm` is required to link the math library

### 4. Run the Programs
Linux / macOS
```bash
./MathsWithIntegersInLoopA
./MathsWithIntegersInLoopB
./Stars
./SinTaylor
```
Windows
```bash
MathsWithIntegersInLoopA.exe
MathsWithIntegersInLoopB.exe
Stars.exe
SinTaylor.exe
```

---

## Open the Documentation
1. Navigate to the `docs/` directory
2. Open the report corresponding to your preferred language:
    - English: `Loops.pdf`
    - Greek: `Βρόχοι.pdf`