//
//  mackernaltest.c
//  mackernaltest
//
//  Created by stallman on 14-11-7.
//  Copyright (c) 2014年 stallman. All rights reserved.
//

#include <mach/mach_types.h>

kern_return_t mackernaltest_start(kmod_info_t * ki, void *d);
kern_return_t mackernaltest_stop(kmod_info_t *ki, void *d);

kern_return_t mackernaltest_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t mackernaltest_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
