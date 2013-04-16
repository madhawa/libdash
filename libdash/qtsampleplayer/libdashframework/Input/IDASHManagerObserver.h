/*
 * IDASHManagerObserver.h
 *****************************************************************************
 * Copyright (C) 2012, bitmovin Softwareentwicklung OG, All Rights Reserved
 *
 * Email: libdash-dev@vicky.bitmovin.net
 *
 * This source code and its use and distribution, is subject to the terms
 * and conditions of the applicable license agreement.
 *****************************************************************************/

#ifndef LIBDASH_FRAMEWORK_INPUT_IDASHMANAGEROBSERVER_H_
#define LIBDASH_FRAMEWORK_INPUT_IDASHMANAGEROBSERVER_H_

#include <QImage.h>

namespace libdash
{
    namespace framework
    {
        namespace input
        {
            class IDASHManagerObserver
            {
                public:
                    virtual ~IDASHManagerObserver           () {}

                    virtual void AddFrame       (QImage* frame)  = 0;
                    //virtual void AddSamples     ()  = 0;
                    //virtual void AddSubtitle    ()  = 0;
            };
        }
    }
}
#endif /* LIBDASH_FRAMEWORK_INPUT_IDASHMANAGEROBSERVER_H_ */