# Stress Tester for Competitive Programming in C++
A stress tester script for competitive programming in C++ that helps you find edge cases and validate your solution against a brute force solution. This script automates the process of generating test cases, running your solution, and comparing the output with the correct answer.
## Features : 
* Automatically generates test cases using a provided generator script
* Compares your solution's output with the correct answer from a brute force solution
* Highlights passed and failed tests with color-coded output
* Stops on the first failed test and provides detailed information about the input, your answer, and the correct answer

## Prerequisites :
* GCC compiler installed on your system
* Linux environment (Gitbash will also do)

## Usage :
### Get this repo in your local
```
git clone https://github.com/plagiarism2012/stress_tester.git
```
### Move to stress_tester
```
cd stress_tester/
```
### Do the required modifications
* Write your solution in `code.cpp`.
* Write a generator script in `gen.cpp` to generate random test cases.
* Write a brute force (or correct) solution in `brute.cpp` to generate the correct answer for the test cases.

### Make the files executable by granting permissions
```
chmod +x run.sh
```
```
chmod +x color_run.sh
```

### Run the stress tester
```
./run.sh
```

### You can use color_run for getting colours in terminal
```
./color_run.sh
```
