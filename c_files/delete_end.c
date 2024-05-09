#include"../h_files/header.h"
#include"../h_files/declaration.h"
#include"../h_files/structure.h"

void* delete_end (void* arg){
#ifdef DEBUG
	cout<<"begin"<<__FILE__<<" "<<__func__<<endl;
#endif
      	node *start = (node*)arg;
	if(start == NULL){
		cout<<"\n list is empty";
	}

	else if(start->next == NULL){
		node* temp = start;
		start = start->next;
		delete temp;
	}

	else{
	node *temp_2 = start;
	node *temp_1 = start->next;

	while(temp_1->next != NULL){
		temp_1 = temp_1->next;
		temp_2 = temp_2->next;
		}
	temp_2->next = NULL;
	delete temp_1;
	
	}
	
#ifdef DEBUG
	cout<<"end"<<__FILE__<<" "<<__func__<<endl;
#endif
	return (void*)start;

}
