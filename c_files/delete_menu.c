#include"../h_files/header.h"
#include"../h_files/declaration.h"
#include"../h_files/structure.h"

void* delete_menu(void *arg){
#ifdef DEBUG
	cout<<"begin"<<__FILE__<<" "<<__func__<<endl;
#endif
	node* start = (node*)arg;
	cout<<"\n==============================================================\n";
        cout<<"                          DELETION                            ";
        cout<<"\n==============================================================\n";
	cout<<"\n Enter the delete Operation you want to performe in the list\n";
        cout<<"\n 1. Delete at beg \n";
        cout<<"\n 2. Delete at end \n";
        cout<<"\n 3. Delete at Nth node \n";
        cout<<"\n 4. Delete after a value of node";
	cout<<"\n ENTER YOUR CHOICE = ";
	cin>>n;
#ifdef DEBUG
        cout<<"\t n "<<n<<__FILE__<<"\t "<<__func__<<endl;
#endif

	if(n > 0 && n < 5){
#ifdef DEBUG
        cout<<"\n in the if statement  "<<n<<__FILE__<<"\t "<<__func__<<endl;
#endif
		start =(node*)fptr[n+10]((void*)start);
	}
	else{
		printf("\n Wrong choice \n");
	}
#ifdef DEBUG
	cout<<"end"<<__FILE__<<" "<<__func__<<endl;
#endif
	return (void*)start;

}
