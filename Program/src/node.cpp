#include "node.h"

Node::Node( void ) : _coordinate( Coordinate( 0, 0 ) ), _next( nullptr ) {}

Node::Node( Coordinate coordinate ) : _coordinate( coordinate ), _next( nullptr ) {}

void Node::setNext( Node* node ) {
    _next = node ;
}

Node* Node::getNext( void ) {
    return _next ;
}

Node::~Node( void ) {
    _coordinate = Coordinate( 0, 0 ) ;
    if ( _next ) {
        _next = nullptr ;
    }
}
