#!/bin/sh
mkdir KarmaiOSLightHouse
cd KarmaiOSLightHouse
# KeychainAccess -> Apple Development -> Organizational Unit -> CMAKE_XCODE_ATTRIBUTE_DEVELOPMENT_TEAM
cmake -DCMAKE_TOOLCHAIN_FILE=hello_imgui_cmake/ios-cmake/ios.toolchain.cmake -GXcode -DPLATFORM=OS64COMBINED -DCMAKE_XCODE_ATTRIBUTE_DEVELOPMENT_TEAM=48P2XXCRK8 -DHELLOIMGUI_USE_FREETYPE=off ..
