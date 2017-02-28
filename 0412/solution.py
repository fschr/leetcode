class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        def f(i):
            if i % 15 == 0:
                return "FizzBuzz"
            elif i % 3 == 0:
                return "Fizz"
            elif i % 5 == 0:
                return "Buzz"
            return str(i)
        return [f(i) for i in range(1,n+1)]
