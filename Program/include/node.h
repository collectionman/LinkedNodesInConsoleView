#ifndef NODE_H
#define NODE_H

#include "coordinate.h"

class Node {
public:
    Node( void ) ;
    Node( Coordinate coordinate ) ;

    void setNext( Node* node ) ;
    Node* getNext( void ) ;

    ~Node( void ) ;
private:
    Coordinate _coordinate ;
    Node* _next ;
} ;

#endif // NODE_H

