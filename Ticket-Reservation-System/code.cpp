#include <iostream>
#include <string>

using namespace std;

class Ticket {
public:
    string event;
    string venue;
    string date;
    int num_tickets;

    Ticket() {}
    Ticket(string event, string venue, string date, int num_tickets)
        : event(event), venue(venue), date(date), num_tickets(num_tickets) {}

    virtual void display()
    {
        cout << "Event: " << event << endl;
        cout << "Venue: " << venue << endl;
        cout << "Date: " << date << endl;
        cout << "Number of Tickets: " << num_tickets << endl;
    }
};

class MovieTicket : public Ticket {
public:
    string movieName;
    string showTime;

    MovieTicket(string event, string venue, string date, int num_tickets, string movieName, string showTime)
        : Ticket(event, venue, date, num_tickets), movieName(movieName), showTime(showTime) {}

    void display()
    {
        cout << "Movie: " << movieName << endl;
        cout << "Show Time: " << showTime << endl;
        Ticket::display();
    }
};

class ConcertTicket : public Ticket {
    string artistName;

public:
    ConcertTicket(string event, string venue, string date, int num_tickets, string artistName)
        : Ticket(event, venue, date, num_tickets), artistName(artistName) {}

    void display()
    {
        cout << "Artist: " << artistName << endl;
        Ticket::display();
    }
};

class SportsTicket : public Ticket {
    string sportsType;

public:
    SportsTicket(string event, string venue, string date, int num_tickets, string sportsType)
        : Ticket(event, venue, date, num_tickets), sportsType(sportsType) {}

    void display()
    {
        cout << "Sports Type: " << sportsType << endl;
        Ticket::display();
    }
};

int main() {
    int numTickets;
    string event, venue, date,sportsType,artistName,movieName,showTime;
    int choice;

    Ticket *tickets[100];
    int ticketCount = 0;

    while (true) {
        cout << "\nMenu: " << endl;
        cout << "1. Book Movie Ticket" << endl;
        cout << "2. Book Concert Ticket" << endl;
        cout << "3. Book Sports Ticket" << endl;
        cout << "4. Display All Tickets" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter movie type: ";
            cin >> event;
            cout << "Enter venue: ";
            cin >> venue;
            cout << "Enter date: ";
            cin >> date;
            cout << "Enter number of tickets: ";
            cin >> numTickets;
            cout << "Enter movie name: ";
            cin >> movieName;
            cout << "Enter show time: ";
            cin >> showTime;

            tickets[ticketCount] = new MovieTicket(event, venue, date, numTickets,movieName , showTime);
            ticketCount++;
            break;

        case 2:
            cout << "Enter concert type: ";
            cin >> event;
            cout << "Enter venue: ";
            cin >> venue;
            cout << "Enter date: ";
            cin >> date;
            cout << "Enter number of tickets: ";
            cin >> numTickets;
            cout << "Enter artist name: ";
            cin >> artistName;

            tickets[ticketCount] = new ConcertTicket(event, venue, date, numTickets, artistName);
            ticketCount++;
            break;

        case 3:
            cout << "Enter sports event name: ";
            cin >> event;
            cout << "Enter venue: ";
            cin >> venue;
            cout << "Enter date: ";
            cin >> date;
            cout << "Enter number of tickets: ";
            cin >> numTickets;
            cout << "Enter sports type: ";
            cin >> sportsType;

            tickets[ticketCount] = new SportsTicket(event, venue, date, numTickets, sportsType);
            ticketCount++;
            break;

        case 4:
            cout << "Displaying all tickets: " << endl;
            for (int i = 0; i < ticketCount; i++) {
                tickets[i]->display();
                cout << "-----------------------------------------------" << endl;
            }
            break;

        case 5:
            exit(0);
            break;

        default:
            cout << "Invalid choice Reenter: " << endl;
            break;
        }
    }

    return 0;
}

