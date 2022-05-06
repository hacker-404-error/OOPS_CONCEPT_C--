# OOPS_CONCEPT_C++

### Object-oriented programming – As the name suggests uses objects in programming. Object-oriented programming aims to implement real-world entities like inheritance, hiding, polymorphism, etc in programming. `The main aim of OOP is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.`

<br>
<div align="center">
    <img src="https://media.geeksforgeeks.org/wp-content/uploads/OOPs-Concepts.jpg" alt="Types Of OOPs">
</div>
<br>

# Classes And Objects

- The building block of C++ that leads to Object-Oriented programming is a `Class`.
- It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class.
- A class is like a blueprint for an object.
- `Object`: An Object is an identifiable entity with some characteristics and behaviour. An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

|                                                                                            |      |      |      |
| ------------------------------------------------------------------------------------------ | ---- | ---- | ---- |
| [Structure Of Class](https://github.com/hacker-404-error/OOPS-IN-CPP#structure-of-class)   | []() | []() | []() |
| [Nesting Of Member Function]()                                                             | []() | []() | []() |
| [Making an Outside Function Inline]() | []() | []() | []() |
| []()                                                                                       | []() | []() | []() |
| []()                                                                                       | []() | []() | []() |
| []()                                                                                       | []() | []() | []() |

## `Structure Of Class`

```
class A-Structure_Of_Class
{
private:
    /* data */
public:
    A-Structure_Of_Class(/* args */);
    ~A-Structure_Of_Class();
};

A-Structure_Of_Class::A-Structure_Of_Class(/* args */)
{
}

A-Structure_Of_Class::~A-Structure_Of_Class()
{
}
```

Structure Of Class :<img src="https://c.tenor.com/CsqnkjKnojgAAAAi/dm4uz3-foekoe.gif" width=50px alt="pointing hand"> [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/A-Structure_Of_Class.cpp)

---

## `Making an Outside Function Inline`

- We can define a member function outside the class definition and use make it inline using qualifier inline in the header line of function definition.

```
inlnie void Class_Name :: Function_1()
{
    /*Code*/
    /*Function which are declare inside the class are by default inline
    But the function which are defined outside the function are not inline
    ,we need to explicitly apply inline property*/
}
```

---

Making an Outside Function Inline:<img src="https://c.tenor.com/CsqnkjKnojgAAAAi/dm4uz3-foekoe.gif" width=50px alt="pointing hand"> [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/B1-Inline_Member_Function.cpp)

---

## `Nesting Of Member Function`

- Whenever we call a member function inside another member function of one class it is known as Nesting of the member function. - Generally, the member function which is called by another member function is kept private so that it cannot be called directly using the dot operator.

```
void Class_Name :: Function_1()
{
    Function_2();  //nesting of member function
    // calling Functin_2 from From Function_1
}
```

Nesting Of Member Function:<img src="https://c.tenor.com/CsqnkjKnojgAAAAi/dm4uz3-foekoe.gif" width=50px alt="pointing hand"> [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/B-Nesting_Of_MemberFunction.cpp)

## Array within a Class
