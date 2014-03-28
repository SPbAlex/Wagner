#include "List.h"


List::List( int size_of_list , int size_of_vector )
{
	subleaf.resize( size_of_list ) ;
	for( listIter iter = subleaf.begin() ; iter != subleaf.end() ; iter++ )
		iter->resize( size_of_vector ) ;

}
void List::to_fill()
{
	for( listIter iter = subleaf.begin() ; iter != subleaf.end() ; iter++ )
	{
		for( int i = 0 ; i < iter->size() ; i ++ )
			iter->push_back( rand() % 2 ) ;
	}
}
int List::size()
{
	return subleaf.size() ;
}
void List::push_back( elementsVector basicVector )
{
	subleaf.push_back( basicVector ) ;
}
List::~List(void)
{
}
