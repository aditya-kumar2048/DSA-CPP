All Power is within u ; You can do anything and everything

GOAL : To Master Data Structure & Algorithms using C++.

Day 1 (29/07/25)

Topic: Flowchart & pseudocode + Installation

                Data Structure
                |
                |---->PRIMITIVE
                |
                |
                |---->NON - PRIMITIVE
                            |
                            |
                    |-------------------------------------------------|
                LINEAR                                          NON-LINEAR
                    |----> STATIC ---> ARRAYS                       / | \
                    |                                              /  |  \
                    |----> DYNAMIC ----|                          /   |   \  
                            / |  \     |--->QUEUE                /    |    \
                           /  |   \                             /     |     \
                          /   |    \                         TREE    GRAPH  TABLE/SET
                         /    |     \
                        / LINKED LIST\
                    VECTOR            \
                                    STACK


HOW TO SOLVE A PROBLEM?
---> STEPS TO SOLVE PROBLEM : 

    IN REAL LIFE : -                              IN PROGRAMMING: 
    1. UNDERSTAND WHAT QUESTION IS SAYING.          1. UNDERSTAND WHAT QUESTION IS SAYING
    2. INPUT CLARITY                                2. INPUT CLARITY
    3. FIND SOLUTION (PEN & PAPER)                  3. FIND SOLUTION 
                                                    4. WRITE SOLUTION IN CODE

*PROGRAMMER KO PEHLE PEN PAPPER PR SOLUTION FIND KRNA CHAIYE THEN CODE PR JANA CHAHIYE*

# THE PROBLEMS WE SOLVES USING PEN AND PAPPER IS BY *FLOWCHART AND PSEUDOCODE*

# FLOWCHART
----> DIAGRAM OF SOLUTION 


# Components 

    Start / Exit ---------> write under the oval 
    input / output ---------> write i/p || o/p under prallelogram
    process ------------> write process under rectangle
    arrow -----------------> denoted by arrow sign (use to connect whole chart)
    decision -----------> write conditions under diamond shape

# PSEUDO-CODE
----> General logic of Solution.
----> English lke language(aadha paragraph likhte h aadha code)

Q. Find the Sum of 2 Numbers , a & b.

    Algorithm                                                           Flowchart                                           Pseudo-Code
----------------                                                     ------------------                                                
    1. start                                                     cant represent in vs code currently                            1. input a & b
    2. input a & b                                                                                                              2. sum = a + b
    3. sum = a + b                                                                                                              3. print sum
    4. print sum                                                                                                                4. exit
    5. exit/end


# QUESTIONS

        1. Area of Square                   Pseudo-code 
                                        --------------------
                                            1. input a 
                                            2. Area = a * a 
                                            3. print Area
                                            4. exit

        2. Min of 2 number                  Pseudo-Code
                                        ---------------------
                                            1. input a & b
                                            2. is a < b 
                                                    print a is min
                                            3. else 
                                                    print b is min
                                            4. exit


        3. Is number is odd or even          Pseudo-Code
                                        ----------------------
                                            1. input a 
                                            2. if a % 2 == 0
                                                    print even
                                            3. else 
                                                    print odd
                                            4. Exit

        4. Sum of no from 1 to N             Pseudo-Code
                                        -----------------------
                                            1. input N
                                            2. count = 1 , sum = 0
                                            3. while count <= N 
                                                        sum = sum + count
                                                        count = count+ 1 ; // count += 1
                                            4. print sum
                                            5. Exit

        5. Is number is prime or not        Pseudo-Code
                                        ------------------------
                                            1. input a 
                                            2. i = 2 
                                            3. while i<=(a-1)
                                                    if a%i == 0
                                                            print a is not prime
                                                            Exit
                                                        else
                                                            i +=1
                                            4. print a is prime 
                                            5. Exit


# HOMEWORK

        a. Calculate "SIMPLE INTEREST" from Principal(P) , Rate(R) , & Time(T)
        b. Calculate Max of 2 Number
        c. Calculate factorial of a no N
        d. Given a person's age , Find if they should get a driving license or not .

# H.W SOLUTIONS 

        A.             Pseudo-Code
                    -----------------
                    1. input P , R , T 
                    2. SI = (P*R*T)/100
                    3. Print SI
                    4. exit

        B.             Pseudo-Code
                    -------------------
                    1. input a & b
                    2. is a < b 
                            print b is maximum
                    3. else
                            print a is maximum
                    4. exit
        
        C.             Pseudo-Code
                    --------------------
                    1. input N
                    2. i = 1 , fact = 1 
                    3. while  i <=N 
                                fact *=i;
                                i +=1;
                    4. print fact
                    5. exit
        
        D.             Pseudo-Code
                    --------------------
                    1. input age
                    2. if age > 18 
                            print ELEGIBLE
                    3. else 
                            print NOT ELEGIBLE 
                    4. exit
