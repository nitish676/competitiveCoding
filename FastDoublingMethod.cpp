//Fast Doubling Method for calculating Fibonacci Series.
//F[2*k]  =  F[k]*(2*F[k+1] - F[k])
//F[2*k+1] = F[k+1]*F[k+1] + F[k]*F[k]
// For proof of above formula refer https://math.stackexchange.com/questions/1124590/need-help-understanding-fibonacci-fast-doubling-proof
//Following code will return F[n]  , F[n+1] as pair
//Complexity of Below code is O(log(n))
pair<int, int> fib (int n) {
    if (n == 0)
        return {0, 1};
    auto p = fib(n >> 1);
    int c = p.first * (2 * p.second - p.first);
    int d = p.first * p.first + p.second * p.second;
    if (n & 1)
        return {d, c + d};
    else
        return {c, d};
}
// Reference to above code is https://cp-algorithms.com/algebra/fibonacci-numbers.html
//list of problems to practice.
/*
https://toph.co/p/easy-sequence-2
https://www.spoj.com/problems/FIB64/
https://www.spoj.com/problems/FIBOSUM/
https://www.spoj.com/problems/MAIN74/
*/
