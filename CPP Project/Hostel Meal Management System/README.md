# Hostel Meal Management System Project - Detailed Description

## Project Title: Hostel Meal Management System
#### Working Day : 05/03/2025 to 19/03/2025

## Project Overview:
### The Hostel Meal Management System is a software tool to track meal consumption, deposits, and costs in a hostel setting. The program uses a set of CSV files to store data for meals, deposits, and hostel costs, allowing users to interact with the system via a console interface. It provides an overview of meals consumed by hostel members, their deposits, balances, and overall cost management.

##  Project Components:
The project is divided into several key components:

### 1. Member Class:
Represents a hostel member and holds their details like name, total meals consumed, and total deposit made.

### 2. Deposit Class:
Represents a deposit entry, including the date, member's name, and amount deposited.

### 3. Meal History:
Tracks the number of meals consumed by each member on a particular day.

### 4. Hostel Cost:
Tracks the overall cost of the hostel for each day.

### 5. CSV Files: 
Data is read from and written to CSV files:

Meal_History.csv (meal consumption by members)

Deposit.csv (deposit records by members)

Hostel_Cost.csv (hostel costs)

#### The system allows the user to perform the following actions:

1. Add a new meal entry for the day.
2. Add a deposit by a member.
3. Add a hostel cost entry.
4. View detailed meal consumption.
5. View a summary of all data with calculated balances.
   
### Files Used:
#### 1. Meal_History.csv: 
Stores the meal records of hostel members on different days.

Format: 
Total Member(integer date type)
Day, Member1_Meal, Member2_Meal, ..., MemberN_Meal

Example:

7

Day  Najmul       Juel        Pias        Suhan       Labib       Badol       Sami

1     2.0         2.5         2.5         2.5         2.0         2.5         2.5

2     2.0         2.5         2.5         2.5         2.0         2.5         2.5

3     2.0         2.5         2.5         2.5         2.0         2.5         2.5

4     2.0         2.5         2.5         2.5         2.0         2.5         2.5

5     2.0         2.5         2.5         2.5         2.0         2.5         2.5

6     2.0         2.5         2.5         2.5         2.0         2.5         2.5

7     2.0         2.5         2.5         2.5         2.0         2.5         2.5

8     2.0         2.5         2.5         2.5         2.0         2.5         2.5

9     2.0         2.5         2.5         2.5         2.0         2.5         2.5

10    2.0         2.5         2.5         2.5         2.0         2.5         2.5


#### Deposit.csv: Stores the deposit records made by the hostel members.


Format: Date, Member_Name, Deposit_Amount

Example:

01/03/2025 Najmul 1000

02/03/2025 Pias 2000

03/03/2025 Juel 1500

04/03/2025 Sami 2000

05/03/2025 Suhan 1600

06/03/2025 Badol 1200

07/03/2025 Labib 5000


#### Hostel_Cost.csv: Tracks the cost associated with running the hostel.


Format: Date, Member_Name, Cost_Amount

Example:

01/01/2025 Najmul 1000

02/01/2025 Pias 2000

03/01/2025 Juel 1500

04/01/2025 Sami 2000

05/01/2025 Suhan 1600

06/01/2025 Badol 1200

07/01/2025 Labib 5000



### Core Functionality:

#### Meal Management: 

The system allows users to record daily meals consumed by each hostel member. The meal data is saved in Meal_History.csv, and the total meals consumed by each member is updated.

#### Deposit Management:

Users can add deposits made by hostel members, which are recorded in Deposit.csv. The total deposit amount for each member is updated.

#### Cost Management: 
Users can record hostel costs (such as utilities, staff salaries, etc.), which are logged in Hostel_Cost.csv. The total cost is updated as new costs are added.

#### Reports:
The system generates various reports:

Meal Report: Displays the meal consumption for each member on each day.
Summary Report: Provides a summary of each member's total meals, total deposits, balance (deposit - meal cost), and the hostel's overall cost.
### Key Operations:
#### Add Meal Entry:
Adds meal records for a new day. Each member's meal consumption is entered, and their total meals are updated.
#### Add Deposit:
Allows members to deposit money. The deposit amount is added to their total deposit, and it is recorded in the Deposit.csv.
#### Add Hostel Cost:
Tracks the overall cost for the hostel. This could be utility costs, maintenance costs, or other operational costs. The cost is added to Hostel_Cost.csv.
#### View Meal Details:
Displays meal consumption for all members for all days.
#### View Summary: 
Shows a summary table including total meals consumed, total deposits, total cost, and balances for each member.
## Data Flow & Interactions:
1. The system reads the data from the three CSV files (Meal_History.csv, Deposit.csv, Hostel_Cost.csv), and the information is processed to calculate the total meals, deposits, and costs.
2. Meal History: Each day's meal record is appended to Meal_History.csv, and the total meals consumed by each member are updated accordingly.
3. Deposit Records: When a deposit is made, it is added to Deposit.csv, and the corresponding member's total deposit is updated.
4. Hostel Costs: Each time a cost is added, it is appended to Hostel_Cost.csv, and the overall hostel cost is recalculated.
5. The user can view the meal consumption details and overall summary, which are dynamically updated from the files.

## Key Features & Functions:
### Meal Record Management:

1. Ability to record and track meals on a daily basis.
2. Meal consumption data is stored in a structured format.
3. Summary of meals per member per day is available.

### Deposit Management:

1. Record deposits made by members on specific dates.
2. Update total deposit and calculate member balance (Deposit - Meal Cost).

###  Cost Management:

1. Keep track of the total costs for running the hostel.
2. Update the cost for each member based on their meal consumption.

### Reports:

1. Meal Details Report: Shows meal consumption for all members.
2. Summary Report: Includes total meals, total costs, total deposits, and balances.

### Data Persistence:

1. The system stores all data in CSV files, ensuring data persistence across program executions.
2. New entries are appended to the respective files.

Example Interaction (Console Output):

Main Menu:

Option Choice 
1. Add meal for this day
2. Add Deposit
3. Add Hostel Cost
4. View Meal Details
5. Summary
0. Close

Do you want? 1

##### Adding Meal:

Najmul : 2

Juel : 2.5

Pias : 2.5

Suhan : 2.5

Labib : 2

Badol : 2.5

Sami : 2.5


Meal adding Done.........


##### Viewing Meal Details:


-----------------------------------------------------------------------------------

|Day| Najmul    | Juel      | Pias      | Suhan     | Labib     | Badol     | Sami

------------------------------------------------------------------------------------

1     2.0         2.5         2.5         2.5         2.0         2.5         2.5

2     2.0         2.5         2.5         2.5         2.0         2.5         2.5


3     2.0         2.5         2.5         2.5         2.0         2.5         2.5

4     2.0         2.5         2.5         2.5         2.0         2.5         2.5

5     2.0         2.5         2.5         2.5         2.0         2.5         2.5

6     2.0         2.5         2.5         2.5         2.0         2.5         2.5

7     2.0         2.5         2.5         2.5         2.0         2.5         2.5

8     2.0         2.5         2.5         2.5         2.0         2.5         2.5



9     2.0         2.5         2.5         2.5         2.0         2.5         2.5

10    2.0         2.5         2.5         2.5         2.0         2.5         2.5



#### Viewing Summary:
                    
                         Hostel Management System


---------------------------------------------------------------------------

| Name           | Total Meals | Total Cost  | Deposit     | Balance      |

---------------------------------------------------------------------------

| Najmul         | 20.00       | 1932.43     | 1000        | -932.43      |

| Juel           | 25.00       | 2415.54     | 1500        | -915.54      |

| Pias           | 25.00       | 2415.54     | 2000        | -415.54      |

| Suhan          | 25.00       | 2415.54     | 1600        | -815.54      |

| Labib          | 20.00       | 1932.43     | 5000        | 3067.57      |

| Badol          | 25.00       | 2415.54     | 1200        | -1215.54     |

| Sami           | 25.00       | 2415.54     | 2000        | -415.54      |

---------------------------------------------------------------------------



Hostel Total Cost : 14300



Hostel Meal Rate : 96.62


 # Conclusion:
 
## This Hostel Meal Management System provides an effective way to track meal consumption, deposits, and hostel costs. It ensures transparent and accurate accounting for hostel operations. The system's modular design allows easy modifications and scalability, making it suitable for managing hostel meal plans in larger or smaller settings. The CSV-based approach ensures data persistence, and the console interface provides a simple yet effective user experience for managing hostel meal-related operations.

