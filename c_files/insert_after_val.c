#include"../h_files/header.h"
#include"../h_files/declaration.h"
#include"../h_files/structure.h"

void* insert_after_val(void* arg){
#ifdef DEBUG
	cout<<"begin"<<__FILE__<<" "<<__func__<<endl;
#endif
	int val;
	cout<<"Enter the val after node will be inserted = ";
	cin>>val;
	node* temp  = (node*)arg;
	node* start = (node*)arg;
	// for inserting a value after a node first linaerly iterate over the list if val found insert the node else return no node found

	if(start == NULL){
		cout<<"\n ################### NO node is present \n ........... please wait returing to main winodow ################# \n";
		sleep(2);
		return (void*)start;
	}	
	while(temp->next != NULL){
		if(temp->data == val){
			node *temp_2 = (node*)fptr[5]((void*)NULL);
			temp_2->next = temp->next;
			temp->next = temp_2;
			return (void*)start;
		}
		temp = temp->next;
	}

	cout<< "\n ########## No node is found containing this value ############### \n";
	sleep(2);	
#ifdef DEBUG
	cout<<"end"<<__FILE__<<" "<<__func__<<endl;
#endif
	return (void*)start;

}
