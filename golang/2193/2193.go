package main

import "fmt"

func main() {
	n := 0
	d := [91]int64{0, 1, 1}

	fmt.Scan(&n)
	for i := 3; i <= n; i++ {
		d[i] = d[i-1] + d[i-2]
	}
	fmt.Println(d[n])
}
