This repository serves as a record of my LeetCode coding exercises, including problem descriptions, solutions and annotations.

The problems are sourced from [leetcode](https://leetcode.com/problemset/all/) and are primarily solved using the C/C++ programming language within the LeetCode editor.

The problems are categorized into three folders: Easy, Medium, and Hard. Each folder contains individual files named with the problem number and name format: "ProblemNumber_ProblemName".

The file content begins with a "#" followed by the problem's description and examples. It is then followed by the code, comments, and the thought process for the solutions.You can use the search bar in the upper right corner to find specific problem numbers or descriptions to query the corresponding solution process. 

A new branch is created each week named "weekN_20xx/xx", indicating the week number and specific dates of the exercise.The changes are merged into the main branch and synchronized with the local repository on Sundays.

## For Windows Users
There are two methods to run your C language files on Windows.
1.Installing GCC, LLVM, or other compilers and using commands in PowerShell:
This method offers more flexibility and is suitable for writing code in a plain text editor. You can compile and run C language files through the command line. Follow these steps:
     ```
     
     cd /path/code 
     #Navigate to the directory where your source code is located.
     
     gcc file.c -o executable_name    
     #Replace file.c with the name of your C language source code file and executable_name with the desired name for the generated executable file.
     
     ./executable_name 
     #Run the executable file.
     
2.Installing an Integrated Development Environment (IDE) such as CodeBlocks, Dev-C++ etc.IDEs provide a user-friendly graphical interface and integrate compilers, editors, and debuggers. You can create C language projects, write code within the IDE, and use its features to compile and run the code.

Choose the method that suits your preference and workflow for running C language files on Windows.

## For Linux Users
I would suggest considering the direct installation of WSL on Windows, as it enables smooth transitioning between the two systems. For detailed instructions on how to install WSL, please refer to the [official documentation](https://learn.microsoft.com/en-us/windows/wsl/install) provided by Microsoft.Just like in the Windows system, there are primarily two ways to run C language files in Ubuntu, but there are some differences in system paths and command-line parameters.
1. Install an appropriate compiler using the package manager. Common choices include GCC, Clang, or LLVM.
   ```
   gcc -o executable_name file_name
   #Generate an executable file named executable_name from the original file_name file
   
   ./file_name
   #Output the results
   ```
2.Installing an Integrated Development Environment (IDE) such as CodeBlocks or Dev-C++ on Ubuntu.

## evaluation
You can find the corresponding evaluation script for each problem in the 'evaluation' folder. By using these evaluation scripts, you can effectively view the execution time and whether the test cases pass for each problem. This can help you address issues like the inability to display execution time on the LeetCode platform. 

Each evaluation script is named as 'evaluation_problemnumber' to match the problem number. Since I have used C language for solving the problems, the evaluation scripts are also written in C. Each evaluation script includes both the test cases provided by LeetCode and my own defined boundary values. Please note that the evaluation scripts are currently in the process of being completed and improved. Due to the inability to access all the test cases from the LeetCode platform, the consideration of test case scenarios in the evaluation scripts is limited. As a result, it is possible that all test cases pass in the evaluation scripts but the problem may not be accepted on the LeetCode. In the future, I will enhance the evaluation scripts to include memory usage analysis and the generation of random test cases to address this limitation.

If you discover any incorrect solutions or thought processes, please contact me at qianyi0830@163.com. Thank you.

Happy hacking!


