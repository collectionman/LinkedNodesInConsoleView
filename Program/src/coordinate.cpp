#include "coordinate.h"

Coordinate::Coordinate( int x, int y ) : _x( x ), _y( y ) {}

int Coordinate::getXPoint( void ) {
    return _x ;
}

int Coordinate::getYPoint( void ) {
    return _y ;
}

Coordinate::~Coordinate( void ) {
    _x = 0 ;
    _y = 0 ;
}
