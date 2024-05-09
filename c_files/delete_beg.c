#include"../h_files/header.h"
#include"../h_files/declaration.h"
#include"../h_files/structure.h"

void* delete_beg(void* arg){
#ifdef DEBUG
	cout<<"begin"<<__FILE__<<" "<<__func__<<endl;
#endif
	node* start = (node*)arg;
	if(start == NULL){
		cout<<"\n List is empty  ";
	}
	else{
		node *temp = start;
		cout<<"\n node will be deleted is = "<<temp->data;
		start = start->next;
		delete temp;

	}
		
	
#ifdef DEBUG
	cout<<"end"<<__FILE__<<" "<<__func__<<endl;
#endif
	return (void*)start;

}
