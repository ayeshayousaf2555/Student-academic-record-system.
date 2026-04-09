# 🎓 Student Record Management System

A menu-driven **C++ console application** for managing student records.  
This project demonstrates array manipulation, sorting algorithms, and record management operations such as **add, delete, and filter**.

---

## 📌 Features

- Display all student records sorted by:
  - Roll number (ascending/descending)
  - Midterm marks (ascending/descending)
  - Final marks (ascending/descending)
  - Grade (ascending/descending)

- Manage records:
  - Add a new student entry
  - Delete a student record by roll number

- Filter records:
  - Students with final marks greater than or less than/equal to **X**
  - Students with grade greater than or less than/equal to **X**
  - Results shown in ascending/descending order

- Exit option to terminate the program safely.

---

## 🏫 Grading Criteria

Grades are assigned automatically based on **final exam marks**:

| Final Marks Range | Grade |
|-------------------|-------|
| `< 50`            | F     |
| `50–59`           | D     |
| `60–72`           | C     |
| `73–85`           | B     |
| `> 85`            | A     |

---

## ⚙️ Implementation Details

- **Data Structures:**  
  - Arrays of fixed size (`size = 100`) store roll numbers, marks, classes, and grades.  
  - `totalstudents` initially set to 50.  

- **Sorting:**  
  - Implemented using nested loops (bubble-sort style).  

- **Adding Records:**  
  - User inputs roll number, marks, and class.  
  - Grade is calculated automatically.  

- **Deleting Records:**  
  - Record is removed by shifting subsequent entries.  

---

## ▶️ How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/ayeshayousaf2555/student-records.git
   cd student-records
