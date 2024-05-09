#include"../h_files/header.h"
#include"../h_files/declaration.h"
#include"../h_files/structure.h"

void* insert_menu(void *arg){
#ifdef DEBUG
	cout<<"begin"<<__FILE__<<" "<<__func__<<endl;
#endif
	int val;
	node *start = (node*)arg;
	cout<<"\n==============================================================\n";
	cout<<"			INSETRTION			     ";
	cout<<"\n==============================================================\n";
	cout<<"\n Enter the insert Operation you want to performe in the list\n";
	cout<<"\n 1. Insert at beg ";
	cout<<"\n 2. Insert at end ";
	cout<<"\n 3. Insert at Nth node ";
	cout<<"\n 4. Insert after a value of node\n";
	cout<<"\n ENTER YOUR CHOICE = ";
	cin>>val;
	if(val >= 1 && val <= 4){ 
	start = (node*)fptr[5+val]((void*)start);
	}
	else
		cout<<"\n wrong choice";
#ifdef DEBUG
	cout<<"end"<<__FILE__<<" "<<__func__<<endl;
#endif
	return (void*)start;

}
