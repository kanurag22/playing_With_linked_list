#include"../h_files/header.h"
#include"../h_files/declaration.h"
#include"../h_files/structure.h"

void* delete_at_key(void* arg){
#ifdef DEBUG
	cout<<"begin"<<__FILE__<<" "<<__func__<<endl;
#endif
	int key;
	cout<<"\n Enter the node key which you want to delete = ";
	cin>>key;

	node *start = (node*)arg;
	if(start == NULL){
		cout<<"\n list is empty";
	}
	else if(key == 1)
	{
		node *temp = start;
		start = start->next;
		temp->next = NULL;
		delete temp;
	}	
	else{
		node *temp = start;
		for(int i=1;i< key-1;i++){
			temp = temp->next;
			if(temp->next == NULL){
				cout<<"\n not key is found";
				return (void*)start;
			}
		}

		node *temp_2 = temp->next;
		temp->next = temp_2->next;
		temp_2->next = NULL;
		delete temp_2;

	}
#ifdef DEBUG
	cout<<"end"<<__FILE__<<" "<<__func__<<endl;
#endif
	return (void*)start;

}
