# ATM-Simulator-CPP

---

This program simulates an ATM system for Bank XYZ. It allows users to perform various banking operations such as checking their balance, depositing money, and withdrawing money.

## Features

- **Account Validation**: Validate account numbers and PINs.
- **Balance Inquiry**: Check your account balance.
- **Deposit Money**: Deposit money into your account.
- **Withdraw Money**: Withdraw money from your account.

## Requirements

To compile and run this program, you need the following:

- **C++ Compiler**: You need a C++ compiler that supports at least C++11. Common options include GCC (g++) or Clang.
- **Standard Library**: Ensure your system has the standard C++ library installed.

## Installation and Setup

### Step 1: Install a C++ Compiler

If you don't already have a C++ compiler installed, follow these instructions:

- **For Windows**: Install [MinGW](http://www.mingw.org/) or use the C++ tools provided with Visual Studio.
- **For Linux**: Install GCC with your package manager. For example, on Ubuntu, run `sudo apt-get install g++`.
- **For macOS**: Install Xcode Command Line Tools by running `xcode-select --install` in the terminal.

### Step 2: Download the Code

Clone or download the code from the repository.

```sh
git clone https://github.com/Lokesh-666/ATM-Simulator-CPP.git
```

Navigate to the directory where the code is saved:

```sh
cd ATM-Simulator-CPP
```

### Step 3: Compile the Program

Use the C++ compiler to compile the code. For example, with `g++`, run:

```sh
g++ -o ATM-Simulator-CPP simulator.cpp
```

This command will compile the program and create an executable file named `ATM-Simulator-CPP`.

### Step 4: Run the Program

After compiling, run the executable:

```sh
./ATM-Simulator-CPP
```

## Usage

1. **Program Start**: The program will prompt if you have an account with Bank XYZ.
2. **Account Number**: Enter your account number.
3. **PIN Validation**: Enter your 4-digit PIN.
4. **Operations**: You can choose to check your balance, deposit money, withdraw money, or exit.

### Example Usage

```
~~~~~Welcome to ATM of Bank XYZ!!~~~~~

Do you have an account (Y/N)?
Y
What is your account number?
111111111
Let me grab your information...
What is the 4 digit pin?
1111
What do you wish to do?
1. Check your Bank Balance (C)
2. Deposit Money (D)
3. Withdraw Money (W)
4. Exit (E)
C

Your Bank Account Balance is: 11
```

## Notes

- **Security**: Always keep your account number and PIN secure.
- **Input Validity**: Ensure you enter valid numerical values where required.
- **Error Handling**: The program will prompt you for correct inputs if an invalid choice is made.

## Contributing

If you find any bugs or have suggestions for improvements, please open an issue or create a pull request.

## License

This project is licensed under the MIT License.

---
