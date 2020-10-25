/* hook.cpp
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

#include <Windows.h>
#include <App/Listener.hpp>

#include "hook.h"

namespace hook
{
    bool codClient::getExe(Client exePath, Client clientName)
    {
        // Gets the running app
        HANDLE client = GetApplication(clientName);
        
        // Get the client path
        HANDLE clientPath = GetPath(exePath);

        if(client==true&&clientPath==true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    const char* codClient::getUser(Client username, Client clientName)
    {
        bool user = Listen(NULL, "exe", clientName);

        const char* username = user.GetRequest("GET", "username:");

        return username;
    }
}