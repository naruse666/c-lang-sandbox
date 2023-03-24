typedef struct Module_struct Module;  /* module declaration */

Module *Module_create();      /* constructor */
void    Module_delete( Module * ); /* destructor */
int     Module_get_element( const Module * ); /* accessor */
void    Module_set_element( Module *, int );  /* modifier */


