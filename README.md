# C++ Object-Oriented Programming (OOP) Examples

A comprehensive structural overview and documentation of standard OOP design patterns implemented across the provided codebase.

---

## Overview

This repository provides core practical demonstrations of Object-Oriented Programming (OOP) concepts in C++. Through multiple standalone modules, it addresses data encapsulation, constructor-based initialization, polymorphism via dynamic binding, and explicit structural definition using pure virtual functions.

---

## Project Architecture

The code consists of three primary, distinct implementations designed to highlight different object architectural patterns:

*   **Program 1: Book Inventory (Encapsulation & Object Arrays)**: Demonstrates standard encapsulation mechanics using public input interfaces interacting directly with private character-array buffers[cite: 1, 2]. *(Referenced in p1.PNG and p2.PNG)*
*   **Program 2: Person Records (Explicit Constructors & Pointer Context)**: Demonstrates the configuration of explicitly-defined constructor blocks, manual memory tracking routines via string copies, and self-referencing with the `this` pointer[cite: 1, 2]. *(Referenced in p3.PNG, p4.PNG, and p5.PNG)*
*   **Program 3: Animal Sounds & Shapes (Polymorphism & Abstract Base Classes)**: Illustrates run-time polymorphism through virtual methods, abstract interfaces, and safe dynamic resource reclamation via virtual destructors[cite: 1, 2]. *(Referenced in p6.PNG, p7.PNG, p8.PNG, p9.PNG, and p10.PNG)*

---

## Detailed Program Breakdowns

### 1. Book Encapsulation & Storage
Implements basic class components to build an array-backed structure tracking individual books via user inputs[cite: 1, 2].

```cpp
class book {
private:
    char title[50];
    char author[50];
    int publishedYear;
public:
    void books(); // Handles user I/O via cin/cout
};
