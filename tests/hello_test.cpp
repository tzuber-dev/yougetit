#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"
#include <string>


TEST_CASE("Works successfully with three students in a class") {

     Gradebook gradebook;
     gradebook.addstudent("Bob"," ""Bobberson","ABC123");
     gradebook.addstudent("Sam","Sammerson","DEF456");
     gradebook.addstudent("Jess","Jesserson","HIJ789");


};




TEST_CASE("Assignment position does not change") {
     Gradebook gradebook;
     gradebook.addstudent("Michael"," ""Jackson","ABC123");
     gradebook.addassignment("First homework", *"100");
     gradebook.addassignment("Unit Test", *"100");
     gradebook.addassignment("Second homework", *"100");
     gradebook.addassignment("Third homework", *"100");

     string reportanalysis = gradebook.report();

}
