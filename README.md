# Status
[![Build status](https://ci.appveyor.com/api/projects/status/yag6iunrgo95x8x8/branch/master?svg=true)](https://ci.appveyor.com/project/PinkySan/pattern/branch/master)

# Information
This repository tries to show basic usage examples (and explanations) for design pattern

## Creational
In software engineering, creational design patterns are design patterns that deal with object creation mechanisms, trying to create objects in a manner suitable to the situation. The basic form of object creation could result in design problems or in added complexity to the design. Creational design patterns solve this problem by somehow controlling this object creation.

Creational design patterns are composed of two dominant ideas. One is encapsulating knowledge about which concrete classes the system uses. Another is hiding how instances of these concrete classes are created and combined.

Creational design patterns are further categorized into object-creational patterns and Class-creational patterns, where Object-creational patterns deal with Object creation and Class-creational patterns deal with Class-instantiation. In greater details, Object-creational patterns defer part of its object creation to another object, while Class-creational patterns defer its object creation to subclasses.

### Definition
The creational patterns aim to separate a system from how its objects are created, composed, and represented. They increase the system's flexibility in terms of the what, who, how, and when of object creation.

### Usage 
As modern software engineering depends more on object composition than class inheritance, emphasis shifts away from hard-coding behaviors toward defining a smaller set of basic behaviors that can be composed into more complex ones. Hard-coding behaviors are inflexible because they require overriding or re-implementing the whole thing in order to change parts of the design. Additionally, hard-coding does not promote reuse and makes it difficult to keep track of errors. For these reasons, creational patterns are more useful than hard-coding behaviors. Creational patterns make design become more flexible. They provide different ways to remove explicit references in the concrete classes from the code that needs to instantiate them. In other words, they create independency for objects and classes.

Consider applying creational patterns when:

* A system should be independent of how its objects and products are created.
* A set of related objects is designed to be used together.
* Hiding the implementations of a class library or product, revealing only their interfaces.
* Constructing different representation of independent complex objects.
* A class wants its subclass to implement the object it creates.
* The class instantiations are specified at run-time.
* There must be a single instance and client can access this instance at all times.
* Instance should be extensible without being modified.