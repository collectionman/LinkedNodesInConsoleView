#ifndef COORDINATE_H
#define COORDINATE_H


class Coordinate {
public:
    Coordinate( int x = 0, int y = 0 ) ;

    int getXPoint( void ) ;
    int getYPoint( void ) ;

    ~Coordinate( void ) ;
private:
    int _x ;
    int _y ;
} ;

#endif // COORDINATE_H
