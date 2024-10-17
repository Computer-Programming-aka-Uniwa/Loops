![Flag](https://upload.wikimedia.org/wikipedia/commons/thumb/a/a5/Flag_of_the_United_Kingdom_%281-2%29.svg/255px-Flag_of_the_United_Kingdom_%281-2%29.svg.png)

# Loops in C Programming

For the requested Assignment, click the link:  
[Assignment](Assignment/)

For the Source Code, click the link:  
[Code](Code/)

For the detailed Documentation, click the link:  
[Documentation](Documentation/)

## Overview

This project explores iterative structures (loops) in the C programming language, with a focus on `for`, `while`, `do-while` loops, and control commands like `break` and `continue`. It includes theoretical explanations, practical examples, and source code documentation to demonstrate the use of loops in various scenarios.

## Course Information
- **Course**: Computer Programming
- **Semester**: 1
- **Program**: [UNIWA](https://www.uniwa.gr/)
- **Department**: [Information and Computer Engineering](https://ice.uniwa.gr/)
- **Instructor**: [Georgios Meletiou](https://ice.uniwa.gr/emd_person/17562/)

## Student Information
- **Name**: Athanasiou Vasileios Evangelos
- **Student ID**: ice19390005
- **Status**: Undergraduate

---

## Theory Topics 

### Topic 1
#### Item 1a) What are iterative structures (loops)?
Iterative structures, also known as loops, are control flow mechanisms in programming that allow a set of instructions to be repeated multiple times. They automate repetitive tasks and manage data structures such as arrays or lists. In C, loops execute a block of code as long as a specified condition remains true.

#### Item 1b) Which iterative structures do you know in C?
The iterative structures in C include:
- **`for` loop**: A loop with initialization, condition, and increment expressions.
- **`while` loop**: A loop that executes as long as a condition remains true.
- **`do-while` loop**: Similar to the `while` loop but guarantees at least one execution since the condition is evaluated after the loop's body.

#### Theme 1c) How are they related to each other?
All loops serve the same purpose—repeating code—but differ in syntax and use cases. The `for` loop is generally used when the number of iterations is known beforehand, whereas `while` and `do-while` loops are better suited for situations where the condition controlling the iteration may change dynamically during runtime.

---

## Topic 2

#### Theme 2b) What do you know about the `break` command?
The `break` command is used to exit a loop prematurely. It can be triggered by certain conditions inside the loop, allowing the program to stop iterating and proceed to the code following the loop. This is commonly used when a specific condition is met, such as finding a value in an array.

#### Item 2c) What do you know about the `continue` command?
The `continue` command skips the current iteration of a loop and proceeds to the next iteration. Unlike `break`, it does not terminate the loop entirely; instead, it bypasses the remaining code within the current loop cycle and moves to the next iteration.

---

## Source Codes / Documentation 

### Topic 3 

#### Item 3A 
- **Note**: `MathsWithIntegersInLoopA.c`
- **Program**: `MathsWithIntegersInLoopA.c`
  - This program demonstrates how to perform basic arithmetic operations in a loop. It allows the user to input integers and iteratively processes these inputs to perform calculations like sum, product, or difference.
  
- **Documentation**: `MathsWithIntegersInLoopA.c`
  - **Question**: The program asks the user to input integers and choose the desired operation.
  - **Structure**: A `for` loop is used to perform the operations iteratively.
  - **Variables**: Integer variables are used to store the user inputs and intermediate results.
  - **Traversal**: The loop iterates over the input values, performing the chosen operation during each iteration.
  - **Examples**: Example input/output scenarios demonstrate how the program behaves.
  - **Remarks**: Commentary on potential issues or edge cases, such as dividing by zero or negative inputs.

#### Item 3B 
- **Note**: `MathsWithIntegersInLoopB.c`
- **Program**: `MathsWithIntegersInLoopB.c`
  - This program is a variation of the previous one, with additional features for handling more complex mathematical operations or different input conditions.

- **Documentation**: `MathsWithIntegersInLoopB.c`
  - **Question**: Similar to the previous program but with more advanced mathematical questions.
  - **Structure**: A combination of `for` and `while` loops is used.
  - **Variables**: Expanded set of variables to handle the added functionality.
  - **Intersection**: More complex logic is used to manage loop intersections and edge cases.
  - **Examples**: Input/output scenarios demonstrate the additional functionality.
  - **Observations**: Detailed notes on optimizations or alternative approaches.

---

### Topic 4

#### Item 4
- **Note**: `Stars.c`
- **Program**: `Stars.c`
  - This program prints patterns of stars (`*`) based on user input. It demonstrates the use of nested loops for pattern generation.

- **Documentation**: `Stars.c`
  - **The Quest**: The program asks the user to input a number, which determines the size of the star pattern.
  - **Structure**: A nested `for` loop is used to print each row and column of stars.
  - **Variables**: Variables store the size of the pattern and control the loop iterations.
  - **Crossing**: The loops iterate through the pattern grid, printing stars based on the specified size.
  - **Examples**: Various star patterns are printed, depending on user input.
  - **Remarks**: Additional notes on adjusting the pattern or limiting the size.

---

### Topic 5

#### Item 5
- **Note**: `SinTaylor.c`
- **Program**: `SinTaylor.c`
  - This program calculates the sine of a number using the Taylor series expansion. It demonstrates how loops can be used to perform mathematical series expansions with a predefined number of iterations.

- **Documentation**: `SinTaylor.c`
  - **Objective**: The program aims to compute sine using the Taylor series.
  - **Structure**: A `for` loop is used to sum the terms of the Taylor series.
  - **Variables**: Variables store the input value, result, and terms of the series.
  - **Crosswalk**: The loop iterates a fixed number of times, calculating and adding each term of the series.
  - **Examples**: Sample input/output of sine calculations for different values.
  - **Remarks**: Notes on improving accuracy by increasing the number of iterations.

---

## Requirements

- **C Compiler**: GCC or any standard C compiler.
- **Operating System**: Linux/Windows/MacOS.
- **Development Environment**: Command Line or IDE.

---

## Installation and Usage

### 1. Clone the Repository
```bash
git clone https://github.com/Computer-Programming-aka-Uniwa/Loops
cd Loops
```
### 2. Compile
```bash
gcc -o MathsWithIntegersInLoopA MathsWithIntegersInLoopA.c
gcc -o MathsWithIntegersInLoopB MathsWithIntegersInLoopB.c
gcc -o Stars Stars.c
gcc -o SinTaylor SinTaylor.c
```

### 3. Run
```bash
./MathsWithIntegersInLoopA
./MathsWithIntegersInLoopB
./Stars
./SinTaylor
```

![Flag](https://upload.wikimedia.org/wikipedia/commons/thumb/5/5c/Flag_of_Greece.svg/255px-Flag_of_Greece.svg.png)

# Βρόχοι στην Γλώσσα Προγραμματισμού C

Για το ζητούμενο Project, κάντε κλικ στον σύνδεσμο:  
[Assignment](Assignment/)

Για τον Πηγαίο Κώδικα, κάντε κλικ στον σύνδεσμο:  
[Code](Code/)

Για την αναλυτική Τεκμηρίωση, κάντε κλικ στον σύνδεσμο:  
[Documentation](Documentation/)

## Επισκόπηση

Αυτό το project εξετάζει τις επαναληπτικές δομές (βρόχους) στη γλώσσα προγραμματισμού C, με έμφαση στους βρόχους `for`, `while`, `do-while`, καθώς και στις εντολές ελέγχου όπως `break` και `continue`. Περιλαμβάνει θεωρητικές εξηγήσεις, πρακτικά παραδείγματα και τεκμηρίωση κώδικα για να δείξει τη χρήση βρόχων σε διάφορα σενάρια.

## Πληροφορίες Μαθήματος
- **Μάθημα**: Προγραμματισμός Υπολογιστών
- **Εξάμηνο**: 1
- **Πρόγραμμα Σπουδών**: [ΠΑΔΑ](https://www.uniwa.gr/)
- **Τμήμα**: [Μηχανικών Πληροφορικής και Υπολογιστών](https://ice.uniwa.gr/)
- **Διδάσκων**: [Γεώργιος Μελετίου](https://ice.uniwa.gr/emd_person/17562/)

## Στοιχεία Φοιτητή
- **Όνομα**: Αθανασίου Βασίλειος Ευάγγελος
- **Αριθμός Μητρώου**: ice19390005
- **Κατάσταση**: Προπτυχιακός

---

## Θεωρητικά Θέματα

### Θέμα 1
#### Στοιχείο 1α) Τι είναι οι επαναληπτικές δομές (βρόχοι);
Οι επαναληπτικές δομές, γνωστές και ως βρόχοι, είναι μηχανισμοί ροής ελέγχου στον προγραμματισμό που επιτρέπουν την επανάληψη ενός συνόλου εντολών πολλές φορές. Αυτοματοποιούν επαναλαμβανόμενες εργασίες και διαχειρίζονται δομές δεδομένων όπως πίνακες ή λίστες. Στη γλώσσα C, οι βρόχοι εκτελούν ένα μπλοκ κώδικα όσο μια συγκεκριμένη συνθήκη είναι αληθής.

#### Στοιχείο 1β) Ποιες επαναληπτικές δομές γνωρίζετε στη γλώσσα C;
Οι επαναληπτικές δομές στη γλώσσα C περιλαμβάνουν:
- **Βρόχος `for`**: Ένας βρόχος με αρχικοποίηση, συνθήκη και έκφραση επαύξησης.
- **Βρόχος `while`**: Ένας βρόχος που εκτελείται όσο μια συνθήκη παραμένει αληθής.
- **Βρόχος `do-while`**: Παρόμοιος με τον `while` αλλά εγγυάται τουλάχιστον μία εκτέλεση, καθώς η συνθήκη ελέγχεται μετά την εκτέλεση του σώματος του βρόχου.

#### Θέμα 1γ) Πώς σχετίζονται μεταξύ τους;
Όλοι οι βρόχοι εξυπηρετούν τον ίδιο σκοπό — την επανάληψη κώδικα — αλλά διαφέρουν στη σύνταξη και στις περιπτώσεις χρήσης. Ο βρόχος `for` χρησιμοποιείται συνήθως όταν είναι γνωστός ο αριθμός των επαναλήψεων εκ των προτέρων, ενώ οι βρόχοι `while` και `do-while` είναι πιο κατάλληλοι για περιπτώσεις όπου η συνθήκη που ελέγχει την επανάληψη μπορεί να αλλάξει δυναμικά κατά τη διάρκεια της εκτέλεσης.

---

## Θέμα 2

#### Θέμα 2β) Τι γνωρίζετε για την εντολή `break`;
Η εντολή `break` χρησιμοποιείται για να τερματίσει πρόωρα έναν βρόχο. Μπορεί να ενεργοποιηθεί από συγκεκριμένες συνθήκες μέσα στον βρόχο, επιτρέποντας στο πρόγραμμα να σταματήσει την επανάληψη και να προχωρήσει στον κώδικα που ακολουθεί τον βρόχο. Συνήθως χρησιμοποιείται όταν πληρούται μια συγκεκριμένη συνθήκη, όπως η εύρεση μιας τιμής σε έναν πίνακα.

#### Στοιχείο 2γ) Τι γνωρίζετε για την εντολή `continue`;
Η εντολή `continue` παρακάμπτει την τρέχουσα επανάληψη ενός βρόχου και προχωρά στην επόμενη επανάληψη. Σε αντίθεση με την `break`, δεν τερματίζει τον βρόχο συνολικά. Αντίθετα, παραλείπει τον υπόλοιπο κώδικα στην τρέχουσα επανάληψη του βρόχου και συνεχίζει με την επόμενη.

---

## Πηγαίοι Κώδικες / Τεκμηρίωση

### Θέμα 3

#### Στοιχείο 3Α 
- **Σημείωση**: `MathsWithIntegersInLoopA.c`
- **Πρόγραμμα**: `MathsWithIntegersInLoopA.c`
  - Αυτό το πρόγραμμα δείχνει πώς να εκτελείτε βασικές αριθμητικές πράξεις σε έναν βρόχο. Επιτρέπει στον χρήστη να εισάγει ακέραιους αριθμούς και να επεξεργάζεται επαναληπτικά αυτές τις εισόδους για να εκτελέσει πράξεις όπως άθροισμα, γινόμενο ή διαφορά.
  
- **Τεκμηρίωση**: `MathsWithIntegersInLoopA.c`
  - **Ερώτηση**: Το πρόγραμμα ζητά από τον χρήστη να εισάγει ακέραιους αριθμούς και να επιλέξει την επιθυμητή πράξη.
  - **Δομή**: Ένας βρόχος `for` χρησιμοποιείται για να εκτελέσει τις πράξεις επαναληπτικά.
  - **Μεταβλητές**: Ακέραιες μεταβλητές χρησιμοποιούνται για την αποθήκευση των εισόδων του χρήστη και των ενδιάμεσων αποτελεσμάτων.
  - **Διασχίσεις**: Ο βρόχος επαναλαμβάνεται πάνω από τις τιμές εισόδου, εκτελώντας την επιλεγμένη πράξη σε κάθε επανάληψη.
  - **Παραδείγματα**: Σενάρια εισόδου/εξόδου παραδείγματος δείχνουν πώς συμπεριφέρεται το πρόγραμμα.
  - **Παρατηρήσεις**: Σχόλια για πιθανά ζητήματα ή ειδικές περιπτώσεις, όπως η διαίρεση με το μηδέν ή οι αρνητικές εισόδους.

#### Στοιχείο 3Β 
- **Σημείωση**: `MathsWithIntegersInLoopB.c`
- **Πρόγραμμα**: `MathsWithIntegersInLoopB.c`
  - Αυτό το πρόγραμμα είναι μια παραλλαγή του προηγούμενου, με πρόσθετα χαρακτηριστικά για την επεξεργασία πιο πολύπλοκων μαθηματικών πράξεων ή διαφορετικών συνθηκών εισόδου.

- **Τεκμηρίωση**: `MathsWithIntegersInLoopB.c`
  - **Ερώτηση**: Παρόμοια με το προηγούμενο πρόγραμμα αλλά με πιο προχωρημένες μαθηματικές ερωτήσεις.
  - **Δομή**: Ένας συνδυασμός βρόχων `for` και `while` χρησιμοποιείται.
  - **Μεταβλητές**: Διευρυμένο σύνολο μεταβλητών για την επεξεργασία της πρόσθετης λειτουργικότητας.
  - **Διασταύρωση**: Πιο περίπλοκη λογική χρησιμοποιείται για τη διαχείριση των διασταυρώσεων βρόχων και των ειδικών περιπτώσεων.
  - **Παραδείγματα**: Σενάρια εισόδου/εξόδου δείχνουν την πρόσθετη λειτουργικότητα.
  - **Παρατηρήσεις**: Λεπτομερείς σημειώσεις για βελτιστοποιήσεις ή εναλλακτικές προσεγγίσεις.

---

### Θέμα 4

#### Στοιχείο 4
- **Σημείωση**: `Stars.c`
- **Πρόγραμμα**: `Stars.c`
  - Αυτό το πρόγραμμα εκτυπώνει μοτίβα αστεριών (`*`) με βάση την είσοδο του χρήστη. Δείχνει τη χρήση εμφωλευμένων βρόχων για τη δημιουργία μοτίβων.

- **Τεκμηρίωση**: `Stars.c`
  - **Η Αποστολή**: Το πρόγραμμα ζητά από τον χρήστη να εισάγει έναν αριθμό, ο οποίος καθορίζει το μέγεθος του μοτίβου αστεριών.
  - **Δομή**: Ένας εμφωλευμένος βρόχος `for` χρησιμοποιείται για να εκτυπώσει κάθε γραμμή και στήλη αστεριών.
  - **Μεταβλητές**: Οι μεταβλητές αποθηκεύουν το μέγεθος του μοτίβου και ελέγχουν τις επαναλήψεις των βρόχων.
  - **Διασχίσεις**: Οι βρόχοι επαναλαμβάνονται στο πλέγμα του μοτίβου, εκτυπώνοντας αστερία με βάση το καθορισμένο μέγεθος.
  - **Παραδείγματα**: Διάφορα μοτίβα αστεριών εκτυπώνονται, ανάλογα με την είσοδο του χρήστη.
  - **Παρατηρήσεις**: Πρόσθετες σημειώσεις για την προσαρμογή του μοτίβου ή τον περιορισμό του μεγέθους.

---

### Θέμα 5

#### Στοιχείο 5
- **Σημείωση**: `SinTaylor.c`
- **Πρόγραμμα**: `SinTaylor.c`
  - Αυτό το πρόγραμμα υπολογίζει το ημίτονο ενός αριθμού χρησιμοποιώντας την ανάπτυξη της σειράς Taylor. Δείχνει πώς οι βρόχοι μπορούν να χρησιμοποιηθούν για την εκτέλεση επεκτάσεων μαθηματικών σειρών με προκαθορισμένο αριθμό επαναλήψεων.

- **Τεκμηρίωση**: `SinTaylor.c`
  - **Σκοπός**: Το πρόγραμμα στοχεύει στον υπολογισμό του ημίτονου χρησιμοποιώντας τη σειρά Taylor.
  - **Δομή**: Ένας βρόχος `for` χρησιμοποιείται για να προσθέσει τους όρους της σειράς Taylor.
  - **Μεταβλητές**: Οι μεταβλητές αποθηκεύουν την είσοδο, το αποτέλεσμα και τους όρους της σειράς.
  - **Διασχίσεις**: Ο βρόχος επαναλαμβάνεται έναν προκαθορισμένο αριθμό φορών, υπολογίζοντας και προσθέτοντας κάθε όρο της σειράς.
  - **Παραδείγματα**: Δείγματα εισόδου/εξόδου για υπολογισμούς ημίτονου για διαφορετικές τιμές.
  - **Παρατηρήσεις**: Σημειώσεις για τη βελτίωση της ακρίβειας με την αύξηση του αριθμού επαναλήψεων.

---

## Απαιτήσεις

- **Μεταγλωττιστής C**: GCC ή οποιοσδήποτε συμβατικός μεταγλωττιστής C.
- **Λειτουργικό Σύστημα**: Linux/Windows/MacOS.
- **Περιβάλλον Ανάπτυξης**: Γραμμή εντολών ή IDE.

---

## Εγκατάσταση και Χρήση

### 1. Κλωνοποιήστε το Αποθετήριο
```bash
git clone https://github.com/Computer-Programming-aka-Uniwa/Loops
cd Loops
```
### 2. Μεταγλώττιση
```bash
gcc -o MathsWithIntegersInLoopA MathsWithIntegersInLoopA.c
gcc -o MathsWithIntegersInLoopB MathsWithIntegersInLoopB.c
gcc -o Stars Stars.c
gcc -o SinTaylor SinTaylor.c
```

### 3. Εκτέλεση
```bash
./MathsWithIntegersInLoopA
./MathsWithIntegersInLoopB
./Stars
./SinTaylor
```