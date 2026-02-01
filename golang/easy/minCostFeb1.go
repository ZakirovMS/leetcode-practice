package easy

// 3010. Divide an Array Into Subarrays With Minimum Cost.
func minimumCost(nums []int) int {
	costs := [3]int{nums[0], nums[1], nums[2]}
	for _, value := range nums[3:] {
		if costs[2] > value {
			if costs[1] > costs[2] {
				costs[1] = costs[2]
			}

			costs[2] = value
		} else if costs[1]+costs[2] > costs[2]+value {
			costs[1] = costs[2]
			costs[2] = value
		}
	}

	return costs[0] + costs[1] + costs[2]
}
