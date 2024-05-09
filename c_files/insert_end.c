#include"../h_files/header.h"
#include"../h_files/declaration.h"
#include"../h_files/structure.h"

void* insert_end(void* arg){
#ifdef DEBUG
	cout<<"begin"<<__FILE__<<" "<<__func__<<endl;
#endif
	node *start = (node*)arg;
	node *temp = (node*)fptr[5]((void*)NULL); // creating node
	node *temp_2 = (node*)arg;
	
	if(start == NULL){
		start = temp;
	}
	else{
	
		while(temp_2->next !=  NULL){
			temp_2 = temp_2->next; 
		}
		temp_2->next = temp;
	}

	

		
#ifdef DEBUG
	cout<<"end"<<__FILE__<<" "<<__func__<<endl;
#endif
	return (void*)start;

}
