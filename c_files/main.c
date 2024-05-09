#include"../h_files/header.h"
#include"../h_files/declaration.h"
#include"../h_files/structure.h"

int main(){
	
#ifdef DEBUG
	cout<<"begin"<<__FILE__<<" "<<__func__<<endl;
#endif


	init();
	node *start = NULL;
	
	while(1){

	fptr[1]((void*)start);
#ifdef DEBUG
        cout<<n;
#endif
	if(n < 4 && n >= 0)
		start = (node*)fptr[n+1]((void*)start); // only three options will be given as insert,delete,sort
	else
		cout<<"\n Wrong choice \n";
	}

#ifdef DEBUG
	cout<<"end"<<__FILE__<<" "<<__func__<<endl;
#endif
	return 0;

}
