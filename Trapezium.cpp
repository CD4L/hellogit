#include <vector>

#include <iostream>
#include “Trap.h”

void trapezium :: settopbase (float topb)

{

topbase = topb;

}

float trapezium :: gettopbase()

{

return topbase;

}

void trapezium :: setbotbase (float topb)

{

botbase = bbase;

}

float trapezium :: getbotbase()

{

return botbase;

}

void trapezium :: height (int h)

{

height = h;

}

int trapezium :: getheight()

{

return height;

}

trapezium :: trapezium()

{

topbase = 0.0;

botbase = 0.0;

height= 0; 
}
