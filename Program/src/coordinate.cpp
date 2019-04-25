#include "coordinate.h"

Coordinate::Coordinate( int x, int y ) : _x( x ), _y( y ) {}

Coordinate::~Coordinate( void ) {
    _x = 0 ;
    _y = 0 ;
}
