/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (C) 2012-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef DiagTypesXml_Link_h_
#define DiagTypesXml_Link_h_

#ifndef DIAGTYPESXML_LINKAGE
    #ifdef WIN32
        #ifdef FRAMEWORK_BUILD
            #define DIAGTYPESXML_LINKAGE __declspec(dllexport)
        #else
            #define DIAGTYPESXML_LINKAGE __declspec(dllimport)
        #endif
    #else
        #define DIAGTYPESXML_LINKAGE
    #endif
#endif


#endif /* DiagTypesXml_Link_h_ */