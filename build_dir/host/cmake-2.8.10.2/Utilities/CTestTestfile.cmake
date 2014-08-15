# CMake generated Testfile for 
# Source directory: /home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Utilities
# Build directory: /home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Utilities
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(CMake.HTML "/usr/bin/xmllint" "--valid" "--noout" "--nonet" "--path" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Utilities/xml/xhtml1" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Docs/cmake.html" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Docs/cmake-policies.html" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Docs/cmake-properties.html" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Docs/cmake-variables.html" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Docs/cmake-modules.html" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Docs/cmake-commands.html" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Docs/cmake-compatcommands.html" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Docs/ctest.html" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Docs/cpack.html" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Docs/ccmake.html")
ADD_TEST(CMake.DocBook "/usr/bin/xmllint" "--valid" "--noout" "--nonet" "--path" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Utilities/xml/docbook-4.5" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Docs/cmake.docbook" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Docs/ctest.docbook" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Docs/cpack.docbook" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Docs/ccmake.docbook")
SUBDIRS(Doxygen)
SUBDIRS(KWStyle)
