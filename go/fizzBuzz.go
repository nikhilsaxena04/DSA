/* print fizz if divisible by 3
print buzz if divisible by 5
print fizzbuzz if divisible by 3 and 5
print the number otherwise */

package main
import "fmt"

func fizzbuzz() {
	for i:=0; i<=100; i++{
		if i%3 ==0 && i%5 ==0 {
			fmt.Println("fizzbuzz")
		} else if i%3 ==0 {
			fmt.Println("fizz")
		} else if i%5 ==0 {
			fmt.Println("buzz")
		} else {
			fmt.Println(i)
		}
	}
}

// func main(){
// 	fizzbuzz()
// }