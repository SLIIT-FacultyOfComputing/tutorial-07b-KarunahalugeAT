#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main() {

  // ========= DO NOT CHANGE THE INPUT CODE BELOW ==================
   int length, width, radius;
   cout << "Enter length of Rectangle : ";
   cin >> length;
   cout << "Enter width of Rectangle : ";
   cin >> width;
   cout << "Enter radius of Circle : ";
   cin >> radius;
   // ======== DO NOT CHANGE THE CODE GIVEN ABOVE ====================
   
   Rectangle *r1;
   r1= new Rectangle(length,width);
   Circle *c1;
   c1= new Circle(radius);
   r1-> display();
   c1-> display();
   delete r1;
   delete c1; 
  
   // ============ DO NOT CHANGE THE CODE BELOW ===================
   cout << "End of Program" << endl;
  
}
