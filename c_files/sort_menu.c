#include"../h_files/header.h"
#include"../h_files/declaration.h"
#include"../h_files/structure.h"

void* sort_menu(void* arg){
#ifdef DEBUG
	cout<<"begin"<<__FILE__<<" "<<__func__<<endl;
#endif
	cout<<"\n ----------------SORT ALGO TO BE PERFORMED-----------------------\n";
	cout<<"\n 1.Selection sort";
	cout<<"\n 2.Bubble sort";
	cout<<"\n 3.Insertion sort";
	cout<<"\n 4.Merge sort";
	cout<<"\n 5.Quick sort";
	cout<<"\n ---------------------------------------\n";

	
#ifdef DEBUG
	cout<<"end"<<__FILE__<<" "<<__func__<<endl;
#endif
	return 0;

}
