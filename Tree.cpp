#include "Tree.h"

//	listsVector senior_branch , younger_branch ;
Tree::Tree( int size_of_list , int size_of_vector , int log_of_num_list , int lT )
{
	List list_buf( size_of_list , size_of_vector ) ;
	int num_list = 1 ;
	num_list << (log_of_num_list - 1 ) ;
	l = lT ;

	for( int i = 0 ; i < num_list ; i ++ )
		senior_branch.push_back( list_buf ) ;

	num_list << 1 ;

	for( int i = 0 ; i < num_list ; i ++ )
	{
		list_buf.to_fill() ;
		younger_branch.push_back( list_buf ) ;
	}
	
}


Tree::~Tree(void)
{
}
