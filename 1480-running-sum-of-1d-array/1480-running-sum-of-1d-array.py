class Solution(object):
    def runningSum(self, nums):
        runningSum = []
        runningSum.append(nums[0])
        for i in range(1, len(nums)):
            runningSum.append( runningSum[i-1] + nums[i])
        return runningSum