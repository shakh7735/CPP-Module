#pragma once

#ifndef __KAREN_H__
#define __KAREN_H__

#include <iostream>
#include <string>

class Karen
{
    
    public:
        Karen(void);
         ~Karen();
        void complain( std::string level );
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};

#endif
