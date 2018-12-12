

#ifndef CHATROOM_UTILS_H_
#define CHATROOM_UTILS_H_

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>



typedef enum
{
  CONNECT,
  DISCONNECT,
  GET_USERS,
  SET_USERNAME,
  PUBLIC_MESSAGE,
  PRIVATE_MESSAGE,
  TOO_FULL,
  USERNAME_ERROR,
  SUCCESS,
  ERROR

} message_type;



typedef struct
{
  message_type type;
  char username[21];
  char data[256];

} message;


typedef struct connection_info
{
  int socket;
  struct sockaddr_in address;
  char username[20];
} connection_info;



void trim_newline(char *text);


void clear_stdin_buffer();

#endif
