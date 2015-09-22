#include "PositionXY.hpp"


PositionXY::PositionXY(){this->x=-1;this->y=-1;};
PositionXY::PositionXY(double x, double y){this->x=x;this->y=y;};
PositionXY::~PositionXY(){};
void PositionXY::setX(double x){this->x=x;};
void PositionXY::setY(double y){this->y=y;};
double PositionXY::getX(void){return this->x;};
double PositionXY::getY(void){return this->y;}; 
