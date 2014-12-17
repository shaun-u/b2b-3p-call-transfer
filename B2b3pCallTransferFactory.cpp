//
//  B2b3pCallTransferFactory.cpp
//  b2b-3p-call-transfer
//
//  Created by Shaun Baker on 17/12/14.
//  Copyright (c) 2014 utribo. All rights reserved.
//

#include "B2b3pCallTransferFactory.h"

#define SIP_REPLY_NOT_IMPLEMENTED "Not Implemented"
#define MOD_NAME "b2b-3p-call-transfer"

EXPORT_SESSION_FACTORY(B2b3pCallTransferFactory,MOD_NAME);
EXPORT_PLUGIN_CLASS_FACTORY(B2b3pCallTransferFactory,MOD_NAME);


B2b3pCallTransferFactory::B2b3pCallTransferFactory(const std::string& name) :
    AmSessionFactory(name)
{
    
}

int B2b3pCallTransferFactory::onLoad()
{
    return 0;
}

void B2b3pCallTransferFactory::onUnload()
{
    
}

AmSession* B2b3pCallTransferFactory::onInvite(const AmSipRequest& req)
{
    AmSipDialog::reply_error(req,501,SIP_REPLY_NOT_IMPLEMENTED);
    return 0;
}

