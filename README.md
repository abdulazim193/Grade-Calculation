# Grade Calculator - SSC/HSC & University System

A simple C program that calculates letter grade and grade points based on input marks. Supports both SSC/HSC grading system (5.00 scale) and University grading system (4.00 scale) of Bangladesh.

Developed by ABDUL AZIM

## Features

- Two grading systems: SSC/HSC and University
- Takes marks input (0-100)
- Displays Letter Grade and Grade Points
- Input validation for invalid marks

## Grading Tables

### SSC/HSC System

| Marks Range | Letter Grade | Grade Points |
|-------------|--------------|--------------|
| 80-100 | A+ | 5.00 |
| 70-79 | A | 4.00 |
| 60-69 | A- | 3.50 |
| 50-59 | B | 3.00 |
| 40-49 | C | 2.00 |
| 33-39 | D | 1.00 |
| 0-32 | F | 0.00 |

### University System (Presidency University)

| Marks Range | Letter Grade | Grade Points |
|-------------|--------------|--------------|
| 80-100 | A+ | 4.00 |
| 75-79 | A | 3.75 |
| 70-74 | A- | 3.50 |
| 65-69 | B+ | 3.25 |
| 60-64 | B | 3.00 |
| 55-59 | B- | 2.75 |
| 50-54 | C+ | 2.50 |
| 45-49 | C | 2.25 |
| 40-44 | D | 2.00 |
| 0-39 | F | 0.00 |

## Screenshot

![Compiled Code Output](image.png)
## How to Run

### Compile

```bash
gcc Grading.c -o Grading
