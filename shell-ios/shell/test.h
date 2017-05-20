//
//  test.h
//  shell
//
//  Created by datarize on 15.05.17.
//  Copyright © 2017 datarize. All rights reserved.
//

#ifndef test_h
#define test_h

#include "native-lib.h"

#if __cplusplus
extern "C" {
#endif
    
    int get5();
    
    int stringFromJNI(){
        return get5();
    }
    
#if __cplusplus
}   // Extern C
#endif




#endif /* test_h */
