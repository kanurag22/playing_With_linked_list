#include"../h_files/header.h"
#include"../h_files/declaration.h"
#include"../h_files/structure.h"

void* create_node(void* arg){
#ifdef DEBUG
	cout<<"begin : "<<__FILE__<<" "<<__func__<<endl;
#endif	
	//create_node_function shuold be called in order to insert the node in the list
	//int val;
	node *temp = (node*)malloc(sizeof(node));
//////////////////////////  If you want to enter your own values then uncomment below lines //////////////
//	cout<<"\nenter the value to be inserted in the node = ";
//	cin>>val;
//////////////////////////////////////////////////////////////////////////////////////////////////
	temp->data = update++;
	temp->next = NULL;

		
#ifdef DEBUG
	cout<<"end : "<<__FILE__<<" "<<__func__<<endl;
#endif
	return (void*)temp;

}
