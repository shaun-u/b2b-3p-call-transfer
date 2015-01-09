//
//  B2b3pCallTransferSession.h
//  b2b-3p-call-transfer
//
//  Created by Shaun Baker on 26/12/14.
//  Copyright (c) 2014 utribo. All rights reserved.
//

#ifndef __b2b_3p_call_transfer__B2b3pCallTransferSession__
#define __b2b_3p_call_transfer__B2b3pCallTransferSession__

#include "AmSession.h"

class B2b3pCallTransferSession : public AmSession
{
    std::string bParty,tParty;
    
public:
    B2b3pCallTransferSession();
    
    virtual void onSipRequest(const AmSipRequest& req);
    
private:
    void send100Response(const AmSipRequest& req);
    void cacheRequest(const AmSipRequest& req);
    void proxyBParty(const AmSipRequest& req);
};


#endif /* defined(__b2b_3p_call_transfer__B2b3pCallTransferSession__) */
