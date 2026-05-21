class Solution(object):
    def minDays(self, bloomDay, m, k):
        if m * k > len(bloomDay):  # Impossible case
            return -1

        def canMake(days):
            flowers = bouquets = 0
            for bloom in bloomDay:
                flowers = flowers + 1 if bloom <= days else 0
                if flowers == k:
                    bouquets += 1
                    flowers = 0
            return bouquets >= m

        low, high = min(bloomDay), max(bloomDay)
        while low < high:
            mid = (low + high) // 2
            if canMake(mid):
                high = mid
            else:
                low = mid + 1
        return low
        