# Introduction to loop.
1.How for loop works?
- For loop require 3 conditions to be executed correctly.
- for(initialization; condition; update){
      std::cout<<"OUTPUT"}
- initialization: refer to starting point, declaration value for the integer. Most peoples, refer integer as i.
  - eg; if the starting point is value 1, then the initialization will be int i=1.
- condition: loop will iterate as long the i value meet the **TRUE** condition.
  - eg; condition is set to i<=5. But, what does its mean ?.
  - To understand how condition is executed, we have to look back to initialization.
  - The loop will iterate as long the i value is less or equal to 5. If the value(the 'i') met the condition(i<=5), it will passes the TRUE.
  - Loop will continue iterate as long it **TRUE**, but once it is **FALSE**, it can't be executed anymore. eg; When the i value reach 6 as the integer. The loop will automatically stops. Why ? because the integer is      out of the range what the condition wants. The condition only want to loop 1 until 5 only. Any value exceeding 5 will be automatically stop.
- update: the number will be either increment/decrement to start over the iteration back.
  - Once condition is done executed, compiler will executed update to reach the value how much we want to iterate, eg; 5 because we set the condition limit to 5.
  - We will increment the i by one. i+=1.
  - eg; once i=1 complete executed. The compiler will update the i value, increment by 1. So, the next iteration will be start with value i=2 as our starting point.

**EXAMPLE**\
Start: i=1\
Check: 1<=5 (true)\
Print: 1\
Update: i=2\
Check: 2<=5 (true)\
Print: 2\
... untill i=6\
Check: 6<=5 (false) → STOP\
output: 12345
