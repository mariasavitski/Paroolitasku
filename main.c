#include <stdio.h>


#include "database/database.h"

void main(void){

    struct site test = 
    {
        NULL,
        "YouTube",
        "https://www.youtube.com/",
        "maria.mets",
        "maria1234"
    };


    save(test);
    /**get("https://www.youtube.com/")*/
    return 0;
    
}