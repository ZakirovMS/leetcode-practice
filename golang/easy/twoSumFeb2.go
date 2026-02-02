package easy

// 1. Two Sum

func twoSum(nums []int, target int) []int {
	for iPos, iVal := range nums {
		for jPos, jVal := range nums[iPos+1:] {
			if iVal+jVal == target {
				return []int{iPos, jPos + iPos + 1}
			}
		}
	}

	return nil
}
