Short and clean solution.
we need to find GCD string of two given strings.
Here first we check if gcd is even possible using (a + b == b + a)
a+b == b+a can be true only if both the strings are made of same substring added multiple times.
For example -
a = 'ABABAB'
b = 'AB'
​
both are made of 'AB' added multiple times and a+b == b+a .
Therefore GCD will exist for these two.
​
a= 'ABC'
b= 'A'
a+b = 'ABCA'
b+a = 'AABC'
a+b != b+a so gcd wont exist for these two strings.
Now that we know that GCD exists , another thing to notice is that the length of this GCD string will be the GCD of lengths of given two strings , so we take gcd(len(a),len(b)) and output the first prefix of this length from either of the strings.
```
string gcdOfStrings(string a, string b) {
return (a + b== b + a)  ? a.substr(0, gcd(a.length(), b.length())): "";
}
```