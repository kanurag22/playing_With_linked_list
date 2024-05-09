using namespace std;

#ifndef NOF 
#define	NOF 20
#endif
//#define DEBUG 1
extern int n;
extern int update;
extern void* exit_func(void*);
extern void* main_menu(void*);

extern void* insert_menu(void*);
extern void* delete_menu(void*);
extern void* sort_menu(void*);

extern void* create_node(void*);

extern void* insert_beg(void*);
extern void* insert_end(void*);
extern void* insert_at_key(void*);
extern void* insert_after_val(void*);

extern void* delete_beg(void*);
extern void* delete_end(void*);
extern void* delete_at_key(void*);
extern void* delete_after_val(void*);


extern void* display(void*);

extern void* (*fptr[NOF])(void*);

extern void init();

