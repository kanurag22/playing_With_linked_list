#include"../h_files/header.h"
#include"../h_files/declaration.h"
#include"../h_files/structure.h"

void* delete_after_val(void* arg){
#ifdef DEBUG
	cout<<"begin"<<__FILE__<<" "<<__func__<<endl;
#endif
	int value;
	cout<<"\n Enter the node of which you want to delete the node";
	cin>>value;

	node *start = (node*)arg;

	if(start == NULL){
		cout<<"\n list is empty";
	}
	else{
		node *temp = start;
		node *prev = NULL;
		
		while(temp != NULL){

			if(temp->data == value){
				if(prev == NULL){
					start = start->next;
					temp->next = NULL;
					delete temp;
					return (void*) start;
				}
				else{
					prev->next = temp->next;
					temp->next = NULL;
					delete temp;
					return (void*) start;
				}
			}
		
			prev = temp;
			temp = temp->next;
		}
	}
	
#ifdef DEBUG
	cout<<"end"<<__FILE__<<" "<<__func__<<endl;
#endif
	return arg;

}
