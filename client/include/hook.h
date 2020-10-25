/* hook.h
* -------------
* This file is apart of the Call Of Duty Custom Server project
* Call of Duty is a trademark of Activison Blizzed, Inc. 
* CODCSP, does not make any attempt of copyright/trademark inferngment on Activison Blizzard, Inc.
* CODCSP, does not make any attempt for throwert the Call of Duty Terms of Service.
* Copyright Call of Duty Custom Server Project. All rights reserved
* ------------------------------
* If you find this file not on or from offical sources
* Please email us at: info@codcsp.org or Direct Message us on Twitter @CODCSP
* Offical Sources: github.com/codcsp/server, github.com/codcsp/client, codcsp.org, github.com/codcsp
*/

#pragma once

namespace hook
{
    typedef const char* Client;

    class codClient
    {
        // Functions
        bool getExe(Client exePath, Client clientName);
        const char* getUser(Client username);
    };
}