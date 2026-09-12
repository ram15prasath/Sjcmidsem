#include <iostream>
#include <string>
using namespace std;

class TodoList
{
    struct Task
    {
        int id;
        string name;
        bool completed;
    };

    Task tasks[15];
    int count = 0;
    int nextID = 1;

public:

    void addTask()
    {
        if (count == 15)
        {
            cout << "Task list is full.\n";
            return;
        }

        cin.ignore();

        cout << "Enter task description: ";
        getline(cin, tasks[count].name);

        tasks[count].id = nextID;
        tasks[count].completed = false;

        cout << "Task added with ID " << nextID << ".\n";

        count++;
        nextID++;
    }

    void completeTask()
    {
        int id;

        cout << "Enter task ID: ";
        cin >> id;

        for (int i = 0; i < count; i++)
        {
            if (tasks[i].id == id)
            {
                if (tasks[i].completed)
                    cout << "Task is already completed.\n";
                else
                {
                    tasks[i].completed = true;
                    cout << "Task completed.\n";
                }

                return;
            }
        }

        cout << "Task not found.\n";
    }

    void showTasks(bool completed)
    {
        bool found = false;

        for (int i = 0; i < count; i++)
        {
            if (tasks[i].completed == completed)
            {
                cout << "[" << tasks[i].id << "] "
                     << tasks[i].name << "\n";

                found = true;
            }
        }

        if (!found)
            cout << "No tasks to show.\n";
    }

    void deleteTask()
    {
        int id;

        cout << "Enter task ID: ";
        cin >> id;

        for (int i = 0; i < count; i++)
        {
            if (tasks[i].id == id)
            {
                for (int j = i; j < count - 1; j++)
                    tasks[j] = tasks[j + 1];

                count--;

                cout << "Task deleted.\n";
                return;
            }
        }

        cout << "Task not found.\n";
    }

    void display()
    {
        int choice;

        do
        {
            cout << "\n===== To-Do List =====\n";
            cout<<"+++++++++";
            cout << "1. Add Task\n";
            cout << "2. Mark Completed\n";
            cout << "3. View Pending\n";
            cout << "4. View Completed\n";
            cout << "5. Delete Task\n";
            cout << "6. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    addTask();
                    break;

                case 2:
                    completeTask();
                    break;

                case 3:
                    showTasks(false);
                    break;

                case 4:
                    showTasks(true);
                    break;

                case 5:
                    deleteTask();
                    break;

                case 6:
                    cout << "Exiting...\n";
                    break;

                default:
                    cout << "Invalid choice.\n";
            }

        } while (choice != 6);
    }
};

int main()
{
    TodoList todo;

    todo.display();

    return 0;
}
