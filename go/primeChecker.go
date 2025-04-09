/* Print all prime numbers from 2 to max */

package main
import "fmt"

func isPrime(max int) {
	for n:=0; n<max; n++ {
		if n==2 {
			fmt.Println(n)
			continue
		}
		if n%2==0 {
			continue
		}

		isPrime := true
		for i:=3; i*i<n; i++ {
			if n%i == 0 {
				isPrime = false
				break
			}
		}
		if !isPrime {
			continue
		}

		fmt.Println(n)
	}
}

func main () {
	isPrime(100)
}