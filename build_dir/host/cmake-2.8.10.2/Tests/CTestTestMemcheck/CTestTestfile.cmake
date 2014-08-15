# CMake generated Testfile for 
# Source directory: /home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck
# Build directory: /home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(CTestTestMemcheckUnknown "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/bin/ctest" "-S" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/Unknown/test.cmake" "-V" "--output-log" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/Unknown/testOutput.log" "-D" "PSEUDO_BC=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckUnknown PROPERTIES  PASS_REGULAR_EXPRESSION "Do not understand memory checker: /home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Bootstrap.cmk/cmake
(.*
)?Error in read script: /home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/Unknown/test.cmake
")
ADD_TEST(CTestTestMemcheckUnknownQuoted "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/bin/ctest" "-S" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/UnknownQuoted/test.cmake" "-V" "--output-log" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/UnknownQuoted/testOutput.log" "-D" "PSEUDO_BC=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckUnknownQuoted PROPERTIES  PASS_REGULAR_EXPRESSION "Do not understand memory checker: /home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Bootstrap.cmk/cmake
(.*
)?Error in read script: /home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/UnknownQuoted/test.cmake
")
ADD_TEST(CTestTestMemcheckNotExist "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/bin/ctest" "-S" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/NotExist/test.cmake" "-V" "--output-log" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/NotExist/testOutput.log" "-D" "PSEUDO_BC=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckNotExist PROPERTIES  PASS_REGULAR_EXPRESSION "Memory checker \\(MemoryCheckCommand\\) not set, or cannot find the specified program.")
ADD_TEST(CTestTestMemcheckDummyValgrind "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/bin/ctest" "-S" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyValgrind/test.cmake" "-V" "--output-log" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyValgrind/testOutput.log" "-D" "PSEUDO_BC=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyValgrind PROPERTIES  PASS_REGULAR_EXPRESSION "
-- Processing memory checking output: 
Memory checking results:
(BullseyeCoverage[^
]*
)?")
ADD_TEST(CTestTestMemcheckDummyValgrindPrePost "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/bin/ctest" "-S" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyValgrindPrePost/test.cmake" "-V" "--output-log" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyValgrindPrePost/testOutput.log" "-D" "PSEUDO_BC=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyValgrindPrePost PROPERTIES  PASS_REGULAR_EXPRESSION "
-- Processing memory checking output: 
Memory checking results:
(BullseyeCoverage[^
]*
)?")
ADD_TEST(CTestTestMemcheckDummyValgrindFailPre "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/bin/ctest" "-S" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyValgrindFailPre/test.cmake" "-V" "--output-log" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyValgrindFailPre/testOutput.log" "-D" "PSEUDO_BC=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyValgrindFailPre PROPERTIES  PASS_REGULAR_EXPRESSION "
Problem running command: /home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck[^
]*fail[^
]*
(.*
)?Problem executing pre-memcheck command\\(s\\).
(.*
)?Error in read script: /home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyValgrindFailPre/test.cmake
")
ADD_TEST(CTestTestMemcheckDummyValgrindFailPost "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/bin/ctest" "-S" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyValgrindFailPost/test.cmake" "-V" "--output-log" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyValgrindFailPost/testOutput.log" "-D" "PSEUDO_BC=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyValgrindFailPost PROPERTIES  PASS_REGULAR_EXPRESSION "
Problem running command: /home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck[^
]*fail[^
]*
(.*
)?Problem executing post-memcheck command\\(s\\).
(.*
)?Error in read script: /home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyValgrindFailPost/test.cmake
")
ADD_TEST(CTestTestMemcheckDummyPurify "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/bin/ctest" "-S" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyPurify/test.cmake" "-V" "--output-log" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyPurify/testOutput.log" "-D" "PSEUDO_BC=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyPurify PROPERTIES  PASS_REGULAR_EXPRESSION "
Cannot find memory tester output file: /home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyPurify/Testing/Temporary/MemoryChecker.log
(.*
)?Error in read script: /home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyPurify/test.cmake
")
ADD_TEST(CTestTestMemcheckDummyBC "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/bin/ctest" "-S" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyBC/test.cmake" "-V" "--output-log" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyBC/testOutput.log" "-D" "PSEUDO_BC=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyBC PROPERTIES  PASS_REGULAR_EXPRESSION "
Cannot find memory tester output file: /home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyBC/Testing/Temporary/MemoryChecker.log
(.*
)?Error parsing XML in stream at line 1: no element found
(.*
)?Error in read script: /home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyBC/test.cmake
")
ADD_TEST(CTestTestMemcheckDummyValgrindIgnoreMemcheck "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/bin/ctest" "-S" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyValgrindIgnoreMemcheck/test.cmake" "-V" "--output-log" "/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/DummyValgrindIgnoreMemcheck/testOutput.log" "-D" "PSEUDO_BC=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/shizhai/new_zhongwang/trunk/build_dir/host/cmake-2.8.10.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyValgrindIgnoreMemcheck PROPERTIES  PASS_REGULAR_EXPRESSION "
2/2 Test #2: RunCMakeAgain .*
1/1 MemCheck #1: RunCMake .*
-- Processing memory checking output: 
Memory checking results:
(BullseyeCoverage[^
]*
)?")
