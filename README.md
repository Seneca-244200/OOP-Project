# Project: Seneca Print Desk - A Campus Print Service System

## Objective
In this project, you will build an application that allows a campus print-desk assistant to prepare job tickets for print jobs and finishing services. The assistant selects a paper format for each print job and chooses staff-finished or self-service work for each finishing service. Finishing services can also include production notes, such as "bind on left".

Each ticket has a unique number within the program run. When a ticket is completed, it is saved in a separate file named using that ticket number.

### Milestones

| Milestone | Revision | Comments |
|-----------|:--------:|:--------:|
| [MS1](#milestone-1) | V1.0 | |
| [MS2](#milestone-2) | V1.0 | |
| [MS3](#milestone-3) | V1.0 | |
| [MS4](#milestone-4) | V1.0 | |
| [MS5](#milestone-5-the-final-milestone) | V1.0 | |

A print catalog entry represents one prepared job, such as a course handout or club poster. A finishing entry represents a service, such as binding or folding. The catalog contains the base price. You do not need to track quantities, stock, production dates or documents.

**All five milestones are available together on October 27, 2026.**  The milestones are cumulative: keep using and improving the modules you have completed as you move forward.

> **Execution samples:** Your professor will capture and post the sample outputs after the design is finalized. Until then, linked expected-output files are clearly marked as awaiting capture; they are not submitter comparison files. Use the tester instructions and data-entry sequences below. Valgrind banners are not part of the required program output.

---

## Milestone Due Dates
This project consists of **five milestones**, each with a specific due date. Start early and use the recommended development windows to plan your work. You may prepare for later milestones ahead of these windows.

All submission deadlines are at **11:59 p.m. America/Toronto**. The November and December deadlines use EST (UTC−05:00); the October publication and development-start dates use EDT (UTC−04:00).

### **Final Project Mark and Due Dates**

| Milestone | Mark | Due Date (2026) | Submission Policy |
|:---------:|:----:|:---------------:|------------------|
| MS1 | 10% | November 1 | Mandatory by December 6. Full milestone credit through November 8; zero milestone credit afterward. |
| MS2 | 10% | November 6 | Mandatory by December 6. Full milestone credit through November 13; zero milestone credit afterward. |
| MS3 | 10% | November 16 | Mandatory by December 6. Full milestone credit through November 23; zero milestone credit afterward. |
| MS4 | 10% | November 23 | Mandatory by December 6. Full milestone credit through November 30; zero milestone credit afterward. |
| MS5 | 60% | November 30 | See details below. |

Recommended development windows: MS1, October 27–November 1; MS2, November 2–6; MS3, November 7–16; MS4, November 17–23; MS5, November 24–30. December 1–6 is for late submissions and corrections.

> To allow partial submissions, **Milestone 5** has **six separately assessed parts**. Each is worth **10% of the project mark**. These are parts of MS5, not additional milestones.
> **Your project will only be marked if you submit all four earlier milestones and at least one of the six MS5 parts by the absolute cutoff.**

### **Milestone 5 Submissions**

| Submission | Mark | Due Date (2026) | Submission Policy |
|------------|:----:|:---------------:|------------------|
| m51 (List Finishing Services and Print Jobs) | 10% | November 30 | 10% deduction from the part's earned mark per calendar day late, up to 5 days. |
| m52 (Configure a Print Job) | 10% | November 30 | Same policy. |
| m53 (Configure a Finishing Service) | 10% | November 30 | Same policy. |
| m54 (Display a Ticket) | 10% | November 30 | Same policy. |
| m55 (Reset, Exit, and Save a Ticket) | 10% | November 30 | Same policy. |
| m56 (Foolproofing and Bad Data File) | 10% | November 30 | Same policy. |

> The **first four milestones** are assessed for **successful submission and timeliness**, not separate code-correctness grading. Full credit remains available through seven calendar days after the due date, then becomes zero. A zero-credit milestone must still be submitted for project completion.
> You may correct previous code as you progress. **MS5 evaluates the final code's quality and correctness.** Ask your professor if you want feedback on an earlier milestone.

For each late MS5 part, the deduction is 10% on December 1, 20% on December 2, 30% on December 3, 40% on December 4, and 50% on December 5. After December 5, the part earns zero, but it may still be submitted on December 6 to satisfy completion requirements. A December 6 submission does not restore lost timeliness marks.

These weights total **100% of the project**, not 100% of the course.

### **Submission Rejection Date: December 6, 2026**

**The absolute cutoff is December 6, 2026, at 11:59 p.m. Toronto time, inclusive. No submission is accepted afterward.**

- Missing any of MS1–MS4 at the cutoff makes the entire project incomplete and earns zero overall.
- At least one MS5 part must also be submitted by the cutoff for the project to be eligible for marking.
- The cutoff takes precedence over any other submission window.

---

## **Checking Milestone Due Dates**  

In every submission command in this document, replace `professor.userid` with **your professor’s Seneca user ID**, as provided by your professor. For example, the placeholder command path is `~professor.userid/submit`. Use your own professor’s account for all milestone and reflection submissions.

Once your professor has verified the Matrix setup, you can check the due date of each milestone using the `-due` flag in the submission command:

```bash
~professor.userid/submit 244/prj/m? -due
```
- Replace `m?` with the **assessment label**, such as `m1` or `m51`.  

---

## **Citation and Sources**

Develop your work in your **Assignment Zero repository** and follow the [repository development requirements](#repository-development-and-commit-history) below.

All submissions will be compared against those of other students from this and past semesters.  
If you borrow any code and do not provide proper citation, it will be considered a **violation of Academic Integrity**, and you will be **formally charged**.

When submitting your work, all source files must include complete student information and citation details.  
Please use the following template and modify it to suit your submission:

```cpp
/* Citation and Sources...
Final Project Milestone ?:
Module: [Module Name]
Filename: [Filename].cpp
Version #.#
Author: John Doe, StNo: 123123123, Email: jdoe@myseneca.ca
Revision History
-----------------------------------------------------------
Date      Reason
2026/10/15  Comments go here
2026/10/15  Comments go here
-----------------------------------------------------------
Citation to indicate that you have done all the work yourself
-----------------------------------------------------------
OR
-----------------------------------------------------------
Clearly indicate which part of the code was provided as help,
by whom, or from what source it was obtained.
-----------------------------------------------------------*/
```

> ⚠️ **Important:** Simply copying and pasting the above citation template without meaningfully modifying it to reflect your actual work and sources will be treated as **no citation** and may result in a **mark of zero** for that submission.

**Failure to include this citation** in *any* of your source files will result in a **mark of zero** for that submission.

If you **borrow any functions or code snippets** from another source, you must also include a **specific citation comment** above the relevant code, **in addition to** the general citation block at the top of the file.

If the borrowed code is **not from your professor**, marks may be **deducted** for that portion of the work.

> **Note:** This is not a group project. If two students submit similar code with a citation stating they collaborated, the project mark will be **shared between them** (e.g., each will receive a maximum of **50%**).



### **Example Citation for Borrowed Code:**

```cpp
// The following code is copied from Professor John Doe's class notes.
/// <summary>
/// Reads an unlimited number of characters from an input stream dynamically, resizing as needed.
/// </summary>
/// <param name="istr">Reference to the input stream to read from.</param>
/// <returns>Pointer to a dynamically allocated C-string containing the read characters.</returns>
char* Utils::read(istream& istr) const {
    ...
    return temp; 
}
```

> You **do not** need to cite any code provided as part of the official project template.


## **Compiling and Testing Your Program**  
All code must be compiled using the following command on **Matrix**:

```bash
g++ -Wall -std=c++11 -g -o ws file1.cpp file2.cpp ...
```

- `-Wall`: Reports all warnings.  
- `-std=c++11`: Uses the C++11 standard.  
- `-g`: Includes debugging symbols for better `valgrind` reports.  
- `-o ws`: Names the compiled application `ws`.  

The Matrix submitter uses a separate configuration for each assessment. It compiles your program, runs it under Valgrind and compares the output while you enter the prescribed test data. After successful checks, it packages your files and emails the submission to your professor. Receipt of this email confirms that the configured execution, output and memory-leak checks passed. Your professor then evaluates your code.

### Entering Test Values

Enter the test values manually, one line at a time, and watch how your program responds. `<ENTER>` means press Enter; do not type those characters. A line containing only `<ENTER>` means press Enter without typing a value. If the response is unexpected, stop and investigate the bug before continuing.

### **Checking for Memory Leaks**
To check for possible memory leaks, run:

```bash
valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./ws
```
---

## Project Implementation Notes: **Very Important, Read Carefully**  

- All project classes and functions other than the application entry point must be within the `seneca` namespace.
- Use C++11, separate header and implementation files, and include guards. Headers must include the standard headers they need. Do not put `using namespace std;` in headers.
- Use C-style strings and explicit dynamic memory management. Do not replace this work with `std::string`, STL containers or smart pointers. Do not use `<iomanip>`; use stream member functions for formatting.
- Use a single entry and exit per function, with one return statement where a value is returned.  
- You are free and encouraged to add any **attributes (member variables), functions, and methods (member functions)** you find necessary to complete your code. If you are unsure about your strategy for adding functionalities and properties to your classes, ask your professor for advice.  
- If you add methods that are **not called outside the scope of the class**, make sure they are **private**.  

- Unless you are given a specific definition, **name variables and functions yourself**. Use **meaningful** names and follow the **naming conventions** instructed by your professor. **Using misleading or unclear names will result in a penalty.**  

- When creating methods (member functions), ensure they are marked **`const`** if they **do not modify the class**.  

- When passing an object or variable by **address or reference**, if it is **not meant to be modified**, pass it as a **constant pointer or reference**.  

- If an **empty state** is required for an object, it is considered an **"invalid" empty state**, and objects in this state should be **rendered unusable**.  

- A module called **`Utils`** is included in the project. It contains a few predefined methods that you can use.  
  - You are allowed to **add your own custom functions and classes** to the `Utils` module for use throughout the project.  

- You may **reuse and copy** any **code provided by your professor**, functions from **workshops, previous projects, or other subjects** in the `Utils` module with no mark reduction, but you **must include a citation**.  

---


## Repository Development and Commit History

All coding work for this project must be developed and maintained in the Git repository created in **Assignment Zero**.

You are expected to **commit your work early and often throughout the development process**. The number, timing, and content of your commits must provide a credible record showing that your work was developed gradually through meaningful stages.

Your commit history should reflect the natural progression of your work, such as:

- creating the initial structure of the project;
- implementing functions, classes, or features in stages;
- testing your code;
- correcting errors and bugs;
- improving, refining, and completing your solution.

Do **not** complete most or all of the milestones outside the repository and then add the finished solution in one or two large commits. Similarly, creating many trivial or artificial commits only to make the work appear gradual does not satisfy this requirement. The actual changes made in each commit may be reviewed.

Your Git repository and its commit history are part of the evidence used to evaluate your work.

> **Important:** Work that is not present in the required repository, or work that appears suddenly without a credible and meaningful development history, may be **rejected or receive a grade of zero** and may also be **flagged for further review for possible plagiarism or other academic-integrity concerns**.

Commit regularly as you work. Your repository should clearly demonstrate the development of your project from its early stages to the final submission.

Before testing or submitting on Matrix, **commit and push your changes to your Assignment Zero repository on GitHub, then pull those changes into your repository checkout on Matrix**. Run the compile, test, and submit commands from the appropriate milestone directory in that checkout.

## Understanding Academic Integrity Violations

Please read the following document to understand what constitutes an academic integrity violation and to make sure your work follows Seneca Polytechnic's requirements:

[Seneca Polytechnic Academic Integrity Violation Policy](https://github.com/Seneca-244200/OOP-Assignments/blob/main/Academic_Integrity_Violations_Seneca.md)

---

# Project Modules Overview

The project has six supporting modules and a main module that launches the application:

1. Utils
2. Menu
3. Chargeable
4. Finishing
5. PrintJob
6. PrintDesk
7. main

## Utils
This module contains common helpers, such as C-string allocation and copying, validated integer input and other functions that prevent repeated code. Basic C-string helpers are supplied. You may add your own helpers as needed.

## Menu
This module contains two classes:

- `MenuItem`: a fixed C-string line of menu text, used for titles, numbered options and prompts.
- `Menu`: a collection of MenuItem objects that displays choices and accepts a selection.

You will test MenuItem directly in MS1. In MS2, MenuItem becomes private to its friend class Menu.

## Chargeable
This abstract base class owns the name and base price shared by all items that can be added to a ticket. It defines the virtual operations that its derived classes implement.

## Finishing
This class derives from Chargeable. It represents a finishing service, such as binding or folding, with either staff-finished or self-service work. It also owns optional production notes.

## PrintJob
This class derives from Chargeable. It represents a prepared print job and supports four paper formats: A5, A4, A3 and A2. The selected format changes the price.

## PrintDesk
This class manages the ticket process:

- Load print jobs and finishing services from their data files.
- Display the two catalogs separately.
- Copy and configure selected items for the current ticket.
- Display the ticket and calculate its total and tax.
- Save the ticket in a numbered file and start a new one.

## Main
The main module creates a PrintDesk object, displays menus for the assistant and calls the appropriate PrintDesk methods. It also asks for confirmation when the assistant tries to exit with unsaved work.

# Milestone 1


> Note: As we move forward through the milestones of this project, remember that, like in any real-life project, we may need to revisit previous implementations to make changes or corrections to accommodate future requirements.

## `constants.h`
This header file is used to hold all the constant values used in the project. For now, add the following constant value:

- `MaximumNumberOfMenuItems` set to 20. (preferably unsigned)


## MenuItem class

Initially, we will implement this class as a standalone class. We will test it and make sure it works correctly. In Milestone 2, we will implement the Menu class, which is a composition of MenuItem objects.

When creating a menu formatted like the one below, the `title`, the `numbered rows`, and even `the prompt` for data entry at the end are considered MenuItem objects:

```text
Seneca Print Desk                        <----  title
 1- Add to Ticket                       <----  numbered row
 2- Display Ticket
 3- Save and Start New Ticket                    <----  numbered row
 4- List Finishing Services
 5- List Print Jobs                         <----  numbered row
 0- End Program
>                                       <----  the prompt
```

In a module called Menu (i.e., Menu.h and Menu.cpp), create a class called MenuItem.

The MenuItem class must have a minimum of four attributes:

- A fixed C-string buffer of 41 characters to hold up to 40 characters of MenuItem content, including the null terminator.
- An integer (preferably unsigned) to keep track of the number of indentations.
- An integer (preferably unsigned) to keep track of the size of each indentation in characters.
- An integer to be used for the numbering of MenuItem objects.


### Construction
The MenuItem should be constructed using the following four values:

- A C-string holding the content. Copy it into the fixed buffer. Content longer than 40 characters makes the MenuItem invalid.
- The number of indentations.
- The size of each indentation.
- An integer for the row number (only used for numbered menu items).

#### Constructor Validations

If any of the following conditions occur, the MenuItem should be set to a safe empty state:

- The content is nullptr, empty, consists only of whitespace characters, or is longer than 40 characters.
- Any of the indentation or indentation size values exceed 4.
- The row value is greater than `MaximumNumberOfMenuItems`.

### Fixed C-string Storage
Store content in a fixed C-string array of 41 characters, allowing up to 40 content characters plus the terminating null character. Since this array has no dynamic allocation, MenuItem needs no custom copy constructor, copy assignment operator, or destructor. Copying a MenuItem copies its characters safely. MS1 does not assess copy semantics.

### bool Type Conversion Overload
If a MenuItem is cast to a bool, it should return false if it is in a safe empty state and true if it is a valid MenuItem.

### Display
The MenuItem class should have a display member function that outputs the formatted content of the MenuItem to an ostream. This function should be defined as follows:
```c++
ostream& display(ostream& ostr) const;
```
#### Function Requirements:
- The function should output the formatted content of the `MenuItem` to the given `ostream`.
- The function will have a default value of cout for the ostream parameter
- If the `MenuItem` is valid (its content is not empty), the function should:
   - Display the content with proper indentation based on the `indentation number` and the `indentation size`. 
   - Include the `row` number formatted as a two-character-wide value followed by `"- "` if row is non-negative.
   - Display the content without any leading whitespace. (skip the leading whitespace in the content)
- If the MenuItem is in an invalid or safe empty state (e.g., m_content is empty), the function should output `"??????????"`.
#### Output Expectations:
- Indentation should be added to align the content appropriately.
- The row number, if present, should be right-aligned and followed by `"- "`.
- If the content is invalid, display `"??????????"` instead.

## ms1 tester program

Compile this snapshot with exactly one tester main:

```bash
g++ -Wall -std=c++11 -g Menu.cpp Utils.cpp ms1.cpp -o ms1
./ms1
```

Keep `constants.h` with your modules.


[ms1.cpp](ms1/ms1.cpp)

### Tester Program Entry Values for ms1

No keyboard input is required for this tester.

### Sample Execution

[correct_output.txt](ms1/correct_output.txt)


## MS1 Submission

Required files: `Utils.h`, `Utils.cpp`, `Menu.h`, `Menu.cpp`, `constants.h`, `ms1.cpp`.
 

> If you would like to successfully complete the project and be on time, **start early** and try to meet all the due dates of the milestones.


Commit and push all required files listed above to your Assignment Zero repository on GitHub, then pull the changes into your repository checkout on Matrix. Compile and run your code using the `g++` compiler [as shown in the introduction](#compiling-and-testing-your-program) and make sure that everything works properly.

Then, run the following command from your account:
```
~professor.userid/submit 244/prj/m1
```
and follow the instructions.



### The submit program's options:
```bash
~professor.userid/submit DeliverableName [-submission options]<ENTER>
[-submission option] acceptable values:
  "-due":
       Shows due dates only
       This option cannot be used in combination with any other option.
  "-skip_spaces":
       Do the submission regardless of incorrect horizontal spacing.
       This option may incur a penalty.
  "-skip_blank_lines":
       Do the submission regardless of incorrect vertical spacing.
       This option may incur a penalty.
  "-feedback":
       Check the program execution without submission.
```

## [Back to milestones](#milestones)

# Milestone 2

## Menu class

Add a class to the `Menu` module called `Menu`. The `Menu` class must own the `MenuItem` class as part of its composition. To enforce this, the `MenuItem` class should only be accessible by the `Menu` class.

To achieve this, remove the `public` keyword from the `MenuItem` class and make it fully private.

Forward declare the `Menu` class above the `MenuItem` class and add `Menu` as a friend of the `MenuItem` class.

With this change, only the `Menu` class can instantiate `MenuItem` objects.

### Attributes
- Add three integer (preferably unsigned) attributes to track:
  - The **indentation number and size** for `MenuItem` objects.
  - The **number of `MenuItem` objects** currently held in the `Menu`.

- Add three `MenuItem` attributes for the **title**, **exit option**, and **selection entry prompt** of the `Menu`. Since `MenuItem` does not have a default constructor, these attributes must be initialized in the **member initializer list**. Ensure that the initialization order matches the order in which the attributes are declared in the `Menu` class, as some compilers may issue warnings if the order is inconsistent.  
   > The row number of the `exit option` should be set to zero.

- Add an **array** of `MenuItem` pointers, sized according to the constant `MaximumNumberOfMenuItems`. When adding MenuItem objects, they should be dynamically allocated and stored in this array. Ensure that the number of `MenuItem` objects does not exceed the size of the array.

### Constructor
Create a `Menu` constructor with the following four arguments:

- A C-string for the **title**.
- A C-string for the **exit option content**, defaulted to `"Exit"`.
- An **indentation number**, defaulted to `0`.
- An **indentation size**, defaulted to `3`.

Initialize the corresponding attributes with these arguments and initialize the selection entry prompt `MenuItem` to `"> "`.

Set all elements of the pointer array to `nullptr`.

---

### `<<` Operator Overload for `Menu`

Implement the `<<` operator overload for the `Menu` class to dynamically add new `MenuItem` objects.

#### Requirements:
- The operator should take a `const char*` representing the `content` of a new `MenuItem`.
- Check if the current number of `MenuItem` objects is less than `MaximumNumberOfMenuItems` before adding a new item.
- If the condition is met:
   - Dynamically create a new `MenuItem` using the provided `menuItem` content, the current indentation level, the indentation size, and the row number (calculated as `number-of-menu-items + 1`).
   - Store the new `MenuItem` pointer in the `MenuItem` pointer array.
   - Increment `number-of-menu-items` to reflect the addition.
- Return `*this` to allow chaining of the operator.

#### Constraints:
- Ensure that `number-of-menu-items` does not exceed `MaximumNumberOfMenuItems`. If the array is full, the operation should not add a new item or increment `number-of-menu-items`.

This operator overload enables the use of the `<<` operator to add `MenuItem` objects to a `Menu`, enhancing readability and simplifying the process of building a menu.

---

### Noncopyable Menu and Destructor
- A Menu owns dynamically allocated menu rows through its m_items pointer array. Delete the Menu copy constructor and copy assignment operator in its class declaration to prevent a shallow copy of that ownership:

- The MenuItem content is stored in a fixed array and can be copied safely. Implement a destructor that iterates through the m_items pointers, deletes each non-null row.

---

### `select` Method 
```c++
std::size_t select() const;
```
Implement the `select` method for the `Menu` class to perform the following actions:

#### Requirements:
- **Display the Title**: If the `Menu` object has a title, display it first.
- **Display `Menu` Items**: Iterate through all `MenuItem` objects stored in the `Menu` and display them one by one.
- **Display the Exit Option**: Display the `exit option MenuItem` after listing the main `MenuItem` objects.
- **Display the Selection Prompt**: Display the `selection prompt` `MenuItem` to indicate that user input is expected.
- **Return the User's Selection**: Obtain and return a validated integer input representing the user's choice. The input should only be valid if it falls within the range of `0` (representing the exit option) to the number of `MenuItem` objects currently in the `Menu`. See the `getInt` function suggestion below.

#### Expected Outcome:
- The method should output the full menu structure in a readable format and handle user selection.
- It should ensure that the selection is a valid integer within the specified range before returning it.

#### Sample Output:
Two example menus:  
The first has zero indentation, the second has one level of indentation.
```text
Seneca Print Desk
 1- Add to Ticket
 2- Display Ticket
 3- Save and Start New Ticket
 4- List Finishing Services
 5- List Print Jobs
 0- End Program
> 1
   Ticket Menu
    1- Finishing service
    2- Print job
    0- Back to main menu
   >
```

---

### Insertion Operator Overload into `ostream`
Create an `operator<<` overload for the `Menu` class:
```c++
std::size_t operator<<(std::ostream& ostr, const Menu& m);
```
#### Requirements:
- The operator should handle output to an `ostream`.
- When `ostr` is `cout` (check their address to confirm), the operator should invoke the `select()` method of the `Menu` class and return the user's selection.
- The return value should be the result of the `select()` method, representing the user's choice from the menu.
- If the `ostream` is not `cout`, do not perform the selection operation; simply return `0`.

#### Outcome:
- The operator should display the `Menu` on `cout` and allow the user to make a selection, returning the valid selection as a `std::size_t`.
- Ensure that the operator returns `0` when used with any `ostream` other than `cout`.

> **Note:** Unlike typical insertion overloads, this operator does **not** return an `ostream` reference.

---

## `Utils` Module Foolproof Entry Functions
> The following will be tested in **milestone 5**.

To ensure foolproof data entry, implement two functions in the `Utils` module and use them within your `select` method.

---

### `getInt`
```c++
int getInt();
```
Create a method in the `Utils` class to handle integer input with the following requirements:

#### Requirements:
- **Prompt for Valid Input**: Continuously prompt the user until a valid integer is entered.
- **Handle Empty Input**: If the user presses Enter without typing anything, display:
   ```text
   You must enter a value:
   ```
- **Validate Integer Input**: If the user enters non-integer data, display:
   ```text
   Invalid integer:
   ```
   Clear the error state before prompting again.
- **Check for Trailing Characters**: If extra characters follow the integer, display:
   ```text
   Only an integer please:
   ```
   Prompt the user again.
- **Clear Input Buffer**: After processing the input, clear any remaining characters to prepare for the next entry.

#### Outcome:
The method should only return a valid integer after ensuring proper validation.

---

### `getInt(min, max)`
```c++
int getInt(int min, int max);
```
#### Requirements:
- **Range Validation**: Prompt the user until a valid integer within the range `[min, max]` is entered.
- **Use `getInt()`**: Utilize the basic validation logic from `getInt()`.
- **Handle Out-of-Range Values**: If input is outside the range, display:
   ```text
   Invalid value: [min <= value <= max], try again:
   ```
   Replace `min` and `max` with the respective values.

#### Outcome:
The function should return a valid integer within the specified range after enforcing all validation rules.


## ms2 tester program

Continue from your completed MS1 modules. Compile this snapshot with exactly one tester main:

```bash
g++ -Wall -std=c++11 -g Menu.cpp Utils.cpp ms2.cpp -o ms2
./ms2
```


Keep `constants.h` with your modules.


[ms2.cpp](ms2/ms2.cpp)

### Sample Execution

[correct_output.txt](ms2/correct_output.txt)

### Tester Program Entry Values for ms2
```text
1<ENTER>
0<ENTER>
2<ENTER>
2<ENTER>
0<ENTER>
0<ENTER>
0<ENTER>
```

### Data Entry for foolproof entry
> Will be tested in Milestone 5, part m56
```text
<ENTER>
abc<ENTER>
123abc<ENTER>
-1<ENTER>
4<ENTER>
0<ENTER>
```
> Also try running option 3 for the Final Milestone Application Demo and see how it works.
### Foolproof entry output sample
```text
Milestone 2
 1- Run Test 1
 2- Run Test 2
 3- Final Milestone Application Demo
 0- Exit
>
You must enter a value: abc
Invalid integer: 123abc
Only an integer please: -1
Invalid value: [0<= value <=3], try again: 4
Invalid value: [0<= value <=3], try again: 0
Have a good day!
```


## MS2 Submission

Required files: `Utils.h`, `Utils.cpp`, `Menu.h`, `Menu.cpp`, `constants.h`, `ms2.cpp`.
 

> If you would like to successfully complete the project and be on time, **start early** and try to meet all the due dates of the milestones.


Commit and push all required files listed above to your Assignment Zero repository on GitHub, then pull the changes into your repository checkout on Matrix. Compile and run your code using the `g++` compiler [as shown in the introduction](#compiling-and-testing-your-program) and make sure that everything works properly.

Then, run the following command from your account:
```
~professor.userid/submit 244/prj/m2
```
and follow the instructions.



### The submit program's options:
```bash
~professor.userid/submit DeliverableName [-submission options]<ENTER>
[-submission option] acceptable values:
  "-due":
       Shows due dates only
       This option cannot be used in combination with any other option.
  "-skip_spaces":
       Do the submission regardless of incorrect horizontal spacing.
       This option may incur a penalty.
  "-skip_blank_lines":
       Do the submission regardless of incorrect vertical spacing.
       This option may incur a penalty.
  "-feedback":
       Check the program execution without submission.
```

## [Back to milestones](#milestones)

# Milestone 3 
## Chargeable, Finishing, and PrintJob Modules

> **Note:**  
In this milestone, as before, you should simplify your code by implementing helper functions in the `Utils` module. This module should provide utilities for tasks such as dynamic memory allocation, foolproof data entry, and string manipulation. 
---

### `Chargeable` Class
The `Chargeable` class serves as an abstract base for items that can be added to a customer’s ticket. It contains attributes and methods that define shared functionality among all chargeable items.

1. **Attributes:**
   - **`m_name`**: A dynamically allocated C-string to hold the name or description of the item.
   - **`m_price`**: A `double` representing the base price of the item.

2. **Protected Methods:**
   - **`void price(double value)`**: Sets the item’s price.
   - **`void name(const char* name)`**: Sets the item’s name, handling dynamic allocation.

3. **Public Methods and Overloads:**
   - **Constructors and Destructor**:
     - A default constructor initializes an empty `Chargeable` item.
     - Copy constructor and assignment operator copy both the name and base price. Allocate an independent name and handle self-assignment.
     - A virtual destructor ensures proper cleanup of derived objects.

   - **Virtual Methods**:
     - **`double price() const`**: Returns the item’s price, allowing derived classes to override if needed.

   - **Pure Virtual Methods** (to be implemented in derived classes):
     - **`ostream& print(ostream& ostr=cout)const`**: Displays item information in a formatted way.
     - **`bool configure()`**: Configures the format or service option and production notes.
     - **`bool configured()const`**: Returns true if details have been set, indicating the item is configured.
     - **`ifstream& read(ifstream& file)`**: Reads item details from an input file.

   - **Operator Overloads**:
      ```c++
      double operator+(double money, const Chargeable& B);
      double& operator+=(double& money, const Chargeable& B);
      ```
     - `+` and `+=` are overloaded to allow adding an item’s price to a total amount (of type `double`), enabling easy ticket calculations.
     - **Conversion Operator (`operator const char*()const`)**: Provides access to the name for display or comparison.

---

### `PrintJob` Class
The `PrintJob` class inherits from `Chargeable` and represents a print job item. It adds functionality to manage the paper format and customizes price based on paper format.

1. **Attributes:**
   - **`m_format`**: A `char` indicating the size of the print job (`'5'` for A5, `'4'` for A4, `'3'` for A3, and `'2'` for A2). If `m_format` is unset, it defaults to a safe empty state, and `"....."` will display for the size.

2. **Public Methods**:
   - **`print`**: Overrides `Chargeable`’s print to display or save the print job’s name, size, and price.
   
      The `print` method outputs the print job in the following format:
      - **name**: Up to 25 characters in 28 spaces, left-justified and padded with dots (`'.'`).
      - **size**: Displays as `"A5..."`, `"A4..."`, `"A3..."`, `"A2..."` for A5, A4, A3 and A2 sizes, respectively. If format is unset (i.e., `!configured()`), it displays as `"....."`.
      - **price**: Right-justified in 7 spaces, padded with spaces and displayed with 2 decimal places.

   - **`configure`**:  Overrides `Chargeable`’s configure as follows:
      Displays a menu for paper format selection with 3 indentations:
      ```text
               Print Format Selection
                1- A5
                2- A4
                3- A3
                4- A2
                0- Back
               > 
      ```
     Sets the selected format to its acceptable values or leaves it unset if "Back" is selected.

     The method returns `true` if the size was selected (indicating it was configured) or `false` if not.

   - **`configured`**:  Overrides `Chargeable`’s configured, returning `true` if a size has been selected.

   - **`read`**:  Overrides `Chargeable`’s read.
     Reads the print job’s details from a comma-separated input file in the following format:
     ```text
     name of print job,price
     ```
     Example:
     ```text
     Club poster,8<Newline>
     ```
     If the read is successful
      - the details are set to corresponding values
      - m_format is set to its default value
     
     Otherwise, nothing changes.

   - **`price`**: Adjusts the base price based on `m_format` as follows:
     - Returns `Chargeable` price if format is A3 or if item is not configured.
     - For A5, returns half of the price; for A4, returns 3/4 of the price; and for A2, returns 1.5 times the original price.

3. This class owns no additional dynamic allocation. Its generated copy operations call the base deep-copy operations, so it does not need its own Rule of Three. The object is always created in a safe empty state.

---

### `Finishing` Class
The `Finishing` class, derived from `Chargeable`, represents a finishing service item and includes functionality for customization and service type.

1. **Attributes:**
   - **`m_configured`**: A boolean flag indicating whether the item has been configured.
   - **`m_selfServe`**: A boolean representing if the finishing service is a self-service option, which affects pricing.
   - **`m_customize`**: A dynamically allocated C-string for storing customization notes (e.g., "bind on left").

2. **Public Methods and Overloads**:
   - **Constructors and Destructor**: The copy constructor and assignment operator copy all base and derived state, including independent notes. Assignment handles self-assignment. The destructor releases the notes. The no-argument constructor leaves the object in a safe empty state.

   - **`print`**: Overrides `Chargeable`’s print to display or save the finishing service item’s details, including service type. Customizations are printed only if the `ostream` object is `cout`:
     - **name**: Up to 25 characters in 28 spaces, left-justified and padded with dots (`'.'`).
     - **service type**: Displays `"Self."` for configured self-service work, `"Staff"` for configured staff-finished work, or `"....."` when unconfigured.
     - **price**: Right-justified in 7 spaces, padded with spaces, and displayed with 2 decimal places.
     - **customizations**: If `m_customize` is not null and `ostream` is `cout`, it prints `" >> "` followed by the first 30 characters of `m_customize`. Otherwise, nothing is printed.

   - **`configure`**:  Overrides `Chargeable`’s configure as follows:
      Displays a menu for finishing service selection with 3 indentations:
      ```text
               Finishing Service Selection
                1- Staff finished
                2- Self service
                0- Back
               > 
      ```
      Sets the selected service option to its acceptable values, setting `m_configured` to `true`. If "Back" is selected, the service option remains unset, m_configured is set to false and m_customize is deallocated.

      If a service option is configured, the user is prompted for customization:
      ```text
      Production notes
      > 
      ```
      If the user just presses enter, no customization is added, and `m_customize` is deallocated and set to nullptr. Otherwise, customization instructions are stored in `m_customize` (you may refer to the `Utils` functions for dynamic memory allocation here).

      The method returns `true` if a service option is configured, or `false` if not.

   - **`configured`**:  Overrides `Chargeable`’s configured, returning the `m_configured` flag.

   - **`read`**:  Overrides `Chargeable`’s read.
     Reads the finishing service’s details from a comma-separated input file in the following format:
     ```text
     name of Finishing,price
     ```
     Example:
     ```text
     Comb binding,20<Newline>
     ```
     If the read is successful
      - the details are set to corresponding values
      - m_selfServe and m_configured are set to their default values
      - m_customize is deleted and set to nullptr
      
     Otherwise, the object remains unchanged.

   - **`price`**: Overrides `Chargeable`’s price. 
     Returns half the price if configured and `m_selfServe` is true, indicating a self-service option; otherwise, it returns the original `Chargeable` price.

### Interface and formatting details

Use the same signatures in both derived classes: `std::ostream& print(std::ostream& ostr = std::cout) const`, `bool configure()`, `bool configured() const`, `std::ifstream& read(std::ifstream& file)` and `double price() const`. Each overrides its corresponding virtual base function. Print functions return the output stream and do not append a newline; read functions return the input stream.

Initialize base name pointers to `nullptr` and prices to zero. Initialize format characters to zero, flags to `false` and notes to `nullptr`. The base owns its name; `Finishing` owns its notes; `PrintJob` uses the base deep-copy operations and copies its format normally.

Each CSV record contains a name of at most 70 characters, one comma, a price and a newline. Names do not contain commas. Use the supplied fixtures. Do not add inventory, quantities or production scheduling. Use `double` calculations without intermediate rounding; stream formatting supplies two decimal places.

Each configuration menu has three indentation levels of three spaces. The title and prompt therefore have nine leading spaces; numbered entries have ten before a one-digit selection number.

## ms3 tester program

Continue from your completed MS2 modules. Compile this snapshot with exactly one tester main:

```bash
g++ -Wall -std=c++11 -g Menu.cpp Utils.cpp Chargeable.cpp PrintJob.cpp Finishing.cpp ms3.cpp -o ms3
./ms3
```


Keep `constants.h` with your modules. Required data files: `prints.csv` and `finishes.csv`.


[ms3.cpp](ms3/ms3.cpp)

### Sample Execution

[correct_output.txt](ms3/correct_output.txt)

### Tester Program Entry Values for ms3

Follow the tester prompts and enter these values in order:

```text
1 <ENTER>
2 <ENTER>
3 <ENTER>
4 <ENTER>
0 <ENTER>
2 <ENTER>
2 <ENTER>
1 <ENTER>
bind on left <ENTER>
2 <ENTER>
<ENTER>
0 <ENTER>
2 <ENTER>
<ENTER>
2 <ENTER>
<ENTER>
```

## MS3 Submission

Required files: `Utils.h`, `Utils.cpp`, `Menu.h`, `Menu.cpp`, `constants.h`, `Chargeable.h`, `Chargeable.cpp`, `PrintJob.h`, `PrintJob.cpp`, `Finishing.h`, `Finishing.cpp`, `ms3.cpp`, `prints.csv`, `finishes.csv`.
 

> If you would like to successfully complete the project and be on time, **start early** and try to meet all the due dates of the milestones.

Commit and push all required files listed above to your Assignment Zero repository on GitHub, then pull the changes into your repository checkout on Matrix. Compile and run your code using the `g++` compiler [as shown in the introduction](#compiling-and-testing-your-program) and make sure that everything works properly.

Then, run the following command from your account:
```
~professor.userid/submit 244/prj/m3
```
and follow the instructions.



### The submit program's options:
```bash
~professor.userid/submit DeliverableName [-submission options]<ENTER>
[-submission option] acceptable values:
  "-due":
       Shows due dates only
       This option cannot be used in combination with any other option.
  "-skip_spaces":
       Do the submission regardless of incorrect horizontal spacing.
       This option may incur a penalty.
  "-skip_blank_lines":
       Do the submission regardless of incorrect vertical spacing.
       This option may incur a penalty.
  "-feedback":
       Check the program execution without submission.
```

## [Back to milestones](#milestones)


# Milestone 4  
## PrintDesk Module  

Continue developing the system by implementing the `PrintDesk` module. This module encapsulates and organizes all the tasks involved in preparing tickets. The methods of this class will be invoked when the options of the main menu are selected by the assistant, assisting with preparing customer tickets at the print desk.

---


### Public Interface

```cpp
PrintDesk(const char* printsFile, const char* finishesFile);
~PrintDesk();
PrintDesk(const PrintDesk&) = delete;
PrintDesk& operator=(const PrintDesk&) = delete;
operator bool() const;
std::size_t noOfTicketItems() const;
bool hasUnsavedTicket() const;
void listFinishes() const;
void listPrints() const;
void addFinishing();
void addPrint();
void printTicket(std::ostream& ostr) const;
void resetTicket();
```

The manager owns its catalogs and ticket entries, so copying is prohibited. Start counters at zero, pointers at `nullptr` and the ticket number at one. The ticket holds at most `MaximumNumberOfTicketItems` (20) entries; check capacity before inserting. At capacity, display `Ticket is full (20 items). Save and start a new ticket.` followed by a newline.

Both catalogs must load successfully. Missing files or a failed record read leave the manager empty. Use the supplied valid and malformed fixtures. Assume catalog records end with newlines and fit the menu capacity; additional file-format edge cases are not assessment requirements.

### Attributes  

#### Chargeable, Finishing, and PrintJob Counters  

The `PrintDesk` module includes attributes to track the number of finishing service and print job items in the menu and the number of chargeable items added to a ticket. These attributes ensure proper organization and management of the ticket preparation process:  

- **Finishing Counter**: An integer (preferably unsigned) to keep track of the number of finishing service items loaded from the finishing service data file.  
- **PrintJob Counter**: An integer (preferably unsigned) to keep track of the number of print job items loaded from the print job data file.  
- **Chargeable Counter**: An integer (preferably unsigned) to track the number of `Chargeable` items added to the ticket from the finishing service and print job menu.

---

#### Ticket Number  

- **Ticket Serial Number**: An integer (preferably unsigned) representing the ticket serial number, starting from 1. This number increments each time a new ticket is generated. It is also used to create a unique file name for each completed ticket saved to the file system.  

> **Note:**  
Use the following function, `makeTicketFileName` and add it to the `Utils` module to generate unique file names. This function receives a ticket number and creates a file name in the format `ticket_[ticketNo].txt`.   
```cpp
 char* Utils::makeTicketFileName(char* filename, size_t ticketNo)const {
    char ticketFileName[51] = "ticket_";
    size_t temp = ticketNo;
    int cnt = 7;
    int length;
    // Calculate the number of digits
    do {
       cnt++;
       temp /= 10;
    } while (temp > 0);
    length = cnt;
    // Convert each digit to character from the end
    while (ticketNo > 0) {
       ticketFileName[--cnt] = static_cast<char>((ticketNo % 10) + '0');
       ticketNo /= 10;
    }
    // Handle the case when ticketNo is 0
    if (ticketFileName[cnt - 1] == '\0') {
       ticketFileName[--cnt] = '0';
    }
    // Attach .txt to the end of the file name
    for (int i = 0; ".txt"[i]; i++) {
       ticketFileName[length++] = ".txt"[i];
    }
    ticketFileName[length] = '\0';
    strcpy(filename, ticketFileName);
    return filename;
 }

```
---

#### Finishing and PrintJob Dynamic Arrays  

- **Finishing Array**: A `Finishing` pointer used to store a dynamically allocated array of finishing service items loaded from the finishing service data file.  
- **PrintJob Array**: A `PrintJob` pointer used to store a dynamically allocated array of print job items loaded from the print jobs data file.

---

#### Chargeable Array of Pointers  

- **Ticket Items**: An array of `Chargeable` pointers, with a size defined by the `MaximumNumberOfTicketItems` constant in `constants.h`. When a finishing service or print job item is about to be configured, a dynamic copy of the selected item is created and stored in the next available spot in this array. The item is then customized to match the customer’s request.

---

### Private Methods  

#### **Ticket Title Print**  
This method prints a header for a ticket.  

- **Parameters**:  
  - A reference to an `ostream` object.  

- **Description**:  
  The method prints the ticket title in the following format, using the `Ticket Number` attribute. For example, if the ticket number is `35`, the output would look like:  

  ```text
  Ticket # 035 =============================<NEWLINE>
  ```  

---

#### **Print Totals**  
This method prints the footer for a ticket. Each amount line has 21 leading spaces, an 11-character label field and an eight-character amount field. Use two decimal places and Tax = 0.13. Compute tax from the unrounded subtotal. The final separator has 40 equals signs.  

- **Parameters**:  
  - A reference to an `ostream` object.  
  - A `double` value representing the total amount.  

- **Description**:  
  The method prints the total, applicable tax, and the grand total into the provided `ostream` object using the `Tax` constant value defined in `constants.h`. For example, if the total value is `16.88`, the output would be:  

  ```text
                       Total:        16.88
                       Tax:           2.19
                       Total+Tax:    19.07
  ========================================<NEWLINE>
  ```

---

#### **`size_t countRecords(const char* file) const`**  

This function calculates the number of records in a file by counting the newline characters.  

- **Parameters**:  
  - A constant character pointer (`const char*`) representing the file name.  

- **Return Value**:  
  - Returns the count of newline characters (`std::size_t`), representing the number of records in the file.  

- **Implementation**:  
  Use the following pseudocode to implement this function:  

  ```text
  set a newline counter to zero
  open an ifstream using the file argument value
  while the file is not in a failure state
     read one character
     if the file is not in failure state and character is a newline
        add one to the newline counter
  end while
  return the newline counter
  ```  

- **Purpose**:  
  This method is essential for determining the size of dynamically allocated arrays for finishing service and print job items by counting the number of records in their respective files.


### Constructor and Destructor  

#### **Constructor**  

The `PrintDesk` class is constructed using two C-strings representing the print jobs and finishing services data file names.  

**Steps for Implementation:**  

1. **Count Records:**  
   - Determine the number of records in the print jobs and finishing services data files by using the `countRecords` method. Store these counts in two local variables.  

2. **Open Files for Reading:**  
   - Open the print jobs and finishing services data files using `ifstream`.  

3. **Dynamic Array Allocation:**  
   - Create two dynamic arrays:  
     - A `Finishing` array, pointed to by the corresponding attribute of the `PrintDesk` class.  
     - A `PrintJob` array, pointed to by the corresponding attribute of the `PrintDesk` class.  

4. **Reading Data:**  
   - If both files are successfully opened:  
     - Loop through the print jobs array, calling the `read` method on each element until one of the following occurs:  
       - The number of reads matches the number of records in the file.  
       - A read operation fails.  
     - Repeat the same process for the finishing services array.  

5. **Validation and Cleanup:**  
   - If the number of successfully read records does not match the number of records in either file:  
     - Revert the operation by **deleting** both arrays.  
     - Set the pointers for both arrays to `nullptr` (safe empty state).  
   - Otherwise:  
     - Set the corresponding attributes of the `PrintDesk` class to the number of records successfully read.  

---

#### **Destructor**  

The destructor ensures proper cleanup of dynamically allocated memory to prevent memory leaks.  

**Steps for Implementation:**  

1. **Delete Dynamic Arrays:**  
   - Delete the dynamic arrays for finishing services and print jobs by using the `delete[]` operator.  

2. **Delete Chargeable Items:**  
   - Loop through the `Chargeable` array of pointers, deleting each element up to the number of items currently in the ticket.  

---

### Queries  

> **Note:** Queries cannot change the state of the class.


#### **Boolean Conversion Operator Overload**  
This operator provides a safe empty state indicator.

- **Description:**  
  - This method does not modify the class.  
  - Returns `true` if both the print jobs and finishing services dynamic arrays are not `nullptr`.  

---

#### **Number of Ticket Items**  
Method name: 'noOfTicketItems'

- **Description:**  
  - Create a method to return the number of items currently in the ticket.  
  - This value is stored in the `Chargeable` counter attribute of the class.  

---

#### **Has Unsaved Ticket**  
Method name: `hasUnsavedTicket`

- **Description:**  
  - Create a method that returns a boolean value.  
  - This method should return `true` if the number of ticket items (tracked by the `Chargeable` counter attribute) is greater than zero.  
---

### Methods to Be Called in the Main Application's Menu  

These methods handle specific tasks based on the options selected in the main application's menu.  


#### **List Finishing Method** *(does not modify the class)*  
Method name: `listFinishes`
- **Description:**  
  - Prints the following header:  
    ```text
    Available Finishing Services
    ========================================<NEWLINE>
    ```  
  - Loops through the `finishing services` dynamic array and prints each item on a separate line using its `print` method.  
  - Prints the following footer:  
    ```text
    ========================================<NEWLINE>
    ```  

---

#### **List Print Jobs Method** *(does not modify the class)*  
Method name: `listPrints`
- **Description:**  
  - Works like `listFinishes`, using the print-job array and the header `Available Print Jobs`.  

---

#### **Add Finishing Method**  
Method name: `addFinishing`

- **Description:**  
  - Creates a `Menu` object with:  
    - **Title**: `"Finishing Catalog"`  
    - **Exit Option**: `"Back to Ticket"`  
    - **Indentations**: `2`  
  - Populates the `Menu` object with the names of the finishing service items from the `finishing services` dynamic array.  
  - Displays the menu and receives the assistant's selection.  
  - If the selection is not zero:  
    - Creates a dynamic copy of the selected finishing service item and assigns it to the next available element in the `Ticket Items` array (i.e. the `Chargeable` array of pointers).  
    - Calls the `configure` method on the `Chargeable` item to configure the item.  
    - If `configure` returns `true`, increments the `number of ticket items` attribute.  
    - If `configure` returns `false`, deletes the dynamically created finishing service item to revert the operation.  

---

#### **Add Print Job Method**  
Method name: `addPrint`

- **Description:**  
  - Similar to the `Add Finishing` method but for print jobs:  
    - Creates a `Menu` object with:  
      - **Title**: `"Print Catalog"`  
      - **Exit Option**: `"Back to Ticket"`  
      - **Indentations**: `2`  
    - Populates the `Menu` object with the names of the print job items from the `print jobs` dynamic array.  
    - Displays the menu and receives the assistant's selection.  
    - If the selection is not zero:  
      - Creates a dynamic copy of the selected print job item and assigns it to the next available element in the `Ticket Items` array.  
      - Calls the `configure` method on the `Chargeable` item to configure the item.  
      - If `configure` returns `true`, increments the `number of ticket items` attribute.  
      - If `configure` returns `false`, deletes the dynamically created print job item to revert the operation.  

---

#### **Display Ticket Method** *(does not modify the class)*  
Method name: `printTicket`

- **Parameters:**  
  - Receives a reference to an `ostream` object.  

- **Description:**  
  - Creates a `double` variable to track the total price of the ticket.  
  - Prints the ticket title using the `Ticket Title Print` method.  
  - Loops through the elements in the `Ticket Items` array:  
    - Prints each item in a separate line using its `print` method.  
    - Adds the price of each item to the total.  
  - Prints the totals using the `Print Totals` method.  

---

#### **Reset Ticket**  
Method name: `resetTicket`

- **Description:**  
  - Uses the `makeTicketFileName` function from the `Utils` module to generate a unique file name for the current ticket using the `ticket number` attribute.  
  - Opens a file for writing using the generated file name (`ofstream`).  
  - Prints the current ticket into the opened file using the `Display Ticket` method.  
  - Displays the following message (for example, if the current ticket number is 20):  
    ```text
    Saved ticket number 20
    Starting ticket number 21
    ```  
  - Deletes all dynamically created elements in the `Ticket Items` array.  
  - Increments the `ticket number` attribute by one.  
  - Resets the `number of ticket items` attribute to zero.  

---

## ms4 tester program

Continue from your completed MS3 modules. Compile this snapshot with exactly one tester main:

```bash
g++ -Wall -std=c++11 -g Menu.cpp Utils.cpp Chargeable.cpp PrintJob.cpp Finishing.cpp PrintDesk.cpp ms4.cpp -o ms4
./ms4
```


Keep `constants.h` with your modules. Required data files: `prints.csv` and `finishes.csv`.


[ms4.cpp](ms4/ms4.cpp)

### Sample Execution

[correct_output.txt](ms4/correct_output.txt)

### Tester Program Entry Values for ms4

Follow the tester prompts and enter these values in order:

```text
1 <ENTER>
1 <ENTER>
abc <ENTER>
1 <ENTER>
1 <ENTER>
```

## MS4 Submission

Required files: `Utils.h`, `Utils.cpp`, `Menu.h`, `Menu.cpp`, `constants.h`, `Chargeable.h`, `Chargeable.cpp`, `PrintJob.h`, `PrintJob.cpp`, `Finishing.h`, `Finishing.cpp`, `PrintDesk.h`, `PrintDesk.cpp`, `ms4.cpp`, `prints.csv`, `finishes.csv`.
 

> If you would like to successfully complete the project and be on time, **start early** and try to meet all the due dates of the milestones.

Commit and push all required files listed above to your Assignment Zero repository on GitHub, then pull the changes into your repository checkout on Matrix. Compile and run your code using the `g++` compiler [as shown in the introduction](#compiling-and-testing-your-program) and make sure that everything works properly.

Then, run the following command from your account:
```
~professor.userid/submit 244/prj/m4
```
and follow the instructions.



### The submit program's options:
```bash
~professor.userid/submit DeliverableName [-submission options]<ENTER>
[-submission option] acceptable values:
  "-due":
       Shows due dates only
       This option cannot be used in combination with any other option.
  "-skip_spaces":
       Do the submission regardless of incorrect horizontal spacing.
       This option may incur a penalty.
  "-skip_blank_lines":
       Do the submission regardless of incorrect vertical spacing.
       This option may incur a penalty.
  "-feedback":
       Check the program execution without submission.
```

## [Back to milestones](#milestones)

# Milestone 5: The Final Milestone  

In this milestone, you will use all the modules you have created so far to build a complete application for the "Seneca Print Desk" system. This milestone brings together the logic for menu navigation, job configuration, ticket handling, and dynamic memory management.  

The goal is to create a program that mimics the behavior demonstrated in the `appDemo()` function provided earlier. Follow the instructions below to structure your program and meet the milestone's requirements.  

---


Write your own `main.cpp`; it is not supplied. Build with exactly one main:

```bash
g++ -Wall -std=c++11 -g Menu.cpp Utils.cpp Chargeable.cpp PrintJob.cpp Finishing.cpp PrintDesk.cpp main.cpp -o prj
./prj
```

For m56 only, replace `main.cpp` with the supplied `ms56.cpp`. Keep `prints.csv`, `finishes.csv` and `badfinishes.csv` in the run directory. Do not create the deliberately missing files named by the tester.

## Program Requirements  

Your program should use the `Menu` and `PrintDesk` modules to create a fully functioning application that supports the following tasks:  

---

### Initialization  

1. **Data Files**:  
   - Your program must load the finishing service and print job data from two CSV files:  
     - `"prints.csv"` for print jobs.  
     - `"finishes.csv"` for finishing service items.  
   - Pass the file names to the `PrintDesk` class during initialization.  

2. **Validation**:  
   - If the `PrintDesk` object fails to load the data (i.e., it enters a safe empty state), display an error message:  
     ```text
     Failed to open data files or the data files are corrupted!
     ```  
   - Terminate the program if the data files are not loaded successfully.  

---

### Menus  

#### Main Menu  

- **Menu Title**: `"Seneca Print Desk"`  
- **Exit Option**: `"End Program"`  
- **Menu Options**:  
  1. **Add to Ticket**  
  2. **Display Ticket**  
  3. **Save and Start New Ticket**  
  4. **List Finishing Services**  
  5. **List Print Jobs**  

#### Ticket Sub-Menu  

- Use one indentation level (three spaces).
- **Menu Title**: `"Ticket Menu"`  
- **Exit Option**: `"Back to main menu"`  
- **Menu Options**:  
  1. **Finishing service**  
  2. **Print job**  

#### Confirmation Menu  

- **Menu Title**: `"This ticket is not saved. Exit without saving?"`  
- **Exit Option**: `"No"`  
- **Menu Option**:  
  1. **Yes**  

---

### Menu Functionality  

1. **Add Finishing**  
   - When the "Finishing service" option is selected from the ticket sub-menu:  
     - Call the `addFinishing` method of the `PrintDesk` object to handle finishing selection.  

2. **Add Print Job**  
   - When the "Print job" option is selected from the ticket sub-menu:  
     - Call the `addPrint` method of the `PrintDesk` object to handle print job selection.  

3. **Display Ticket**  
   - When the "Display Ticket" option is selected from the main menu:  
     - Call the `printTicket` method of the `PrintDesk` object to print the current ticket to the console.  

4. **Save and Start New Ticket**  
   - When the "Save and Start New Ticket" option is selected:  
     - Call the `resetTicket` method of the `PrintDesk` object to save the current ticket to a file and start a new one.  

5. **List Finishing Services**  
   - When the "List Finishing Services" option is selected:  
     - Call the `listFinishes` method of the `PrintDesk` object to display all finishing service items.  

6. **List Print Jobs**  
   - When the "List Print Jobs" option is selected:  
     - Call the `listPrints` method of the `PrintDesk` object to display all print job items.  

---

### Program Exit  

1. **Unsaved Tickets Warning**:  
   - If the user attempts to exit the program (selects "End Program") while there are unsaved items in the ticket:  
     - Display a confirmation menu asking:  
       ```text
       This ticket is not saved. Exit without saving?
       ```  
     - The menu should have the following options:  
       1. **Yes**  
       0. **No**  

   - If the user selects "No," return to the main menu.  
   - If the user selects "Yes," terminate the program.  

2. **Normal Exit**:  
   - If there are no unsaved tickets, allow the program to terminate without additional prompts.  

---

### User Input Validation  

Your program should use foolproof input handling for all menu interactions. This ensures the program does not crash due to invalid user input. Follow these steps for validation:

#### Example Scenario  
##### Execution sample:
```text
Seneca Print Desk 
 1- Add to Ticket
 2- Display Ticket
 3- Save and Start New Ticket
 4- List Finishing Services
 5- List Print Jobs
 0- End Program
><ENTER> 
You must enter a value: abc<ENTER> 
Invalid integer: 1 abc<ENTER> 
Only an integer please: -1<ENTER> 
Invalid value: [0<= value <=5], try again: 6<ENTER> 
Invalid value: [0<= value <=5], try again: 0<ENTER>
```
##### Explanation
Given the following menu:  
```text
Seneca Print Desk
 1- Add to Ticket
 2- Display Ticket
 3- Save and Start New Ticket
 4- List Finishing Services
 5- List Print Jobs
 0- End Program
> 
```  

If the user inputs invalid data, the program should respond as follows and wait for re-entry:  
1. **Empty Input:**  
   ```text
   You must enter a value:
   ```  
2. **Non-Integer Input:**  
   ```text
   Invalid integer: 
   ```  
3. **Trailing Characters After Integer:**  
   ```text
   Only an integer please: 
   ```  
4. **Out of Range Input:**  
   ```text
   Invalid value: [0<= value <=5], try again: 
   ```  
> 0 and 5 are lower and upper acceptable limits in this case

The program should continue prompting the user until a valid integer within the menu range is entered.  

---

### General Requirements  

- **Error Handling**: Follow the input validation process outlined above.  
- **Consistency**: Ensure menu titles, exit options, and functionality are consistent with this specification.  

---

# MS5 Submission

## MS51 Submission  

---

### MS51 Tester Program  

**No tester program**; use your own `main.cpp`.  

---


### MS51 Data Entry  

```text
4 <ENTER>
5 <ENTER>
0 <ENTER>
```  

---

### MS51 Expected Output  

[m51_correct_output.txt](prj/m51_correct_output.txt)  

---

### MS51 Submission Process  

To submit your work:  

1. **Commit, Push, and Pull Your Work**:  
   Commit and push the following files to your Assignment Zero repository on GitHub, then pull the changes into your repository checkout on Matrix:  
   - **Utils.cpp, Utils.h**  
   - **Menu.h, Menu.cpp, constants.h**  
   - **Chargeable.h, Chargeable.cpp**  
   - **PrintJob.h, PrintJob.cpp**  
   - **Finishing.h, Finishing.cpp**  
   - **PrintDesk.h, PrintDesk.cpp**  
   - **main.cpp**  
   - **finishes.csv, prints.csv**  

2. **Compile and Test**:  
   Compile and run your code using the `g++` compiler as outlined in the [introduction](#compiling-and-testing-your-program). Ensure your program runs correctly and matches the expected output.  

3. **Submit Your Work**:  
   From your `matrix` account, run the following command:  

   ```bash
   ~professor.userid/submit 244/prj/m51
   ```  

   Follow the instructions provided by the submission command.  


### The submit program's options:
```bash
~professor.userid/submit DeliverableName [-submission options]<ENTER>
[-submission option] acceptable values:
  "-due":
       Shows due dates only
       This option cannot be used in combination with any other option.
  "-skip_spaces":
       Do the submission regardless of incorrect horizontal spacing.
       This option may incur a penalty.
  "-skip_blank_lines":
       Do the submission regardless of incorrect vertical spacing.
       This option may incur a penalty.
  "-feedback":
       Check the program execution without submission.
```

## [Back to MS5 Submission](#ms5-submission)



## MS52 Submission 

**Add Print Job**

---

### MS52 Tester Program  

**No tester program**; use your own `main.cpp`.  

---


### MS52 Data Entry  

```text
1 <ENTER>
2 <ENTER>
2 <ENTER>
3 <ENTER>
2 <ENTER>
0 <ENTER>
2 <ENTER>
1 <ENTER>
0 <ENTER>
2 <ENTER>
3 <ENTER>
1 <ENTER>
0 <ENTER>
0 <ENTER> <-- the original submitter checked through this point; enter the final 1 below to complete this local test
1 <ENTER>
```  
---

### MS52 Expected Output  

[m52_correct_output.txt](prj/m52_correct_output.txt)  

---

### MS52 Submission Process  

To submit your work:  

1. **Commit, Push, and Pull Your Work**:  
   Commit and push the following files to your Assignment Zero repository on GitHub, then pull the changes into your repository checkout on Matrix:  
   - **Utils.cpp, Utils.h**  
   - **Menu.h, Menu.cpp, constants.h**  
   - **Chargeable.h, Chargeable.cpp**  
   - **PrintJob.h, PrintJob.cpp**  
   - **Finishing.h, Finishing.cpp**  
   - **PrintDesk.h, PrintDesk.cpp**  
   - **main.cpp**  
   - **finishes.csv, prints.csv**  

2. **Compile and Test**:  
   Compile and run your code using the `g++` compiler as outlined in the [introduction](#compiling-and-testing-your-program). Ensure your program runs correctly and matches the expected output.  

3. **Submit Your Work**:  
   From your `matrix` account, run the following command:  

   ```bash
   ~professor.userid/submit 244/prj/m52
   ```  

   Follow the instructions provided by the submission command.  


### The submit program's options:
```bash
~professor.userid/submit DeliverableName [-submission options]<ENTER>
[-submission option] acceptable values:
  "-due":
       Shows due dates only
       This option cannot be used in combination with any other option.
  "-skip_spaces":
       Do the submission regardless of incorrect horizontal spacing.
       This option may incur a penalty.
  "-skip_blank_lines":
       Do the submission regardless of incorrect vertical spacing.
       This option may incur a penalty.
  "-feedback":
       Check the program execution without submission.
```

## [Back to MS5 Submission](#ms5-submission)


## MS53 Submission 

**Add Finishing**

---

### MS53 Tester Program  

**No tester program**; use your own `main.cpp`.  

---


### MS53 Data Entry  

```text
1 <ENTER>
1 <ENTER>
1 <ENTER>
0 <ENTER>
1 <ENTER>
1 <ENTER>
1 <ENTER>
bind on left <ENTER>
0 <ENTER>
0 <ENTER> <-- the original submitter checked through this point; enter the final 1 below to complete this local test
1 <ENTER>
```  

---

### MS53 Expected Output  

[m53_correct_output.txt](prj/m53_correct_output.txt)  

---

### MS53 Submission Process  

To submit your work:  

1. **Commit, Push, and Pull Your Work**:  
   Commit and push the following files to your Assignment Zero repository on GitHub, then pull the changes into your repository checkout on Matrix:  
   - **Utils.cpp, Utils.h**  
   - **Menu.h, Menu.cpp, constants.h**  
   - **Chargeable.h, Chargeable.cpp**  
   - **PrintJob.h, PrintJob.cpp**  
   - **Finishing.h, Finishing.cpp**  
   - **PrintDesk.h, PrintDesk.cpp**  
   - **main.cpp**  
   - **finishes.csv, prints.csv**  

2. **Compile and Test**:  
   Compile and run your code using the `g++` compiler as outlined in the [introduction](#compiling-and-testing-your-program). Ensure your program runs correctly and matches the expected output.  

3. **Submit Your Work**:  
   From your `matrix` account, run the following command:  

   ```bash
   ~professor.userid/submit 244/prj/m53
   ```  

   Follow the instructions provided by the submission command.  


### The submit program's options:
```bash
~professor.userid/submit DeliverableName [-submission options]<ENTER>
[-submission option] acceptable values:
  "-due":
       Shows due dates only
       This option cannot be used in combination with any other option.
  "-skip_spaces":
       Do the submission regardless of incorrect horizontal spacing.
       This option may incur a penalty.
  "-skip_blank_lines":
       Do the submission regardless of incorrect vertical spacing.
       This option may incur a penalty.
  "-feedback":
       Check the program execution without submission.
```

## [Back to MS5 Submission](#ms5-submission)



## MS54 Submission 

**Display Ticket**

---

### MS54 Tester Program  

**No tester program**; use your own `main.cpp`.  

---


### MS54 Data Entry  

```text
1 <ENTER>
1 <ENTER>
1 <ENTER>
2 <ENTER>
bind on left <ENTER>
2 <ENTER>
2 <ENTER>
1 <ENTER>
1 <ENTER>
6 <ENTER>
1 <ENTER>
<ENTER>
0 <ENTER>
2 <ENTER>
0 <ENTER> <-- the original submitter checked through this point; enter the final 1 below to complete this local test
1 <ENTER>

```  

---

### MS54 Expected Output  

[m54_correct_output.txt](prj/m54_correct_output.txt)  

---

### MS54 Submission Process  

To submit your work:  

1. **Commit, Push, and Pull Your Work**:  
   Commit and push the following files to your Assignment Zero repository on GitHub, then pull the changes into your repository checkout on Matrix:  
   - **Utils.cpp, Utils.h**  
   - **Menu.h, Menu.cpp, constants.h**  
   - **Chargeable.h, Chargeable.cpp**  
   - **PrintJob.h, PrintJob.cpp**  
   - **Finishing.h, Finishing.cpp**  
   - **PrintDesk.h, PrintDesk.cpp**  
   - **main.cpp**  
   - **finishes.csv, prints.csv**  

2. **Compile and Test**:  
   Compile and run your code using the `g++` compiler as outlined in the [introduction](#compiling-and-testing-your-program). Ensure your program runs correctly and matches the expected output.  

3. **Submit Your Work**:  
   From your `matrix` account, run the following command:  

   ```bash
   ~professor.userid/submit 244/prj/m54
   ```  

   Follow the instructions provided by the submission command.  


### The submit program's options:
```bash
~professor.userid/submit DeliverableName [-submission options]<ENTER>
[-submission option] acceptable values:
  "-due":
       Shows due dates only
       This option cannot be used in combination with any other option.
  "-skip_spaces":
       Do the submission regardless of incorrect horizontal spacing.
       This option may incur a penalty.
  "-skip_blank_lines":
       Do the submission regardless of incorrect vertical spacing.
       This option may incur a penalty.
  "-feedback":
       Check the program execution without submission.
```

## [Back to MS5 Submission](#ms5-submission)


## MS55 Submission 

**Reset Exit and Save Ticket Message**

---

### MS55 Tester Program  

**No tester program**; use your own `main.cpp`.  

---


### MS55 Data Entry  

```text
1 <ENTER>
2 <ENTER>
2 <ENTER>
2 <ENTER>
0 <ENTER>
2 <ENTER>
0 <ENTER>
0 <ENTER>
3 <ENTER>
0 <ENTER>
```  

---

### MS55 Expected Output  

[m55_correct_output.txt](prj/m55_correct_output.txt)  

---

### MS55 Submission Process 

To submit your work:  

1. **Commit, Push, and Pull Your Work**:  
   Commit and push the following files to your Assignment Zero repository on GitHub, then pull the changes into your repository checkout on Matrix:  
   - **Utils.cpp, Utils.h**  
   - **Menu.h, Menu.cpp, constants.h**  
   - **Chargeable.h, Chargeable.cpp**  
   - **PrintJob.h, PrintJob.cpp**  
   - **Finishing.h, Finishing.cpp**  
   - **PrintDesk.h, PrintDesk.cpp**  
   - **main.cpp**  
   - **finishes.csv, prints.csv**  

2. **Compile and Test**:  
   Compile and run your code using the `g++` compiler as outlined in the [introduction](#compiling-and-testing-your-program). Ensure your program runs correctly and matches the expected output.  

3. **Submit Your Work**:  
   From your `matrix` account, run the following command:  

   ```bash
   ~professor.userid/submit 244/prj/m55
   ```  

   Follow the instructions provided by the submission command.  


### The submit program's options:
```bash
~professor.userid/submit DeliverableName [-submission options]<ENTER>
[-submission option] acceptable values:
  "-due":
       Shows due dates only
       This option cannot be used in combination with any other option.
  "-skip_spaces":
       Do the submission regardless of incorrect horizontal spacing.
       This option may incur a penalty.
  "-skip_blank_lines":
       Do the submission regardless of incorrect vertical spacing.
       This option may incur a penalty.
  "-feedback":
       Check the program execution without submission.
```

## [Back to MS5 Submission](#ms5-submission)



## MS56 Submission 

**Fool-Proofing and Bad Data File**

---

### MS56 Tester Program  

[ms56.cpp](prj/ms56.cpp)

---


### MS56 Data Entry  

```text
<ENTER>
-1 <ENTER>
4 <ENTER>
abc <ENTER>
123abc <ENTER>
0 <ENTER>
```  

---

### MS56 Expected Output  

[m56_correct_output.txt](prj/m56_correct_output.txt)  

---

### MS56 Submission Process 

To submit your work:  

1. **Commit, Push, and Pull Your Work**:  
   Commit and push the following files to your Assignment Zero repository on GitHub, then pull the changes into your repository checkout on Matrix:  
   - **Utils.cpp, Utils.h**  
   - **Menu.h, Menu.cpp, constants.h**  
   - **Chargeable.h, Chargeable.cpp**  
   - **PrintJob.h, PrintJob.cpp**  
   - **Finishing.h, Finishing.cpp**  
   - **PrintDesk.h, PrintDesk.cpp**  
   - **ms56.cpp**  
   - **finishes.csv, prints.csv, badfinishes.csv**  

2. **Compile and Test**:  
   Compile and run your code using the `g++` compiler as outlined in the [introduction](#compiling-and-testing-your-program). Ensure your program runs correctly and matches the expected output.  

3. **Submit Your Work**:  
   From your `matrix` account, run the following command:  

   ```bash
   ~professor.userid/submit 244/prj/m56
   ```  

   Follow the instructions provided by the submission command.  


### The submit program's options:
```bash
~professor.userid/submit DeliverableName [-submission options]<ENTER>
[-submission option] acceptable values:
  "-due":
       Shows due dates only
       This option cannot be used in combination with any other option.
  "-skip_spaces":
       Do the submission regardless of incorrect horizontal spacing.
       This option may incur a penalty.
  "-skip_blank_lines":
       Do the submission regardless of incorrect vertical spacing.
       This option may incur a penalty.
  "-feedback":
       Check the program execution without submission.
```

## [Back to MS5 Submission](#ms5-submission)


---

# Project Reflection  

## Reflection Submission (Optional)  

The reflection submission is optional and unweighted. Submit it no later than December 6, 2026, at 11:59 p.m. America/Toronto.  

You can use it to:  
- Share your thoughts about the project or provide feedback to your professor.  
- Highlight any additional work or enhancements you have implemented that you would like your professor to notice.  

Feel free to include any insights, challenges you faced, or suggestions for improving the project in future iterations.  

---

### Reflection Submission Process  

1. **Write Your Reflection:**  
   - Create a file named `reflect.txt` and include your reflection.  

2. **Commit, Push, and Pull Your Reflection:**  
   - Commit and push `reflect.txt` to your Assignment Zero repository on GitHub, then pull the changes into your repository checkout on Matrix.
   - Use the following command to submit your reflection:  

     ```bash
     ~professor.userid/submit 244/prj/mref
     ```  

3. **Follow Instructions:**  
   - Complete the submission process as prompted by the command.  

---

## [Back to MS5 Submission](#ms5-submission)  

