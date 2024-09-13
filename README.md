
# Starting Out With C++: From Control Structures through Objects (COS132)

This repository contains solutions, examples, and exercises from the textbook **"Starting Out With C++: From Control Structures through Objects"** tailored for the **COS132** course. It is worth knowing the textbook is currently outdated from the module and you should check with the latest study guide to see which textbook is currently used. The book covers fundamental C++ programming concepts and object-oriented programming principles that are critical for beginner programmers and students taking introductory computer science courses.

## Table of Contents

- [Introduction](#introduction)
- [Course Information](#course-information)
- [Getting Started](#getting-started)
- [Structure](#structure)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This repository is designed to assist anyone who is starting their programming journey by providing a comprehensive guide through C++ basics, control structures, functions, arrays, pointers, classes, and object-oriented programming concepts. It contains:

- **Code Examples**: Demonstrating key concepts and C++ syntax.
- **Exercises**: End-of-chapter problems and programming challenges.
- **Assignments**: Solutions to programming assignments relevant to the COS132 curriculum.

## Course Information

**Course Title**: COS132 - Introduction to Computer Science 
**Institution**: University of Pretoria 
**Textbook**: "Starting Out With C++: From Control Structures through Objects" by Tony Gaddis  
**Topics Covered**:
- Basic syntax and semantics of C++
- Control structures (loops, decision making)
- Functions and parameter passing
- Arrays, vectors, and strings
- Pointers and dynamic memory management
- Classes and object-oriented programming

## Prerequisites

To run C++ programs on Windows Subsystem for Linux (WSL), ensure you have the following installed:

1. **Windows Subsystem for Linux (WSL)**:
   - Follow the [Microsoft guide](https://docs.microsoft.com/en-us/windows/wsl/install) to install WSL.
   - Choose a preferred Linux distribution from the Microsoft Store (e.g., Ubuntu).

2. **C++ Compiler**:
   - Once WSL is set up, install a C++ compiler by running:
     ```bash
     sudo apt update
     sudo apt install g++
     ```
   - Verify the installation by checking the version:
     ```bash
     g++ --version
     ```

3. **Code Editor**:
   - You can use any code editor or IDE that supports WSL, such as Visual Studio Code, which has built-in support for WSL.


## Getting Started

To get started with the code examples and exercises in this repository:

1. **Clone the Repository**: 
   ```
   https://github.com/resego-morei/Starting_Out_With_C-.git
   ```
2. **Navigate to the Project Directory**:
   ```
   cd Starting_Out_With_C-
   ```
3. **makefile**:
   Here is a simple makefile structure of how I used to run my code. filename is the file name of the file you are compiling.
   ```
   filename:	filename.o
	g++ -o filename filename.o

   filename.o:	filename.cpp
   	g++ -c filename.cpp
   	
   run:
   	./filename
   	
   clean:
   	rm* .o filename	
	
   ```
4. **Compile and Run**:
   On the terminal of the IDE of your choice, type the following commands to make and make run you code in c++
   ```
   make
   make run
   ```
   
## Structure

The repository is organized by chapters from the textbook:

```
Starting_Out_With_C-/
│
├── Chapter1/           
│   ├── examples/
│   └── exercises/
│
├── Chapter2/          
│   ├── examples/
│   └── exercises/
│
├── Chapter3/           
│   ├── examples/
│   └── exercises/
│
├── Chapter4/          
│   ├── examples/
│   └── exercises/
│
├── Chapter5/           
│   ├── examples/
│   └── exercises/
│
├── Chapter6/          
│   ├── examples/
│   └── exercises/
│
├── Chapter7/           
│   ├── examples/
│   └── exercises/
│
├── Chapter8/          
│   ├── examples/
│   └── exercises/
│
├── Chapter9/           
│   ├── examples/
│   └── exercises/
│
├── Chapter10/          
│   ├── examples/
│   └── exercises/
│
├── Chapter11/           
│   ├── examples/
│   └── exercises/
│
├── Chapter12/          
│   ├── examples/
│   └── exercises/│
|
├── Chapter13/           
│   ├── examples/
│   └── exercises/
│
├── Chapter14/          
│   ├── examples/
│   └── exercises/
│
├── Chapter15/           
│   ├── examples/
│   └── exercises/
│
├── Chapter16/          
│   ├── examples/
│   └── exercises/
│
├── Chapter17/           
│   ├── examples/
│   └── exercises/
│
├── Chapter18/          
|   ├── examples/
|   └── exercises/
│
├── Chapter19/           
│   ├── examples/
│   └── exercises/
│
└──  Chapter20/          
    ├── examples/
    └── exercises/

```

Each chapter contains subfolders for examples and exercises, with clear naming conventions to easily locate specific topics or problems.

## Contributing

Contributions are welcome! If you would like to add solutions, improve documentation, or propose new exercises, please fork the repository and submit a pull request. Before contributing, please ensure your code follows the repository's coding standards and is properly documented.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
