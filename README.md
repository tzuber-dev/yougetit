# You Get an A (C++)

You can find the instructions for this lab at [More Than Equations][more-than-equations]. Create a new repository on GitHub to house your code. Be sure to make the repository public so that I can view and grade it.

We will use [CMake][cmake] to build executables (e.g. tests, the driver program, the benchmarks, etc.). Additionally, we will use [Catch2][catch2] for unit testing and benchmarking.

## Building Executables With CMake

You can use CMake to compile and build the executables for the project. First, you need to create a `build/` directory in the project. The build directory will house all of the compiled files as well as the `Makefile` for the project. Note that we do NOT check the `build/` directory into version control since each person will have to regenerate the executables on their own machine.

```bash
mkdir build
cd build
```

Once you are inside of the build directory, you can run the following command to build all of the executables for the project:

```bash
cmake .. && make
```

## Testing the App

Any tests that you define in the `tests/` directory must have a corresponding entry in `CMakeLists.txt`. After you build executables using CMake, you can run the corresponding test files from within the `build/` directory.

## Running the App

The `main.cpp` file at the root of the project must have a corresponding entry in `CMakeLists.txt`. After you build executables using CMake, you can run the driver program from within the `build/` directory.

## Running Benchmarks

Benchmarking is provided with Catch2. You can write benchmarking assertions alongside test assertions right in your test files.

[catch2]: https://github.com/catchorg/Catch2
[cmake]: https://cmake.org/
[more-than-equations]: https://morethanequations.com/Computer-Science/Labs/You-Get-an-A


---------------------------------------------------------------------------------------------------------

[ PROGRAM INSTRUCTIONS ] 

Welcome to the Gradebook program! Beginning with the instructions, we have 3 features you can use which are: 

- Add a new student to the class (first name, last name, student ID)
- Add a new assignment to the class (name of assignment, total points possible)
- Give a student a grade for an assignment (the grade can be between zero and the total points possible).

In order to use the first feature (add a new student to class), look at the main menu of the program and select
option 1. Upon doing that, enter in the required fields. After a successful addition to the classroom, you should see the "Success! Your student is now in this class."  message.
If not, please retry again. 

In order to use the second feature (add a new assignment to the class), please type in the number two in the user menu. Upon that, enter in the fields that are being presented to you. Once everything is successfully submitted, you should get "Success! Assignment had been added to the system." message. 
Please note, to see the full report please select the option 4 which is to get the report. 

In order to use the third feature (give a student a grade for an assignment), please enter the number 3 in the user menu. Again, please fill out the fields with your correct information. To enter a grade, you must had submitted a new student and a assignment before using this option. After successfully grading the assignment, you should get "Process finished with exit code -1073741795 (0xC000001D)" message. 

In order to generate a report, please be sure to select the option 4 in the user menu. 
