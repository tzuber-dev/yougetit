#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"
#include <string>


TEST_CASE("Works good with three students in a class") {

     Gradebook gradebook;
     gradebook.addstudent("Bob"," ""Bobberson","ABC123");
     gradebook.addstudent("Sam","Sammerson","DEF456");
     gradebook.addstudent("Jess","Jesserson","HIJ789");


};

TEST_CASE("Works good with two students and a single assignment") {
     Gradebook gradebook;
     gradebook.addstudent("Bob"," ""Bobberson","ABC123");
     gradebook.addstudent("Sam","Sammerson","DEF456");
     gradebook.addassignment("Exam", 100);
     
};

TEST_CASE("Does not crash when there is no data to be shown") {
     Gradebook gradebook;
     REQUIRE_NOTHROW(gradebook.report());
};

