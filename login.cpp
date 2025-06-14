
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
int attempts = 0;
std::string password = "belmiredub", holder, username;

char buffer[80];
std::fstream file("logintrackFILE.txt", std::ios::app);
void authentication()
{
    time_t currentTime = time(nullptr);
    struct tm *timePtr = localtime(&currentTime);
    strftime(buffer, 80, "%a %m %d %Y %H:%M:%S", timePtr);

    system("cls");
    printf("Hello User, Let's Get You Signed In.\n");
    system("pause");
    std::cout << std::endl;
    printf("Enter your username:");
    std::getline(std::cin, username);

    while (attempts < 3)
    {

        system("cls");
        std::cout << "Today's Date: " << ctime(&currentTime) << std::endl
                  << std::endl;
        printf("Enter Your Password:");
        getline(std::cin, holder);
        file << "Username     : " << username
             << std::endl;
        if (holder == password)
        {
            system("cls");
            std::cout << "Today's Date: " << ctime(&currentTime) << std::endl
                      << std::endl;
            printf("Welcome %s ,You've Succsessfully Logged In.", username.c_str());
            std::cout << std::endl;

            file << " Attempt no   : " << attempts + 1 << std::endl;
            file << " Access Status: GRANTED\n";
            file << " Timestamp    : " << buffer << std::endl;
            file << std::endl
                 << "________________________________________________________\n";

            break;
            file.close();
        }
        else
        {
            if (file.is_open())
            {
                file << "Attempt no   :" << attempts + 1 << std::endl;
                file << "Access Status: DENIED \n";
                file << "Timestamp    :" << buffer << std::endl
                     << std::endl
                     << "________________________________________________________\n";
                ;
                attempts++;
            }
        }
    }
    if (attempts >= 3)
    {
        printf("Too many attempts\n");
        system("pause");
        file << " Locked Out Because Of Failed Multiple Attempts" << std::endl
             << "________________________________________________________\n";
        ;
    }
}
int main()
{

    time_t start = time(nullptr);
    authentication();
    time_t end = time(nullptr);
    double runtime = difftime(end, start);
    file << "Total Runtime :" << runtime << " seconds" << std::endl
         << std::endl
         << ".....................Program Terminated.....................\n\n\n";
    ;
    system("pause>0");
}