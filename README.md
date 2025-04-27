



# C++ Project 04 - Sub-typing Polymorphism | Abstract Classes and interfaces

###  General Rules for these projects: 
The purpose of these c++ projects is to get introduced into OOP. We are allowed to use standard c++17. 

- code must be coiled with `c++` and the flags `-Wall -Werror -Wextra`.
- there must be a Makefile for each exercise.
- Class names and corresponding filenames must be written in UpperCamelCase format.
- The `using namespace <ns_name>` and `friend` keywords are forbidden.
- There must be no memory leaks.
- Classes must be designed in the Orthodox Canonical Form.
- There can be no function implementations in headerfiles.
- Headers must be able to be used independently from others.
- Use of STL in the Module 08 and 09 only->no containers / Algorithm header


## 🔶 ex00 Polymorphism
### Objective: Implement a simple base class called Animal. And then two derived classes Cat and Dog. They have a name and a memberfunction makeSound() -> Cats dont bark

### Usage:
  ```
  cd ex00
  make
  ./Animals
```


### My thoughts: 
- It took me longer than i like to admit to understand that principle of Polymorhism in this subject. 


## 🔶 ex01 I don’t want to set the world on fire
### Ojective: Implement a Brain class. Dog and Cat will have a private Brain* attribute.Upon construction, Dog and Cat will create their Brain using new Brain(); Upon destruction, Dog and Cat will delete their Brain.
### Usage:
  ```
  cd ex01
  make
  ./AnimalsWithBrains
```

### My thoughts:
-it was interesting to learn the importance of the virtual destructor in a base class.

## 🔶 ex02 Abstract class
### Ojective: Fix the Animal class so nobody can instantiate it. Everything should work as before.
### Usage:
  ```
  cd ex02
  make
  ./AAnimalsWithBrains
```

### My thoughts:
- The pure virtual funtion syntax was way to simple to learn but not logical at all when you dont know about it. interesting concept, but makes so much sense.


