#include"../h_files/header.h"
#include"../h_files/declaration.h"
#include"../h_files/structure.h"

void* exit_func(void* arg){
#ifdef DEBUG
	cout<<"begin"<<__FILE__<<" "<<__func__<<endl;
#endif
	if(strcmp("SUCCESS",(char*)arg) == 0){
		cout<<"exit successfully \n";
		exit(1);
	}

	if(strncmp("FAILED",(char*)arg,6) == 0){
		cout<<"exit failed \n";
		exit(0);
		}
 
#ifdef DEBUG
	cout<<"end"<<__FILE__<<" "<<__func__<<endl;
#endif
	return 0;
}
