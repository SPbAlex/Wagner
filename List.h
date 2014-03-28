#pragma once
#include <list>
#include <vector>
#include <stdlib.h>
using namespace std ;

typedef vector< int > elementsVector ;
typedef list< elementsVector > basicList ;
typedef basicList::iterator listIter ;
typedef elementsVector::iterator vectorIter ;

class List
{
private:
	basicList subleaf ;
public:
	List( int size_of_list , int size_of_vector ) ;
	List butterfly( List semple_list ) ;
	int size() ;
	void push_back( elementsVector basicVector ) ;
	void to_fill() ;
	~List(void) ;
};

