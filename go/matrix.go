package main

import (
	"fmt"
	"reflect"
	"testing"
)

func main(){
	// Running the test function
	TestCreateMatrix(nil)
}

func createMatrix(rows, cols int) [][]int {
	matrix := make([][]int, 0)
	for i := 0; i < rows; i++ {
		row := make([]int, 0)
		for j := 0; j < cols; j++ {
			row = append(row, i*j)
		}
		matrix = append(matrix, row)
	}
	return matrix
}

//don't end below this line

func TestCreateMatrix(t *testing.T) {
	type testCase struct {
		rows, cols int
		expected   [][]int
	}

	runCases := []testCase{
		{3, 3, [][]int{
			{0, 0, 0},
			{0, 1, 2},
			{0, 2, 4},
		}},
		{4, 4, [][]int{
			{0, 0, 0, 0},
			{0, 1, 2, 3},
			{0, 2, 4, 6},
			{0, 3, 6, 9},
		}},
	}

	submitCases := append(runCases, []testCase{
		{5, 7, [][]int{
			{0, 0, 0, 0, 0, 0, 0},
			{0, 1, 2, 3, 4, 5, 6},
			{0, 2, 4, 6, 8, 10, 12},
			{0, 3, 6, 9, 12, 15, 18},
			{0, 4, 8, 12, 16, 20, 24},
		}},
		{0, 0, [][]int{}},
	}...)

	testCases := runCases
	if withSubmit {
		testCases = submitCases
	}

	skipped := len(submitCases) - len(testCases)

	passCount := 0
	failCount := 0

	for _, test := range testCases {
		output := createMatrix(test.rows, test.cols)
		if !reflect.DeepEqual(output, test.expected) {
			failCount++
			t.Errorf(`---------------------------------
Test Failed: %v x %v matrix
Expecting:
%v
Actual:
%v
Fail
`, test.rows, test.cols, formatMatrix(test.expected), formatMatrix(output))
		} else {
			passCount++
			fmt.Printf(`---------------------------------
Test Passed: %v x %v matrix
Expecting:
%v
Actual:
%v
Pass
`, test.rows, test.cols, formatMatrix(test.expected), formatMatrix(output))
		}
	}

	fmt.Println("---------------------------------")
	if skipped > 0 {
		fmt.Printf("%d passed, %d failed, %d skipped\n", passCount, failCount, skipped)
	} else {
		fmt.Printf("%d passed, %d failed\n", passCount, failCount)
	}
}

func formatMatrix(matrix [][]int) string {
	var result string
	for _, row := range matrix {
		result += fmt.Sprintf("%v\n", row)
	}
	return result
}

// Simulate condition
var withSubmit = true
