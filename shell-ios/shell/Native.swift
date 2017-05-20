//
//  Native.swift
//  shell
//
//  Created by datarize on 16.05.17.
//  Copyright © 2017 datarize. All rights reserved.
//

final class Native {
    private static let shared = Native()
    
    static func getInstance() -> Native {
        return .shared
    }
    
    private init() { }
    
    func getStringFromJNI() -> String {
        return String(get5());
    }
}
