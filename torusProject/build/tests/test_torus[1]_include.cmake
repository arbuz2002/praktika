if(EXISTS "/Users/romk1a/Documents/GitHub/praktika/torusProject/build/tests/test_torus[1]_tests.cmake")
  include("/Users/romk1a/Documents/GitHub/praktika/torusProject/build/tests/test_torus[1]_tests.cmake")
else()
  add_test(test_torus_NOT_BUILT test_torus_NOT_BUILT)
endif()
