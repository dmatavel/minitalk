# minitalk

**Description**: The aim of this project is to create two programs (a client and a  server) and stablish a communication between then. This data exchange is made using UNIX signals. The server is started first, and it prints in the standard output his PID (Process ID). The client has to be started with two arguments: the server’s PID and a string with the message that will be send by the client. It can be a single word or multiple words between double quotes. The server needs to be capable of receive multiple messages without stuck or shutdown.

**Instructions**:

1. Inside minitalk’s repository type `make` and hit `Enter` to create server’s and client’ executables.

2. Type `./server` and Enter to initialize server. It will print his PID and wait to receive a message.

3. In another tab or terminal type `./client [server’s PID] [message]` to send a message to the server.

4. The server should print the message and wait for any future messages.

5. Press `Ctrl + C` to terminate the server’s process.

**What I learned with this project**: Data exchange between process using UNIX signals; a set of standard functions to handle signals and processes; bitwise operations.
