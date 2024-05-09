#include"../h_files/header.h"
#include"../h_files/declaration.h"
#include"../h_files/structure.h"

void* insert_beg(void* arg){
#ifdef DEBUG
	cout<<"begin: "<<__FILE__<<" "<<__func__<<endl;
#endif
	node *start = (node*)arg;
	node *temp  = (node*)fptr[5]((void*)NULL);	//create_node_function shuold be called in order to insert the node in the list
	
	temp->next = start;
	start = temp;


		
#ifdef DEBUG
	cout<<"end: "<<__FILE__<<" "<<__func__<<endl;
#endif
	return (void*)start;

}
