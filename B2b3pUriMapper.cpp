//
//  B2b3pUriMapper.cpp
//  b2b-3p-call-transfer
//
//  Created by Shaun Baker on 03/01/15.
//  Copyright (c) 2015 utribo. All rights reserved.
//

#include "B2b3pUriMapper.h"

bool B2b3pUriMapper::loadMappings(const AmConfigReader& reader)
{
    return true;
}

const std::string& B2b3pUriMapper::mapApartyFromUri(const std::string& uri)
{
    return uri;
}

const std::string& B2b3pUriMapper::mapApartyToUri(const std::string& uri)
{
    return uri;
}

const std::string& B2b3pUriMapper::mapBpartyFromUri(const std::string& uri)
{
    return uri;
}

const std::string& B2b3pUriMapper::mapBpartyToUri(const std::string& uri)
{
    return uri;
}
