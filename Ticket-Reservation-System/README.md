## PROBLEM STATEMENT
Create a ticket booking system for various events, including movies, concerts, and sports events. The system should allow users to book tickets for different events and display the details of all the booked tickets
## OBJECTIVE 

The objective of the ticket booking system is to provide a program that allows users to efficiently manage and display information about ticket details, movie-specific details and  tickets booked. The system aims to achieve the following objectives:

1.Book Movie Ticket: Allows the user to book a movie ticket by providing details such as movie type, venue, date, number of tickets, movie name, and show time.

2.Book Concert Ticket: Allows the user to book a concert ticket by providing details such as concert type, venue, date, number of tickets, and artist name.

3.Book Sports Ticket: Allows the user to book a sports ticket by providing details such as sports event name, venue, date, number of tickets, and sports type.

4.Display All Tickets: Shows all the tickets that have been booked so far, displaying the details of each ticket, including event information and the number of tickets booked.

5.User-Friendly Interface: The system offers a user-friendly menu-driven interface that guides users through various operations. It ensures a smooth user experience and facilitates easy interaction with the system.

## DESIGN
### CLASS DIAGRAM
![image](https://github.com/VRASHABHPATIL/Object-Oriented-Programming-Projects/assets/105427388/513c10a3-1734-4d5a-b766-95ceeb2b571d)

### DESCRIPTION OF EACH CLASS
#### Ticket
![image](https://github.com/VRASHABHPATIL/Object-Oriented-Programming-Projects/assets/105427388/6f53fcad-cff6-455b-a3ec-c6970cbb6938)

This is the base class that represents a generic ticket. It contains common attributes such as event name, venue, date, and the number of tickets. It also has a default constructor and a parameterized constructor to initialize the attributes. The class has a virtual function display(), which can be overridden in derived classes to display specific ticket details.

### MovieTicket(Derived From Ticket)
![image](https://github.com/VRASHABHPATIL/Object-Oriented-Programming-Projects/assets/105427388/4b1a5ee3-5730-43da-9a30-2e68c19a0fc1)

This class is derived from the Ticket class, representing a movie ticket. It adds two additional attributes: movieName (the name of the movie) and showTime (the time at which the movie will be screened). It overrides the display() function to include movie-specific details in the output

### ConcertTicket(Derived From Ticket)
![image](https://github.com/VRASHABHPATIL/Object-Oriented-Programming-Projects/assets/105427388/f86e4f1d-47f5-4da5-9245-1283877be3e4)

This class is also derived from the Ticket class, representing a concert ticket. It adds an additional attribute: artistName (the name of the performing artist or band). It overrides the display() function to include concert-specific details in the output.

### SportsTicket(Derived From Ticket)
![image](https://github.com/VRASHABHPATIL/Object-Oriented-Programming-Projects/assets/105427388/14f907f5-5828-4c47-9d8b-f99a6ea0b9a3)

This class is derived from the Ticket class, representing a sports event ticket. It adds an additional attribute: sportsType (the type of sport for the event, e.g., Football, Basketball, etc.). It overrides the display() function to include sports event-specific details in the output.

## Flow of object creation and function calL
### Object Creation
When the program starts, it declares an array of pointers to the base class Ticket named tickets, which can store up to 100 ticket objects.Inside the while loop in the `main()` function, the user is presented with a menu to choose an action, such as booking tickets or displaying all booked tickets.Depending on the user's choice, the program dynamically creates instances of the derived classes (`MovieTicket`, `ConcertTicket`, `SportsTicket`) using the new keyword and assigns them to the pointers in the tickets array







