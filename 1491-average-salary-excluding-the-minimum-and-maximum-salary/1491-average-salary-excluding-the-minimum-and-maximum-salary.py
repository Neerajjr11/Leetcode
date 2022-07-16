class Solution:
    def average(self, salary: List[int]) -> float:
        if len(salary) == 1:
            return int(salary)
        salary.remove(max(salary))
        salary.remove(min(salary))
        return sum(salary)/len(salary)