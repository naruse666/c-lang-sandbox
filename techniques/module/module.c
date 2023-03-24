#include <stdlib.h>

struct Module_struct {    /* module structure definition */
        int element;
};

#include "../../include/module.h"   /* include type declaration after structure definition */

Module *Module_create() { return (Module *)calloc( 1, sizeof( Module ) ); }
void    Module_delete( Module * m ) { free( m ); }
int     Module_get_element( const Module * m ) { return m->element; }
void    Module_set_element( Module * m, int e ) { m->element = e; }
