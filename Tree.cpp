#include "Tree.h"

Tree::Tree( int size_of_list , int size_of_vector , int log_of_num_list )
{
	List list_buf( size_of_list , size_of_vector ) ;
	int num_list = 1 << log_of_num_list  ;
	for( int i = 0 ; i < num_list ; i ++ , branch.push_back( list_buf ) ) ;
}
void Tree::init_first_level( int low_line_items_tmp )
{
	List list_buf( branch.size() , branch.begin()->size() ) ;

	for( branchIter iter = branch.begin() ; iter != branch.end() ; iter ++ )
	{
		list_buf.to_fill() ;
		branch.push_back( list_buf ) ;
	}
}
List Tree::get_root() 
{
	listsVector branch_root ;
	listsVector branch_tmp ;

	branch_tmp = branch ;

	for( int steps = branch.size() ; steps > 0 ; steps >> 1 )
	{
		branch_root.clear() ;
		
		for( branchIter iter = branch_tmp.begin() ; iter != branch_tmp.end() ; iter += 2 )
			branch_root.push_back( iter->butterfly( *( iter + 1 ) ) ) ;
		branch_tmp.clear() ;
		branch_tmp = branch_root ;
	}

	return *( branch_root.begin() ) ;
}
Tree::~Tree(void)
{
}
