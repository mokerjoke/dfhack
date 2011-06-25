/*
https://github.com/peterix/dfhack
Copyright (c) 2009-2011 Petr Mrázek (peterix@gmail.com)

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any
damages arising from the use of this software.

Permission is granted to anyone to use this software for any
purpose, including commercial applications, and to alter it and
redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must
not claim that you wrote the original software. If you use this
software in a product, an acknowledgment in the product documentation
would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and
must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source
distribution.
*/

#pragma once
#include "dfhack/Pragma.h"
#include "dfhack/Export.h"
#include "dfhack/Core.h"
#include "dfhack/extra/stdiostream.h"

extern DFHACK_EXPORT duthomhas::stdiostream dfout;
extern DFHACK_EXPORT FILE * dfout_C;

namespace  DFHack
{
    class DFHACK_EXPORT Console
    {
    public:
        Console();
        ~Console();
        /// Clear the console, along with its scrollback
        void clear();
        /// Position cursor at x,y. 1,1 = top left corner
        void gotoxy(int x, int y);
        /// Set color (ANSI color number)
        void color(int index);
        /// Enable or disable the caret/cursor
        void cursor(bool enable = true);
        /// Waits given number of milliseconds before continuing.
        void msleep(unsigned int msec);
    };
}