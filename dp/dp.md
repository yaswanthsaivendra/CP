# DP 

#### when do we use DP :

1. count smtng, often the number of ways.
   ex: no. of ways to climb the staircase.
2. minimize or maximize certain questions
   ex: reach the the top of staircase with minimal cost. 
3. yes/no questions. 
   ex: can u reach the top of staircase with this at most using this much cost.


- In 2 & 3 - first think of greedy approach.
- if that doesn't work then try dp.

#### how to solve a dp quesn.

two ways:

1. recursive - easy to think
2. iterative - space optmization (coz, no recursive stack)

to solve a problem,
1. think of a recursive bruteforce, write the pseudo code for it. 
2. decide upon no. of states
   states - we pass them to recursive func call
          - we include them in dp(1D/2D).
3. write the code for recursive bruteforce and apply dp to it.


- sometimes, recursive soln gives tle, then go for iterative.
- if recursive is not working (or) done with implementing recursive, then always try to implement iterative . 
- but dont start with thinking for iterative soln.
  

#### thinking about soln

- imagine, reaching nth step(or final stage). from where u can reach final step. what all are the possible ways to reach final nth step.
- from n-1 th step or from n-2 th step??
  <br>
- imagine being on some random stage, lets say n-2 th step. what all values we need for this nth step to move forward.
- this will decide the dimension of dp or no. of states.


### dimesion of dp/states of recursive calls

1D :
- minimum sum to reach nth step (type 2)
  int dp[n]
  - here n represents step no.
  - dp[n] gives min sum to reach nth step
- no. of ways to reach nth step (type 1)
  int dp[n]
  - here n represents step no.
  - dp[n] gives total no. of ways to reach nth step.
2D :
- a person can eat either pizza or mango or burger a day. on each day by eating eitheir one of them he will get A[i] or B[i] or C[i] happyness. 
- he wont eat the same food no two consecutive days.
- now taking n days into consideration. how much max. happyness one can get.

- here dp[n][par] 
  - here n represents n th day.
  - par represents the what the person ate(1 - pizza, 2 - mango, 3 - burger)
  - dp[n][par] returns max. happiness till the nth day.

  

