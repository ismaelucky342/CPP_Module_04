# CPP Module 04 - Subtype Polymorphism, Abstract Classes, and Interfaces

## Overview

This project explores advanced Object-Oriented Programming concepts in C++98, focusing on **polymorphism**, **virtual functions**, **abstract classes**, and **interfaces**. Through four progressive exercises, we implement inheritance hierarchies and demonstrate the power of runtime polymorphism.

## Learning Objectives

- Understanding **virtual functions** and **virtual destructors**
- Implementing **subtype polymorphism** 
- Creating **abstract base classes** with pure virtual functions
- Working with **interfaces** in C++
- Managing **deep copy** vs **shallow copy** in inheritance
- Exploring the **Interface Segregation Principle**
- Memory management in polymorphic hierarchies

## Key Concepts

### Virtual Functions
Virtual functions enable **runtime polymorphism**, allowing derived classes to override base class methods. The correct method is called based on the actual object type, not the pointer/reference type.

### Abstract Classes
Classes with at least one **pure virtual function** (`= 0`). They cannot be instantiated directly and serve as base classes that define interfaces for derived classes.

### Interfaces
Pure abstract classes that define a contract without implementation. In C++, interfaces are typically classes with only pure virtual functions.

### Deep Copy vs Shallow Copy
- **Shallow Copy**: Copies pointer values, leading to shared memory
- **Deep Copy**: Creates new objects and copies data, ensuring independent instances

## Project Structure

```
CPP_Module_04/
├── ex00/          # Basic Polymorphism
├── ex01/          # Deep Copy and Brain Class
├── ex02/          # Abstract Animal Class  
├── ex03/          # Interface & Materia System
└── README.md      # This file
```

## Exercises

### Exercise 00: Polymorphism Basics
**File:** `ex00/`

**Objective:** Implement basic polymorphism with virtual functions.

**Classes Implemented:**
- `Animal` (base class with virtual `makeSound()`)
- `Dog` (derived from Animal)
- `Cat` (derived from Animal)
- `WrongAnimal` (demonstrates non-virtual behavior)
- `WrongCat` (derived from WrongAnimal)

**Key Features:**
- Virtual destructor in base class
- Virtual `makeSound()` method
- Proper polymorphic behavior demonstration
- Comparison with non-virtual implementation

**Concepts Demonstrated:**
- Virtual function mechanism
- Runtime polymorphism
- Virtual destructors importance
- Method overriding vs method hiding

---

### Exercise 01: Deep Copy with Brain
**File:** `ex01/`

**Objective:** Implement deep copy semantics with composition.

**Classes Implemented:**
- `Animal` (base class)
- `Dog` (has-a Brain)
- `Cat` (has-a Brain)
- `Brain` (stores ideas/thoughts)

**Key Features:**
- Each animal has its own `Brain` object
- Deep copy constructor implementation
- Deep copy assignment operator
- Memory management for composed objects
- Brain contains array of 100 string ideas

**Concepts Demonstrated:**
- Composition relationship
- Deep copy vs shallow copy
- Resource management in inheritance
- Copy constructor and assignment operator

**Brain Class Details:**
```cpp
class Brain {
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain& other);
    ~Brain();
    Brain& operator=(const Brain& other);
    void think(int index, const std::string& idea);
    std::string recall(int index) const;
};
```

---

### Exercise 02: Abstract Animal Class
**File:** `ex02/`

**Objective:** Create an abstract base class that cannot be instantiated.

**Classes Implemented:**
- `Animal` (abstract base class)
- `Dog` (concrete derived class)
- `Cat` (concrete derived class)
- `Brain` (composition)

**Key Features:**
- Pure virtual `makeSound()` function
- Abstract Animal class (cannot instantiate)
- Concrete implementations in derived classes
- Same Brain functionality as ex01

**Concepts Demonstrated:**
- Abstract base classes
- Pure virtual functions
- Interface definition
- Forcing implementation in derived classes

**Abstract Animal Declaration:**
```cpp
class Animal {
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    virtual void makeSound() const = 0;  // Pure virtual
    const std::string& getType() const;
};
```

---

### Exercise 03: Materia Interface System
**File:** `ex03/`

**Objective:** Implement a complex interface-based system with multiple inheritance patterns.

**Classes Implemented:**
- `AMateria` (abstract base class)
- `Ice`, `Cure`, `Rage` (concrete materia types)
- `ICharacter` (interface)
- `Character` (implements ICharacter)
- `IMateriaSource` (interface)
- `MateriaSource` (implements IMateriaSource)

**Key Features:**
- Multiple interface implementations
- Factory pattern (MateriaSource)
- Inventory management (4-slot limit)
- Memory management for dropped items
- Clone pattern implementation

**Interfaces:**
```cpp
class ICharacter {
public:
    virtual ~ICharacter() {}
    virtual const std::string& getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

class IMateriaSource {
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(const std::string& type) = 0;
};
```

**Concepts Demonstrated:**
- Interface design patterns
- Factory pattern
- Observer pattern (use on target)
- Memory leak prevention
- Multiple inheritance concepts

## Compilation

Each exercise includes a Makefile with the following targets:

```bash
# Compile the project
make

# Clean object files
make clean

# Clean everything
make fclean

# Recompile from scratch
make re
```

**Compilation flags:** `-Wall -Wextra -Werror -std=c++98`

## Usage Examples

### Exercise 00 - Basic Polymorphism
```cpp
const Animal* meta = new Animal();
const Animal* dog = new Dog();
const Animal* cat = new Cat();

std::cout << dog->getType() << std::endl;  // "Dog"
dog->makeSound();  // "Woof!"
cat->makeSound();  // "Meow!"
meta->makeSound(); // "Some generic animal sound"

delete meta;
delete dog;
delete cat;
```

### Exercise 01 - Deep Copy
```cpp
Dog original;
original.dog_think(0, "I love bones");

Dog copy = original;  // Deep copy
copy.dog_think(0, "I love treats");

// original and copy have different ideas
std::cout << original.dog_recall(0);  // "I love bones"
std::cout << copy.dog_recall(0);      // "I love treats"
```

### Exercise 02 - Abstract Class
```cpp
// Animal animal;  // Error: Cannot instantiate abstract class
Dog dog;           // OK: Concrete implementation
Cat cat;           // OK: Concrete implementation

Animal* ptr = &dog;  // OK: Pointer to abstract class
ptr->makeSound();    // Calls Dog::makeSound()
```

### Exercise 03 - Materia System
```cpp
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());

ICharacter* wizard = new Character("Gandalf");
ICharacter* target = new Character("Orc");

AMateria* spell = src->createMateria("ice");
wizard->equip(spell);
wizard->use(0, *target);  // "* shoots an ice bolt at Orc *"
```

## Implementation Details

### Memory Management
- All classes implement proper destructors
- Virtual destructors in base classes
- Deep copy for composed objects
- Prevention of memory leaks in materia system

### Design Patterns Used
- **Template Method Pattern**: Base class defines algorithm structure
- **Factory Pattern**: MateriaSource creates specific materia types
- **Strategy Pattern**: Different materia types with different behaviors
- **Composite Pattern**: Character contains multiple materia objects

### C++98 Compliance
- No C++11 features used
- Compatible with older compilers
- Standard library usage only
- Orthodox Canonical Form implementation

## Testing

Each exercise includes comprehensive tests covering:
- Basic functionality
- Edge cases
- Memory leak detection
- Polymorphic behavior verification
- Copy semantics validation

Run with valgrind to check for memory leaks:
```bash
valgrind --leak-check=full ./Polymorphism
```

## Notes

- **Virtual Destructors**: Essential in polymorphic hierarchies to ensure proper cleanup
- **Orthodox Canonical Form**: All classes implement constructor, copy constructor, assignment operator, and destructor
- **Interface Segregation**: Interfaces are kept small and focused
- **Liskov Substitution**: Derived classes can replace base classes without breaking functionality

## Skills Developed

- Advanced C++ OOP concepts
- Polymorphism and virtual function tables
- Abstract class and interface design
- Memory management in complex hierarchies
- Design pattern implementation
- Code organization and modularity

---

# Extras

With this project, you will gain a deep understanding of C++ polymorphism, abstract classes, and interfaces, preparing you for the next 5 cpp modules in the 42 curriculum.

-Born2code 

