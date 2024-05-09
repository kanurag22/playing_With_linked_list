#include"../h_files/header.h"
#include"../h_files/declaration.h"
#include"../h_files/structure.h"

void* insert_at_key(void* arg){
#ifdef DEBUG
	cout<<"begin"<<__FILE__<<" "<<__func__<<endl;
#endif
	int key,val=1;
	//create_node_function shuold be called in order to insert the node in the list
	node* start = (node*)arg;
	node* temp = (node*)fptr[5]((void*)NULL);
	node* temp_2 = (node*)arg;
	cout<<"\n Enter the key after the node is to be inserted = ";
	cin>>key;

	if(start == NULL){
		cout<<" list is empty cannot insert that location inserting the node at beg";
		start = temp;
	}
	else{
		while(temp_2->next != NULL && key > val){
			temp_2 = temp_2->next;
			val++;
					
		}
		if(val > key){
			cout<<"\n cannot find the key node after which node can be inserted \n";
			delete temp;
			return (void*)start;
			}
		else{
			temp->next = temp_2->next;
			temp_2->next = temp;
		}
	}
		

		
#ifdef DEBUG
	cout<<"end"<<__FILE__<<" "<<__func__<<endl;
#endif
	return (void*)start;

}
