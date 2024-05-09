#include"../h_files/header.h"
#include"../h_files/declaration.h"
#include"../h_files/structure.h"


void* main_menu(void*);  //main menu function
void* (*fptr[NOF])(void*); // function pointer for functions
void* exit_func(void*);

void* insert_menu(void*); // insert in linked list
void* delete_menu(void*); // delete a node in list
void* sort_menu(void*); // sort linked list

void* insert_beg(void*);
void* insert_end(void*);
void* insert_at_key(void*);
void* insert_after_val(void*);

void* delete_beg(void*);
void* delete_end(void*);
void* delete_at_key(void*);
void* delete_after_val(void*);

void* create_node(void*);
void* display(void*);

int n;
int update;
void init(){
#ifdef DEBUG
	cout<<"begin"<<__FILE__<<" "<<__func__<<endl;
#endif
	fptr[0] = exit_func;
	fptr[1] = main_menu;

	fptr[2] = insert_menu;
	fptr[3] = delete_menu;
	fptr[4] = sort_menu;

	fptr[5] = create_node;

	fptr[6] = insert_beg;
	fptr[7] = insert_end;
	fptr[8] = insert_at_key;
	fptr[9] = insert_after_val;
	
	fptr[10]= display;
	fptr[11]= delete_beg;
	fptr[12]= delete_end;
	fptr[13]= delete_at_key;
	fptr[14]= delete_after_val;

	

#ifdef DEBUG
	cout<<"end"<<__FILE__<<" "<<__func__<<endl;
#endif


}
