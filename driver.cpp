#include <vector>

#include <iostream>

#include “Trap.h”

using namespace std;

int main()

{

vector <trapezium> V ;

trapezium shape;

shape.settopbase(2.5);

shape.setbotbase(5.6);

shape.setheight(8);

V.push_back(shape);

shape.settopbase(25.9);

shape.setbotbase(7.4);

shape.setheight(11);

V.push_back(shape);

shape.settopbase(3.8);

shape.setbotbase(7.2);

shape.setheight(18);

V.push_back(shape);

shape.settopbase(55.9);

shape.setbotbase(12.4);

shape.setheight(21);

V.push_back(shape);

for ( int i=0; i < V.size(); i++)

{

cout << V[i].gettopbase() << “ “ << V[i].getbotbase() << “ “ << V[i].getheight() << “ “ ;

}//endfor

} 
