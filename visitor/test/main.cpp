#include <iostream>
#include <cstdlib>
#include <string>

#include <visitor/shape_area_visitor.h>
#include <visitor/circle.h>
#include <visitor/rectangle.h>
#include <visitor/triangle.h>

using namespace std;

// Calculates the area of the conctete shapes provided by applying the visitor pattern
int main(int argc, char **argv){

  ShapeAreaVisitor shapeAreaVisitor;

  Circle circle(10);
  Rectangle rectangle(10, 20);
  Triangle triangle(10, 6);

  circle.accept( shapeAreaVisitor );
  rectangle.accept( shapeAreaVisitor );
  triangle.accept( shapeAreaVisitor );

  return EXIT_SUCCESS;
}
