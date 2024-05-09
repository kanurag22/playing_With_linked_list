#include"../h_files/header.h"
#include"../h_files/declaration.h"
#include"../h_files/structure.h"

void* display(void *arg){
#ifdef DEBUG
	cout<<"begin"<<__FILE__<<" "<<__func__<<endl;
#endif
	node* temp = (node*)arg;
	cout<<"\n===============================================\n";
	if(temp == NULL){
		cout<<"\n list is empty ";
		update = 1;
	}
	else{
		while(temp != NULL){
			cout<<temp->data<<"->";
			temp = temp->next;
		}
	}

	cout<<"null";
	cout<<"\n===============================================\n";
	cout<<"\n\n\n";
	
#ifdef DEBUG
	cout<<"end"<<__FILE__<<" "<<__func__<<endl;
#endif
	return 0;

}
