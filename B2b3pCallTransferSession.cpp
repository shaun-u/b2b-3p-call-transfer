//
//  B2b3pCallTransferSession.cpp
//  b2b-3p-call-transfer
//
//  Created by Shaun Baker on 26/12/14.
//  Copyright (c) 2014 utribo. All rights reserved.
//

#include "B2b3pCallTransferSession.h"

B2b3pCallTransferSession::B2b3pCallTransferSession() : bParty(0),tParty(0)
{
    
}

void B2b3pCallTransferSession::onSipRequest(const AmSipRequest& req)
{
    if(dlg.getStatus() == AmSipDialog::Connected)
    {
        AmSession::onSipRequest(req);
    }
    else
    {
        cacheRequest(req);
    }
    
    proxyBParty(req);
}

void B2b3pCallTransferSession::send100Response(const AmSipRequest& req)
{
    
}

void B2b3pCallTransferSession::cacheRequest(const AmSipRequest& req)
{
    
}

void B2b3pCallTransferSession::proxyBParty(const AmSipRequest& req)
{
    
}
