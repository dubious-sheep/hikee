package main
import "fmt"
func main() {
	var t,n,h int
	var max [10]int 
	fmt.Scan(&t)
	
	for a:=0; a<t; a++ {
		fmt.Scan(&n)
		for n > 0  {
			fmt.Scan(&h) 
			if h > max[a] {
				max[a] = h
			}
			n--
		}
		
	}
	fmt.Println("Output:")
	for j := 0; j < len(max); j++ {
		if max[j] > 0 {
			fmt.Println(max[j])
		}
    }

}
