//
//  B2b3pUriMapper.h
//  b2b-3p-call-transfer
//
//  Created by Shaun Baker on 03/01/15.
//  Copyright (c) 2015 utribo. All rights reserved.
//

#ifndef __b2b_3p_call_transfer__B2b3pUriMapper__
#define __b2b_3p_call_transfer__B2b3pUriMapper__

#include <string>

class AmConfigReader;

class B2b3pUriMapper
{
public:
    bool loadMappings(const AmConfigReader& reader);
    
    const std::string& mapApartyFromUri(const std::string& uri);
    const std::string& mapApartyToUri(const std::string& uri);
    const std::string& mapBpartyFromUri(const std::string& uri);
    const std::string& mapBpartyToUri(const std::string& uri);
};

#endif /* defined(__b2b_3p_call_transfer__B2b3pUriMapper__) */
