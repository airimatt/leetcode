class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        
        stones = [-s for s in stones]
        heapq.heapify(stones)

        while stones:
            if len(stones) < 2:
                return stones[0] * -1

            y = heapq.heappop(stones)
            x = heapq.heappop(stones)
           
            if x != y:
                heapq.heappush(stones, y - x)

        return 0
        