                                                                      Minitalk
Minitalk is a small client-server communication program written in C language. The project is part of the curriculum at 42, a coding school that emphasizes project-based learning and peer reviews.

The goal of the project is to implement a program that allows two separate processes, a client and a server, to communicate with each other using only signals. The server listens for incoming signals and decodes them into messages sent by the client, while the client sends signals containing ASCII-encoded messages to the server.

This readme file provides instructions on how to use and test the program, as well as some technical details about the implementation.

                                                                   Installation and Usage
To compile the program, simply clone this repository and run the Makefile:

 
                                             git clone https://github.com/simon-zerisenay/minitalk.git
                               
                                             cd minitalk
                                             
                                             make
                                             
This will create two executable files, server and client. To run the program, start the server in one terminal window:

                                             bash
                                             
                                             Copy code
                                             
                                             ./server
This will start the server, which will display its process ID (PID) on the console. Keep this window open while running the client in another terminal window:

                                             
                                             css
                                             
                                             Copy code
                                             
                                             ./client [SERVER_PID] [MESSAGE]
                                             
Replace [SERVER_PID] with the process ID of the server, which is displayed when the server starts. Replace [MESSAGE] with the message you want to send to the server. The client will send the message to the server, which will display it on the console.


                                               Testing

The program comes with a set of automated tests to verify its correctness. To run the tests, simply run the following command:

                                               Copy code

                                               make test

This will run a series of tests that check the program's behavior under different conditions, such as sending messages of varying length, sending messages from multiple clients, and handling server crashes. The tests should all pass if the program is working correctly.

Note that the tests require the kill command to be available on the system, as they use this command to send signals to the server and client processes.

                                                 Implementation Details
The program is implemented using the signal() function provided by the C standard library. The server sets up a signal handler function that listens for incoming signals, and the client sends signals containing ASCII-encoded messages.

To encode a message, the client first converts it to a series of 0s and 1s using the ASCII binary representation. It then sends a series of signals to the server, where each signal corresponds to a single bit in the message. A SIGUSR1 signal represents a 0 bit, while a SIGUSR2 signal represents a 1 bit.

The server listens for incoming signals and decodes them into messages by accumulating the bits until a full ASCII character has been received. Once a character has been received, it is printed to the console and the process repeats for the next message.

The program also handles errors gracefully by using signal handlers to catch common errors, such as invalid input or failed signal transmissions.

                                                        Conclusion
Minitalk is a simple but powerful demonstration of the power of signals in inter-process communication. By using signals to send messages, the program avoids the overhead of socket-based communication and provides a lightweight and efficient way for processes to communicate with each other.
