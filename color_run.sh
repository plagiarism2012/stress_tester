# Define colors
RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color

set -e
g++ code.cpp -o code
g++ gen.cpp -o gen
g++ brute.cpp -o brute
for((i = 1; ; ++i)); do
    ./gen $i > input_file
    ./code < input_file > myAnswer
    ./brute < input_file > correctAnswer
    if diff -Z myAnswer correctAnswer > /dev/null; then
        echo -e "${GREEN}Passed test: $i${NC}"
    else
        echo -e "${RED}Failed test: $i${NC}"
        echo -e "${RED}WA on the following test:${NC}"
        cat input_file
        echo -e "${RED}Your answer is:${NC}"
        cat myAnswer
        echo -e "${RED}Correct answer is:${NC}"
        cat correctAnswer
        break
    fi
done
