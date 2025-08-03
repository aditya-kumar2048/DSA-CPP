# ALL Power is Within YOU ; YOU can do ANYTHING and EVERYTHING

# Goal : To Master Data Structure and Algorithm using C++

`Day - 6` (03/08/25)
___

`Topic:` Binary Number System
___
*What are Binary Number System?*
--- > We have only see a number system in maths i.e., Decimal number system and its range is from 0-9 = 10 is also known as dec that's why we call it as decimal no system. computer only knows binary no . binary no are only 0 or 1; it is also known as base 2 element.
___
*Types of Number system:*
    -Binary No(0-1) ------> Base-2
    -Octal No(0-7) -------> Base-8
    -Decimal No(0-9) ------> Base-10
    -HexaDecimal No(0-9,A,B,C,D,E,F)---------> Base-16

# Decimal to Binary Conversion
    *How to convert*
    ---> If we go through math process we just divide the ques by 2 till the quotient will be 0.
                        eg : 42(decimal) -----> 101010(binary)
                             50(decimal) -----> 110010(binary)

___                    
        ivided by 2| Question | Remainder   || divided by 2| Question | Remainder
            2      | 42       | 0 ⬆️        ||          2  |   50     | 0
            2      | 21       | 1  |        ||          2  |   25     | 1
            2      | 10       | 0  |        ||          2  |   12     | 0
            2      |  5       | 1  |        ||          2  |    6     | 0  
            2      |  2       | 0  |        ||          2  |    3     | 1   
            2      |  1       | 1  |        ||          2  |    1     | 1
            ------------------                        ----------------
                        0                                      0              

        * Niche se upar tk jo v value hota h wo hi binary no hota h*


___
*CW -* 

        - 2 = (10)
        - 3 = (11)
        - 4 = (100)
        - 5 = (101)
        - 6 = (110)
        - 7 = (111)
        - 8 = (1000)
        - 9 = (1001)
        - 10= (1010)

# Common Numbers 
    0 ---> 0
    1 ---> 01
    2 ---> 10
    3 ---> 11
    4 ---> 100
    5 ---> 101
    6 ---> 110
    7 ---> 111
    8 ---> 1000
    9 ---> 1001
    10 ---> 1010

# *SHORT TRICK*
    ..... 64 32 16 8 4 2 1 

    - Decimal to binary
    Just count the sum with the table the no. use we place 1 and the no. not use we place 0 . 
    - Binary to decimal
     Just add the no at that place were 1 comes and leave that no where 0 is placed.

# Two's Complement

    int n = 10                             Steps : 1. binary form convert
----> 1-> n = 1010                                 2. prefix with a 0.
      2-> n = 01010    
              |-> the first zero is name as Most Significant Bit (MSB)   ----> it shows the sign of ans if it is 1 it is neg and if 0 it is positive.   
     3-> n = 10101                                3. 1's complement(flip)
                                                        0 ---> 1
     4-> n = 10101                                      1 ---> 0
                +1                        4. add 1 to end of the no.    
            ---------
             10110

# Summary 

        Bin ---> Decimal conv.
        dec ---> Binary  conv.
        + their Codes
        Common Numbers
        Short tricks
        2's complement / 1's complement 


# HomeWork 
         -12 = 10011 ---> 1101