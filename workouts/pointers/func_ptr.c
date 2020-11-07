#include <stdio.h>
// A function with an const char pointer parameter
// and void return type
void DisplayMessage(const char *msg)
{
    printf("Message  =>>  %s\n", msg);
}
int main()
{
    // pfDisplayMessage is a pointer to function DisplayMessage()
    void ( *pfDisplayMessage) (const char *) = &DisplayMessage;
    // Invoking DisplayMessage() using pfDisplayMessage
    (*pfDisplayMessage)("Hello Aticleworld.com");
    return 0;
}
