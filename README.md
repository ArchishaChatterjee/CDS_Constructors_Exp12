# Experiment 12 - Constructors and Destructors in C++

## Aim
To study and implement constructors and destructors in C++ through the following programs:
- **12A** : Student class with constructor and member functions in C++  
- **12B** : Student class with constructor and out-of-class member function definitions  
- **12C** : Date class with parameterized constructor  
- **12D** : Student class with copy constructor  
- **12E** : Destructor demonstration in C++  

## Tools Used
- Programiz Online Compiler or Visual Studio (VS)

## Theory

### Constructors
- A **constructor** is a special member function of a class that is automatically called when an object is created.  
- It has the same name as the class and no return type.  
- Types of constructors:  
  - **Default Constructor** – initializes objects with default values.  
  - **Parameterized Constructor** – initializes objects with user-provided values.  
  - **Copy Constructor** – creates a new object as a copy of an existing object.  

### Destructor
- A **destructor** is a special member function with the same name as the class preceded by a `~` symbol.  
- It is automatically invoked when the object goes out of scope.  
- It is used to free resources like memory, files, or connections.  

---

## Algorithm

### 12A: Student Class with Constructor and Member Functions
1. Start  
2. Define a `Student` class with data members (e.g., name, roll number).  
3. Create a constructor to initialize these values.  
4. Create member functions to display data.  
5. Create an object and demonstrate functionality.  

### 12B: Student Class with Constructor and Out-of-Class Member Function Definitions
1. Start  
2. Define a class with constructor inside but declare member functions only.  
3. Define member functions outside the class using `::` scope resolution operator.  
4. Input and display student details using the object.  

### 12C: Date Class with Parameterized Constructor
1. Start  
2. Define a `Date` class with day, month, year.  
3. Create a parameterized constructor to initialize values.  
4. Display the date using a member function.  

### 12D: Student Class with Copy Constructor
1. Start  
2. Define a `Student` class with data members.  
3. Create a copy constructor to copy values from one object to another.  
4. Demonstrate by creating an object and then another using copy constructor.  

### 12E: Destructor Demonstration in C++
1. Start  
2. Define a class with a constructor and a destructor.  
3. Use constructor to initialize values and destructor to release or display a message when object is destroyed.  
4. Create objects inside a scope and observe constructor/destructor calls.  

---

## Functions
- Constructors (`ClassName()` , `ClassName(parameters)`)  
- Copy constructor (`ClassName(const ClassName &obj)`)  
- Destructor (`~ClassName()`)  
- Scope resolution operator `::` for out-of-class member function definitions  

---

## Conclusion
Through this experiment, I learned how constructors and destructors work in C++.  
I understood the role of default, parameterized, and copy constructors, as well as how destructors are used for cleanup.  
This enhanced my knowledge of object creation, initialization, and destruction in C++ object-oriented programming.
