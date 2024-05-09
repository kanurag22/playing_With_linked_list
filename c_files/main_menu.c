#include"../h_files/header.h"
#include"../h_files/declaration.h"
#include"../h_files/structure.h"

void* main_menu(void* arg){
	system("clear");
#ifdef DEBUG
	cout<<"begin : "<<__FILE__<<" "<<__func__<<endl;
#endif

	
		fptr[10](arg);
		cout<<"\n Operation can be performed on above linked list will be";
		cout<<"\n 1 . Insertion"<<"\n 2 . Deletion"<<"\n 3 . Sort"<<"\n 0 . EXIT\n";
		cout<<"\n Enter your choice :-  ";
	cin>>n;
	if(n == 0)
		fptr[0]((void*)"SUCCESS");

#ifdef DEBUG
	cout<<"end"<<__FILE__<<" "<<__func__<<endl;
#endif
	return 0;

}
