\pagebreak

# lecture 02 06/04/19

***OOP-review:***

## inline function
member function definition given completely in the definition of the class
saves overhead of a function invocation
very short definitions

## static members
keyword static is used, global variable or member
static member functions can be accessed without an object ever being created class::memberFunction()

private:
  static int y; //will be shared by all object instances

## scope resolution operator
::

\pagebreak

# lecture 03 06/06/19

***OOP-review cont:***

## member initailization list
>                               member initialization list for base class
>                               using base class constructor
- Cat(int a, string b, bool c): Animal(d, e, f)

## Redifining
overloading - same name but different parameters, usually occurs in same class, fn, etc.
overriding  - same fuction signature/prototype, inheritance is usually involved

## constructors 
derived class constructor can't access private base class data,
must call base class constructor in deriv. 

## OOD (object oriented design) fundementals
- encapsulation
- inheritance
- polymorphism

> ex) pShape->draw();  

Shape is a pointer of base class and can point to Circle obj or Square or etc.. each have different virtual draw

## Access levels
- public
- protected
- private

\pagebreak

# lecture 04 06/10/19

## Operator Overloading
- most existing **not scope resolution or member access** C++ operators can be overloaded
- New operators cannot be created
- an operator function is a function that overloads an operator

> binary operator with two operands 

>> Deck a,b;  
>> bool isEqual a == b  

> a.operator==(b) same as a == b

### overloading example

*bool operator\<=(const clockType& otherClock const);*

>                                     ^ otherClock is being passed in 
>                                       as if (clock <= otherClock) rhs 
>                                       operator always passed in
>                                       with lhs considered as invoking
>                                       object

