Set — 4
User-Defined Data Types with DMA

Goal: Defining and using structs/classes without using any DMA
Compare how the same problem is solved in C and C++.
Part A (C): Define struct Rectangle { float length, breadth; }; and write a separate function calculateArea() that takes the struct as a parameter and returns the area.
Part B (C++): Define a class Rectangle with private members length and breadth, a constructor, and a member function calculateArea().
In 2–3 lines, explain one key difference in how data and functions are organised in the two versions.
A college wants to maintain student records — roll number, name, and marks — for a fixed class size of 10 students. Use a static array of struct Student or class Student to take input, display all records, and print the topper's name.
A company wants to store employee ID, name, department, and salary for a fixed number of 5 employees using a static array of struct Employee or class Employee. Display the employee with the highest salary.

Goal: Replace the fixed-size array with DMA using C/C++
A librarian wants to store details of books added to the library today but doesn't know in advance how many. Write a C program that defines a class or struct Book { char title[50]; char author[50]; float price; };, asks the user for n, uses malloc() or new to dynamically create an array of n Book structures, takes input, prints all details, and frees the memory.
A teacher wants to calculate the average marks of her class, but the number of students changes every semester. Using calloc(), dynamically allocate an integer array to store the marks of n students, calculate the average, and explain in 2–3 lines why calloc() is preferred over malloc() here.
A college wants to maintain student records containing roll number, name, and marks, where the number of students is entered at runtime. Dynamically allocate the records using malloc()/new, and let the user search for a student using their roll number and display the details in a formatted manner.

Goal: Replace the static DMA with Pointers using DMA
Create an array of structure pointers for employee records (i.e., each employee is allocated separately, and an array of class or struct Employee* holds their addresses). Implement search-by-ID and a delete operation that frees only that one employee's memory, leaving the rest of the array intact.
A contact list app stores names as an array of dynamically allocated strings, since each name has a different length. Write a C/C++ program that dynamically allocates an array of char*/string (one pointer per name), allocates each name's exact memory based on its length, and sorts the array alphabetically by swapping the pointers themselves (not the string contents) using strcmp().
Design a library management system using a C/C++and an array of dynamically created Book* pointers. Allow the user to add books at runtime (each book individually allocated) and delete a selected book, freeing only that book's own memory.
Create a class or struct that initially stores 3 employee records. When more employees join, increase the storage using realloc()/new [new: concept as mentioned in Set - 3(5)], while preserving all existing records. Print the array before and after resizing to confirm nothing was lost.
An HR system stores employee records using a class or struct Employee { char name[50]; int id; float salary; }; Dynamically allocate the array using malloc()/new, and sort the records by salary using pointer arithmetic only — no array indexing ([]) anywhere in the sort logic.
Design a menu-driven program for a Complete Student Management System using a struct or class combined with DMA that stores an ID, Name, Department, and Marks for a runtime-decided number of records. The system must support Add, Delete, Search, Update, Sort, Display, and Dynamic Memory Expansion (via realloc() or new), and every byte of allocated memory must be released before the program terminates. 
