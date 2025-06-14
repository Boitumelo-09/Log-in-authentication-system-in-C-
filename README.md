# 🔐 C++ Login Authentication System

This project is a **console-based login authentication system** developed in **C++**, designed to simulate a basic user login process with limited password attempts, access logging, and runtime tracking.

---

## 🧠 Overview

- Asks the user for a **username** and **password**
- Allows **3 attempts** to enter the correct password
- Logs:
  - Username
  - Attempt number
  - Access status (GRANTED or DENIED)
  - Timestamp
  - Total runtime of the session
- Saves all this info to a log file: `logintrackFILE.txt`

---

## 🎯 Features

- ✅ Clean and structured code with functions
- 🔄 Supports repeated attempts until locked out
- 🧾 All events are logged with timestamps
- ⏱ Tracks how long the program was running
- 💻 Uses both `ctime` and `fstream` for real-world simulation

---

## 🛠 Technologies Used

- **C++ Standard Library**
  - `iostream`
  - `fstream`
  - `ctime`
  - `string`
- **Console Commands**
  - `system("cls")`
  - `system("pause")`
- **Date & Time Formatting**
  - `ctime()`, `strftime()`, `difftime()`

---

## 📂 File Structure

```bash
📁 LoginSystem
├── login.cpp               # Source code
└── logintrackFILE.txt      # Auto-generated login logs
