Flat  profile:



Each sample counts as 0.01 seconds.

   time | cumulative seconds | self seconds | calls | self Ts/call | total Ts/call | name 
------ | ------ | ------ | ------ | ------ | ------ | ------ 
 100.46 |  0.03 |  0.03 |  |  |  |  quicksort 


Call graph





granularity: each sample hit covers 2 byte(s) for 33.18% of 0.03 seconds


 index | % time | self | children | called | name 194964 
------ | ------ | ------ | ------ | ------ | ------ 
 |  |  |  |  |  quicksort  [1]
 [1] |  100.0 |  0.03 |  0.00 |  0+194964 |  quicksort  [1]
 |  |  |  |  194964 |  quicksort  [1]




Flat  profile:



Each sample counts as 0.01 seconds.

   time | cumulative seconds | self seconds | calls | self ns/call | total ns/call | name 
------ | ------ | ------ | ------ | ------ | ------ | ------ 
 100.46 |  0.07 |  0.07 |  424711 |  165.58 |  165.58 |  merge 


Call graph





granularity: each sample hit covers 2 byte(s) for 14.22% of 0.07 seconds


 index | % time | self | children | called | name 0.07 
------ | ------ | ------ | ------ | ------ | ------ 
 |  |  |  0.00 |  424711/424711 |  mergeSort  [2]
 [1] |  100.0 |  0.07 |  0.00 |  424711 |  merge  [1]
 |  |  |  |  849424 |  mergeSort  [2]
 [2] |  100.0 |  0.00 |  0.07 |  0+849424 |  mergeSort  [2]
 |  |  0.07 |  0.00 |  424711/424711 |  merge  [1]
 |  |  |  |  849424 |  mergeSort  [2]
