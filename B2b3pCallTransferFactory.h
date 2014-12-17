//
//  B2b3pCallTransferFactory.h
//  b2b-3p-call-transfer
//
//  Created by Shaun Baker on 17/12/14.
//  Copyright (c) 2014 utribo. All rights reserved.
//

#ifndef b2b_3p_call_transfer_B2b3pCallTransferFactory_h
#define b2b_3p_call_transfer_B2b3pCallTransferFactory_h

#include "AmApi.h"

class B2b3pCallTransferFactory : public AmSessionFactory
{
public:
    B2b3pCallTransferFactory(const std::string& name);
    
    int onLoad();
    void onUnload();
    
    AmSession* onInvite(const AmSipRequest& req);
    
};

#endif
