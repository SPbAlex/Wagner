#pragma once
#include "List.h"

typedef vector< List > listsVector ;
typedef listsVector::iterator branchIter ;
class Tree
{
private:
	listsVector senior_branch , younger_branch ;
	int size_of_list , l ;
	elementsVector get_elementsVector( int size ) ;
public:
	Tree( int size_of_listT , int size_of_vector , int log_of_num_list , int lT ) ;
	~Tree(void) ;
};

