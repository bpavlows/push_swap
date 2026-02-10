#!/bin/bash

# Valgrind Memory Leak Test Script for push_swap
# Tests push_swap and checker with various inputs

set -e

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

VALGRIND_FLAGS="--leak-check=full --show-leak-kinds=all --track-origins=yes --verbose"

echo -e "${BLUE}========================================${NC}"
echo -e "${BLUE}  Push_Swap Memory Leak Tests (Valgrind)${NC}"
echo -e "${BLUE}========================================${NC}\n"

# Test 1: Small stack (5 numbers)
echo -e "${YELLOW}[Test 1] Small stack (5 numbers)${NC}"
valgrind $VALGRIND_FLAGS ./push_swap 3 2 5 1 4 > /tmp/test1.out 2>&1
LEAK_COUNT=$(grep -o "definitely lost" /tmp/test1.out | wc -l)
if [ "$LEAK_COUNT" -eq 0 ]; then
	echo -e "${GREEN}✓ No memory leaks detected${NC}\n"
else
	echo -e "${RED}✗ Memory leaks detected${NC}\n"
fi

# Test 2: Medium stack (100 numbers)
echo -e "${YELLOW}[Test 2] Medium stack (100 numbers)${NC}"
NUMS=$(seq 1 100 | shuf | tr '\n' ' ')
valgrind $VALGRIND_FLAGS ./push_swap $NUMS > /tmp/test2.out 2>&1
LEAK_COUNT=$(grep -o "definitely lost" /tmp/test2.out | wc -l)
if [ "$LEAK_COUNT" -eq 0 ]; then
	echo -e "${GREEN}✓ No memory leaks detected${NC}\n"
else
	echo -e "${RED}✗ Memory leaks detected${NC}\n"
fi

# Test 3: Already sorted
echo -e "${YELLOW}[Test 3] Already sorted stack${NC}"
valgrind $VALGRIND_FLAGS ./push_swap 1 2 3 4 5 > /tmp/test3.out 2>&1
LEAK_COUNT=$(grep -o "definitely lost" /tmp/test3.out | wc -l)
if [ "$LEAK_COUNT" -eq 0 ]; then
	echo -e "${GREEN}✓ No memory leaks detected${NC}\n"
else
	echo -e "${RED}✗ Memory leaks detected${NC}\n"
fi

# Test 4: Reverse sorted
echo -e "${YELLOW}[Test 4] Reverse sorted stack${NC}"
valgrind $VALGRIND_FLAGS ./push_swap 5 4 3 2 1 > /tmp/test4.out 2>&1
LEAK_COUNT=$(grep -o "definitely lost" /tmp/test4.out | wc -l)
if [ "$LEAK_COUNT" -eq 0 ]; then
	echo -e "${GREEN}✓ No memory leaks detected${NC}\n"
else
	echo -e "${RED}✗ Memory leaks detected${NC}\n"
fi

# Test 5: Checker with valid operations (small)
echo -e "${YELLOW}[Test 5] Checker with valid operations${NC}"
OPS=$(./push_swap 3 2 1)
echo -e "$OPS" | valgrind $VALGRIND_FLAGS ./checker 3 2 1 > /tmp/test5.out 2>&1
LEAK_COUNT=$(grep -o "definitely lost" /tmp/test5.out | wc -l)
if [ "$LEAK_COUNT" -eq 0 ]; then
	echo -e "${GREEN}✓ No memory leaks detected${NC}\n"
else
	echo -e "${RED}✗ Memory leaks detected${NC}\n"
fi

# Test 6: Checker with invalid operation
echo -e "${YELLOW}[Test 6] Checker with invalid operation${NC}"
echo -e "invalid\nsa" | valgrind $VALGRIND_FLAGS ./checker 1 2 3 > /tmp/test6.out 2>&1
LEAK_COUNT=$(grep -o "definitely lost" /tmp/test6.out | wc -l)
if [ "$LEAK_COUNT" -eq 0 ]; then
	echo -e "${GREEN}✓ No memory leaks detected${NC}\n"
else
	echo -e "${RED}✗ Memory leaks detected${NC}\n"
fi

# Test 7: Error handling - duplicate numbers
echo -e "${YELLOW}[Test 7] Error handling (duplicate numbers)${NC}"
valgrind $VALGRIND_FLAGS ./push_swap 1 2 2 3 4 2> /tmp/test7.out || true
LEAK_COUNT=$(grep -o "definitely lost" /tmp/test7.out | wc -l)
if [ "$LEAK_COUNT" -eq 0 ]; then
	echo -e "${GREEN}✓ No memory leaks on error${NC}\n"
else
	echo -e "${RED}✗ Memory leaks on error${NC}\n"
fi

# Test 8: Error handling - invalid number
echo -e "${YELLOW}[Test 8] Error handling (invalid number)${NC}"
valgrind $VALGRIND_FLAGS ./push_swap 1 2 abc 3 4 2> /tmp/test8.out || true
LEAK_COUNT=$(grep -o "definitely lost" /tmp/test8.out | wc -l)
if [ "$LEAK_COUNT" -eq 0 ]; then
	echo -e "${GREEN}✓ No memory leaks on error${NC}\n"
else
	echo -e "${RED}✗ Memory leaks on error${NC}\n"
fi

echo -e "${BLUE}========================================${NC}"
echo -e "${BLUE}  Memory Tests Complete${NC}"
echo -e "${BLUE}========================================${NC}\n"

# Summary report
echo -e "${YELLOW}Summary:${NC}"
echo "Run 'valgrind --leak-check=full ./push_swap <numbers>' to check a specific test"
echo "For detailed reports, check /tmp/test*.out files"
