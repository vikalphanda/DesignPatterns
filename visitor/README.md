Project : Visitor
=================
* Create an interface or abstract base class 'Shape'.
* Implement three concrete Shapes: 'Circle', 'Rectangle', 'Triangle'.
* Apply the visitor pattern to your data model.
* Write an AreaVisitor that computes the area of the shapes.
* Write a program that makes arbitrary instances of the data model and applies the AreaVisitor.
 

Running CMake
=============
To run CMake you need to go into visitor directory and do these steps:

1. Create build directory mkdir build.
2. Go into created build directory cd build.
3. Run CMake to create XCode project cmake -G Xcode ../, but you can create any other project you want.
4. Open XCode project open visitor.xcodeproj.
5. Build the project using cmake --build .
6. Location of test binary : ~/visitor/build/test/Debug/VisitorTests

Copyright and license
=====================
Code and documentation copyright 2017 Vikalp Handa and released under the MIT license.
