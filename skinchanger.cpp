#include "skinchanger.h"
#include "game/game.h"
#include "chat.h"  //CHANGE HERE/REPLACE IF YOU HAVE CHATWINDOW.H OK


//HEHEHEHEHE.         -UINT16  -> SUX HEHEHE

extern CChat *pChat;  //CHANGE HERE/REPLACE IF YOU HAVE CHATWINDOW.H OK
extern CGame *pGame;

//FROM MODSA   OK  
void cmd_skin(const char *params)
{
    if(!strlen(params))
        return pChat->AddInfoMessage("-> [CMD]: /changeskin {00FF00}[SKIN ID]");
//READ BRO OK
    CPlayerPed *pPlayer = pGame->FindPlayerPed();
    pPlayer->SetModelIndex(atoi(params));
}


void SetupCommands()
{
    pChat->AddCmdProc("changeskin", cmd_skin);
}