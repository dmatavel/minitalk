# minitalk

**Description**: The aim of this project is to create two programs (a client and a  server) and stablish a communication between then. This data exchange is made using UNIX signals. The server is started first, and it prints in the standard output his PID (Process ID). The client has to be started with two arguments: the server’s PID and a string with the message that will be send by the client (it can be a single word or multiple words between double quotes). The server needs to be capable of receive multiple messages without stuck or shutdown and it should print the received message as soon as possible.

**Instructions**:

Download and extract the [project's folder](https://github.com/dmatavel/minitalk/archive/refs/heads/main.zip).

1. Inside minitalk’s directory type `make` and hit `Enter` to create server’s and client’ executables.

2. Type `./server` and press `Enter` to initialize the server. It will print its PID and wait to receive a message from a client.

3. In another tab or terminal type `./client [server’s PID] [message]` to send a message to the server.

4. The server should print the message and wait for any future messages.

5. Press `Ctrl + C` to terminate the server’s process.

**What I learned with this project**: Data exchange between process using UNIX signals; a set of C standard functions to handle signals and processes; bitwise operations.
