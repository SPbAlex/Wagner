#pragma once
#include "List.h"

typedef vector< List > listsVector ;
typedef listsVector::iterator branchIter ;
class Tree
{
private:
	listsVector branch ;
	
public:
	
	Tree( int size_of_listT , int size_of_vector , int log_of_num_list ) ;
	void init_first_level( int low_line_items_tmp ) ;
	List get_root() ;
	~Tree(void) ;
};

