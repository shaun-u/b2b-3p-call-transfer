//
//  B2b3pCallTransferFactory.cpp
//  b2b-3p-call-transfer
//
//  Created by Shaun Baker on 17/12/14.
//  Copyright (c) 2014 utribo. All rights reserved.
//

#include "B2b3pCallTransferFactory.h"
#include "B2b3pCallTransferSession.h"
#include "B2b3pUriMapper.h"

#include "AmConfigReader.h"
#include "log.h"
#include <sstream>

#define MOD_NAME "b2b3pcalltransfer"

EXPORT_SESSION_FACTORY(B2b3pCallTransferFactory,MOD_NAME);
EXPORT_PLUGIN_CLASS_FACTORY(B2b3pCallTransferFactory,MOD_NAME);


B2b3pCallTransferFactory::B2b3pCallTransferFactory(const std::string& name) :
    AmSessionFactory(name),uriMapper(new B2b3pUriMapper())
{
    
}

int B2b3pCallTransferFactory::onLoad()
{
    std::ostringstream os;
    
    AmConfigReader reader;
    if(reader.loadFile(AmConfig::ModConfigPath + std::string(MOD_NAME ".conf")))
    {
        os << "could not load config file; aborting" << std::endl;
        ERROR("%s",os.str().c_str());
        return -1;
    }
    
    return uriMapper->loadMappings(reader) ? 0 : -1;
}

void B2b3pCallTransferFactory::onUnload()
{
    
}

AmSession* B2b3pCallTransferFactory::onInvite(const AmSipRequest& req)
{
    std::auto_ptr< B2b3pCallTransferSession > session(new B2b3pCallTransferSession());
    
    return session.release();
}

AmSession* B2b3pCallTransferFactory::onInvite(const AmSipRequest& req, AmArg& session_params)
{
    std::auto_ptr< AmSession > session(onInvite(req));
    
    return session.release();
}

