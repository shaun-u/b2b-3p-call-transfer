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

class B2b3pCallTransferSession;
class B2b3pUriMapper;

class B2b3pCallTransferFactory : public AmSessionFactory
{
    std::auto_ptr< B2b3pUriMapper > uriMapper;
    
public:
    B2b3pCallTransferFactory(const std::string& name);
    
    int onLoad();
    void onUnload();
    
    /**
     * incoming leg of B2B call
     */
    AmSession* onInvite(const AmSipRequest& req);
    
    /**
     * outgoing leg of B2B call
     */
    AmSession* onInvite(const AmSipRequest& req, AmArg& session_params);
    
};

#endif
