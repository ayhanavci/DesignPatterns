# Design Patterns (with World of Warcraft examples)

I have been wanting to refresh my memory of classic design patterns (gang of four) and i had some free time at hand. So i decided to read them again and code some samples of my own. While at it, i thought why not give a ride to some recent c++ features, visual studio code and cmake too ? If you add being one of the oldschool world of warcraft players on top of having time and ambition, it was clear what i was going to do and this small piece of code happened. 

If you wish to learn about design patterns, there are far simpler, cleaner and straightforward examples out there on the internet. This is not one of those. What i did here is using a lot of world of warcraft metaphors for implementing design patterns. 
I implemented these patterns just for having a bit of fun and for no serious purpose but if someone reads and enjoys them too, suit yourselves.

## Structure

* Every design pattern tells a story about how (part of) World of Warcraft game could be explained.
* There are three main categories of patterns. Creational, Structural and Behavioral. 
* Every individual pattern is listed under the related category. 
* No files in any pattern has external dependencies. Patterns don't try to reuse each others code. You can just cut a folder and it should work alone.
* Every individual pattern has its own namespace.
* Every design patter has [PatternName]Test.h and [PatternName]Test.cpp files with only one void [PatternName]Test() function in it. 
[PatternName]Test.h files are included in parent directory Testers.h, which is included in main.cpp
* There are three libraries, one for each pattern category. I opted to create objects for each pattern and then combining these objects in their related category library.
* I used a lazy version of hungarian notation.
* I tried to keep names of the files, variables, class names and functions clear. 
* Except a few, every class has its own file.


### Prerequisites

* CMake
* Any modern C++ (14) compiler. No external dependencies or libraries.

### Installing

I started with Visual Studio 2017 and then switched to Visual Studio Code 1.16. Since Visual Studio now supports CMake, it should compile this out of the box. For VS Code, you need to setup extensions and json files.

To work with Visual Studio Code

Install;
* [C/C++ for VS Code (Preview)](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) - C++ extension by microsoft
* [CMake For VisualStudio Code](https://marketplace.visualstudio.com/items?itemName=twxs.cmake) - CMake Support extension
* [CMake Tools](https://marketplace.visualstudio.com/items?itemName=vector-of-bool.cmake-tools) - Fancy CMake tools extension

Make sure these are setup properly
* Create a c_cpp_properties.json file with appropriate include paths.
* Setup a launch.json file like provided in .vscode directory. 
* settings.json and .cmaketools.json should get automatically created.

## Running the tests

Root directory contains a main.cpp file. Just uncomment the related line to test the pattern. 

## Authors

* **Ayhan Avcı** - [Linkedin](https://www.linkedin.com/in/ayhan-avci-pmp-pmi-acp-1a95365/)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## History
### **1.0**
* Implemented the following patterns
    * Behavioral
        * Chain Of Responsibility
        * Command
        * Interpreter
        * Iterator
        * Mediator
        * Memento
        * Observer
        * State
        * Strategy
        * Template Method
        * Visitor
    * Structural
        * Adapter
        * Bridge
        * Composite
        * Decorator
        * Facade
        * Flyweight
        * Proxy
    * Creational
        * Builder
        * Factory
        * Prototype
        * Singleton
    
## To Do
* Add Concurrency Patterns
* Add Architectural Patterns
* Add Uncategorized Patterns


## Acknowledgments
World of Warcraft, Warcraft and Blizzard Entertainment are trademarks or registered trademarks of Blizzard Entertainment, Inc. in the U.S. and/or other countries.
