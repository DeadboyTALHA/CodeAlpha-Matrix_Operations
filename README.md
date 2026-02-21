# Matrix Operations - C Programming

![C Language](https://img.shields.io/badge/language-C-blue.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)

A comprehensive matrix operations program written in C that performs addition, multiplication, and transpose operations on matrices. This project demonstrates modular programming using functions and 2D arrays.

## 📋 Overview

This program provides a complete matrix manipulation toolkit that allows users to perform various operations on matrices of custom dimensions. With a menu-driven interface, users can easily input matrices and perform operations with proper dimension validation.

## ✨ Features

### Core Operations
- **Matrix Input**: User-friendly matrix data entry
- **Matrix Display**: Formatted output with proper alignment
- **Matrix Addition**: Element-wise addition (requires same dimensions)
- **Matrix Multiplication**: Standard matrix multiplication
- **Matrix Transpose**: Convert rows to columns and vice versa

### Advanced Features
- **Dimension Validation**: Prevents invalid operations
- **Interactive Menu**: Easy-to-use menu-driven interface
- **Multiple Matrix Support**: Work with two matrices simultaneously
- **Flexible Size**: Supports matrices up to 10×10
- **Clear Error Messages**: Informative messages for invalid operations

## 🛠️ Technologies Used

- **C Programming Language**
  - 2D Arrays for matrix storage
  - Functions for modular programming
  - Nested loops for matrix traversal
  - Preprocessor directives (#define)

## 📁 Project Structure
matrix-operations/<br>
├── Matrix_Operations.c # Main program source code<br>
├── README.md # Project documentation<br>


## 🚀 Installation & Usage

### Prerequisites
- C compiler (GCC recommended)
- Terminal/Command Prompt

### Steps to Run

1. Clone the repository
   ```bash
   git clone https://github.com/yourusername/CodeAlpha_MatrixOperations.git
   cd CodeAlpha_MatrixOperations
2. Compile the program
   ```bash
   gcc Matrix_Operations.c -o matrix_ops
3. Run the program
   ```bash
   ./matrix_ops

## 💻 Program Walkthrough
1. Matrix Input
   ```text
   Matrix Operations
    ---- First Matrix ----
    Enter number of rows: 2
    Enter number of columns: 2
    Enter matrix elements row by row:
    Row 1: 1 2
    Row 2: 3 4
    
    --- Second Matrix ---
    Enter number of rows: 2
    Enter number of columns: 2
    Enter matrix elements row by row:
    Row 1: 5 6
    Row 2: 7 8
2. Interactive Menu
   ```text
   ==== MATRIX OPERATIONS MENU ====
    1. Display Matrices
    2. Matrix Addition
    3. Matrix Multiplication
    4. Matrix Transpose
    5. Exit
    Enter your choice (1-5):
3. Sample Operations
   Display Matrices:
   ```text
   First Matrix (2x2):
   First Matrix (2x2):
    [
        1    2 
        3    4 
    ]
    
    Second Matrix (2x2):
    [
        5    6 
        7    8 
    ]

Matrix Addition:
  ```text
  Result of Matrix Addition (2x2):
  [
      6    8 
     10   12 
  ]
```

Matrix Multiplication:
  ```text
  Result of Matrix Multiplication (2x2):
  [
     19   22 
     43   50 
  ]
```

Matrix Transpose:
  ```bash
  Transpose of First Matrix (2x2):
  [
      1    3 
      2    4 
  ]
```

## 📊 Function Documentation
inputMatrix()	- Takes user input for matrix elements - matrix, rows, cols
displayMatrix()	- Prints matrix in formatted style - matrix, rows, cols
addMatrices() -	Performs element-wise addition - mat1, mat2, result, rows, cols
multiplyMatrices() - Performs matrix multiplication -	mat1, mat2, result, dimensions
transposeMatrix()	- Calculates matrix transpose -	mat, trans, rows, cols

## 🔍 Key Learning Concepts
2D Arrays: Storing and manipulating matrix data

Functions: Modular programming approach

Nested Loops: Traversing multi-dimensional data

Menu-Driven Programs: User interaction design

Error Handling: Validating matrix dimensions

Pass by Reference: Modifying arrays in functions

##🚧 Dimension Rules
Operation	- Condition
Addition - Both matrices must have same dimensions
Multiplication - First matrix columns = Second matrix rows
Transpose - Always possible, dimensions swap

## 🚀 Future Enhancements
Add determinant calculation

Implement inverse matrix operation

Add scalar multiplication

Include eigenvalue computation

Save/load matrices from files

Support for larger matrices

Add complex number support

## 🤝 Contributing
This project was completed as part of my internship tasks. While it's not open for direct contributions, feel free to fork and customize it for your own learning!

## 📬 Contact
Author: Md. Minhazul Mowla

Internship: CodeAlpha C Programming Internship

Project Completion: 10 February 2026

LinkedIn Post: https://www.linkedin.com/posts/md-minhazul-mowla_codealpha-internship-remoteintern-activity-7422482525371080705-WP4u?utm_source=share&utm_medium=member_desktop&rcm=ACoAAEMykdcBnyGS_JGi_AlJEpxA2oo8BqbrhJw

## 🙏 Acknowledgments
CodeAlpha for this learning opportunity

The C programming community for continuous inspiration

<div align="center"> Built with 🔢 in C for CodeAlpha C Programming Internship </div>
