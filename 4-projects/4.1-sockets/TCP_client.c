/* TCP_client.c */
#include <stdio.h>
#include <unistd.h>

/* specific headers for socket programming */
#include <sys/socket.h>
#include <sys/types.h>

/* header for storing the address information */
#include <netinet/in.h>

int main() {
    /* create a socket */
    /* AF_INET = IPv4, SOCK_STREAM = TCP, 0 = Protocol */
    int network_socket;
    network_socket = socket(AF_INET, SOCK_STREAM, 0);

    /* specify an address for the socket to connect to */
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;

    /* htons converts the integer to the appropriate network byte order */
    server_address.sin_port = htons(9002);
    server_address.sin_addr.s_addr = INADDR_ANY; /* connect to 0.0.0.0 (localhost) */

    /* initiate the connection to the server */
    /* we cast the server_address to a generic sockaddr structure pointer */
    int connection_status = connect(network_socket, (struct sockaddr*)&server_address, sizeof(server_address));

    /* check for errors with the connection */
    if (connection_status == -1) {
        printf("There was an error trying to connect to the remote socket. \n\n");
    }

    /* receive data from the server */
    char server_response[256];
    recv(network_socket, &server_response, sizeof(server_response), 0);

    /* print out the server's response */
    printf("The server sent the data: %s\n", server_response);

    /* close the socket connection */
    close(network_socket);

    return 0;
}
