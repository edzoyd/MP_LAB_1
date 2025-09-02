// Abdurazzoqov Abdurahmon 230045
/*
 * **************************************** 1 - Main fuction ***********************************************************

    Q1 Since the main method is static, it can be invoked by JVM without creating an object of the class.
    This is essential because, at the start of the program, no instances exist yet,
    and creating an object just to call the main method would be unnecessary overhead.

    Q2 Return type: Java main is void, while C++ main is typically int.
    Parameters: Java uses String[] args; C++ uses (int argc, char* argv[]).
    Access modifiers: Java main must be public static; C++ main has no access modifiers since it's a global function.

    Q3 In C/C++: The integer return value from main is the program’s exit status — 0 means success, non-zero means an error.
    In Java: main is void, but you can signal a non-zero exit using System.exit(code), where code is the desired status.

****************************************** 2 - Variables ***************************************************************

    Q1 Primitives: store the actual value directly, have fixed sizes, are typically allocated on the stack, and can’t be null.
    Reference types: store a memory address pointing to an object on the heap, can vary in size depending on the object, and can be null since they don’t hold the data itself.

    Q2 Scope: Where a variable can be accessed.
    Local scope: Exists only inside a method/block.
    Class/static scope: Fields belong to an object or the class itself.

    Q3 Static typing (C++/Java): Types fixed and checked at compile time.
    Dynamic typing: Types decided at runtime; errors show up only when executed.

****************************************** 3 - Control flow ************************************************************
*
/*  Q1. In while loop program checks first the condition and the doing task, in do-while it does the task after this, checks condition.
 *
*   Q2.A control structure for selecting among multiple paths based on a variable’s value.
case: label for a specific value.
break: stops fall-through to the next case.
default: runs if no case matches.

Q3. && (AND): stops if the first condition is false.
|| (OR): stops if the first condition is true.
Example:
if (obj != null && obj.isReady()) { ... }

****************************************** 4 - Functions-methods *******************************************************
*
*Q1. Passing arguments:

C++:

Pass-by-value → function gets a copy.

Pass-by-pointer → function receives address, can modify original via *ptr.

Pass-by-reference → function works directly on original using &.

Java: always pass-by-value — primitives pass their value, objects pass the reference itself by value (you can change the object’s state, but not which object is referenced).

Q2. Function/method overloading:

Defining multiple functions with the same name but different parameter lists (type, number, or order).

Return type alone cannot distinguish overloaded methods in C++ or Java.

Q3. Recursion and base case:

Recursion: a function calling itself.

Base case: condition that stops recursion.

Without a base case, recursion never ends and causes a stack overflow.

****************************************** 5 Comments  *******************************************************
*
*Q1. Importance of comments in teams:

Explain intent, clarify complex logic, and help others (or future you) understand and maintain code quickly.

Q2. Purpose of Javadoc/Doxygen:

Generate structured, readable documentation directly from comments in the source code.

Q3. “Good code is self-documenting”:

Clear names and structure reduce the need for comments, but comments are still useful for explaining why something is done, complex algorithms, or non-obvious decisions.

******************************************  6 Classes *******************************************************
*
*
/* Q1. Class vs. Object:

Class: a blueprint or template.

Object (instance): a concrete entity created from that blueprint.

Q2. Access specifiers:

public: accessible everywhere.

private: accessible only inside the class.

protected: accessible in the class and its subclasses.

Q3. Constructor:

Special method to initialize objects.

Default constructor: no-argument constructor automatically provided if you don’t define any constructors.

****************************************** 7 Enums *******************************************************
*
/* Q1. Advantages of enums:

Prevent invalid values, make code clearer, and group related constants logically.

Q2. Improved type safety and documentation:

Only predefined values are allowed → fewer bugs.

Names describe meaning → code is easier to read and maintain.

Q3. Java vs. C++ enums:



Java enums: are full classes — can have fields, methods, and constructors.

C++ enums:

Old C-style enums: just integers, no type safety.

Enum class (C++11): strongly typed, scoped, safer than old enums.

****************************************** 8 Inheritance *******************************************************
*

Q2: is-a means subclass inherits behavior; has-a means using composition.
Q3: Overriding redefines a base method in subclass.
    C++ uses virtual/override; Java uses @Override annotation.
Q4: Diamond problem = ambiguity in multiple inheritance;
    C++ fixes with virtual inheritance; Java avoids by using interfaces only.
*/

/*
===========================
9 Mixins(inFlutter,Multiple InheritanceinC ++)andInterfaces
===========================
Q2: Mixins/interfaces promote code reuse without strict is-a hierarchy.
Q3: Java default methods in interfaces can provide mixin-like behavior.
Q4: Inheritance vs composition vs mixins: choose based on flexibility, safety, and avoiding deep hierarchies.
*/

/*
===========================
 10 Polymorphism
===========================
Q2: Compile-time polymorphism = method overloading;
    Runtime polymorphism = overriding with virtual functions.
Q3: Abstract class (C++/Java) defines methods to override;
    interface (Java) or pure abstract class (C++) defines contract only.
Q4: Interfaces in Java and abstract classes in C++ (pure virtual) enable polymorphism.
*/

/*
===========================
 11 Async Operations
===========================
Q2: Async solves blocking I/O by letting other work run while waiting.
Q3: Parallel = tasks at same time on different cores; Concurrent = tasks interleave logically.
Q4: Future/Promise stores results of async tasks in Java (Future/CompletableFuture) and C++ (std::future).
*/

/*
===========================
 12 Exceptions
===========================
Q2: try handles errors, catch processes them, finally ensures cleanup;
    C++ uses RAII instead of finally.
Q3: Java has checked (compile-time) and unchecked (runtime) exceptions;
    C++ does not distinguish in type system.
Q4: Exceptions centralize error handling but can hurt performance if overused.
*/
